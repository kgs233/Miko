using Miko.Library.Source;
using System.IO;
using System.Text;
using Xunit;
using System;
using System.Linq;

namespace Miko.Library.Source.Tests;

// StreamSourceTest 继承自 IDisposable 以确保 MemoryStream 资源得到释放喵
public sealed class StreamSourceTests : IDisposable
{
    private MemoryStream? testStream;
    
    // Test helper enum for encodings
    public enum EncodingType { Utf8, Ascii }

    // --- Cleanup ---
    
    public void Dispose()
    {
        // Dispose of the MemoryStream after each test if it was created.
        testStream?.Dispose();
    }

    // --- Constructor Tests ---

    [Fact]
    public void Constructor_ThrowsArgumentNullException_WhenStreamIsNull()
    {
        // Stream must not be null.
        Assert.Throws<ArgumentNullException>(() => new StreamSource(null!));
    }

    [Fact]
    public void Constructor_SetsDefaultSourceNameCorrectly()
    {
        testStream = new MemoryStream();
        using var source = new StreamSource(testStream);
        
        // Default SourceName when not FileStream and no name provided is "StreamSource".
        Assert.Equal("StreamSource", source.SourceName);
    }
    
    [Fact]
    public void Constructor_SetsCustomSourceNameCorrectly()
    {
        const string customName = "My Test Stream";
        testStream = new MemoryStream();
        using var source = new StreamSource(testStream, sourceName: customName);
        
        // SourceName should match the provided custom name.
        Assert.Equal(customName, source.SourceName);
    }

    // --- Read, Peek, and EOF Tests ---

    [Theory]
    [InlineData("ABC", EncodingType.Ascii)]
    [InlineData("你好", EncodingType.Utf8)] // Test multi-byte character reading
    public void Read_ReadsCharactersCorrectly_AndHandlesEOF(string content, EncodingType type)
    {
        Encoding encoding = GetEncoding(type);
        
        // Write content to a MemoryStream
        byte[] bytes = encoding.GetBytes(content);
        testStream = new MemoryStream(bytes);

        using var source = new StreamSource(testStream, encoding);
        
        // Read and verify all characters
        for (int i = 0; i < content.Length; i++)
        {
            Assert.False(source.IsEOF, $"Should not be EOF at index {i}.");
            char actual = source.Read();
            Assert.Equal(content[i], actual);
        }

        // After reading all content, IsEOF should be true.
        Assert.True(source.IsEOF);
        // Reading again should return '\0'.
        Assert.Equal('\0', source.Read());
    }
    
    [Fact]
    public void Peek_ReadsNextCharactersWithoutAdvancingPosition()
    {
        const string content = "PQR";
        byte[] bytes = Encoding.UTF8.GetBytes(content);
        testStream = new MemoryStream(bytes);
        
        using var source = new StreamSource(testStream);

        // Peek(0) should return 'P'
        Assert.Equal('P', source.Peek(0));
        Assert.Equal(1, source.Column); // Position should remain unchanged
        
        // Peek(1) should return 'Q'
        Assert.Equal('Q', source.Peek(1));
        
        // Peek(2) should return 'R'
        Assert.Equal('R', source.Peek(2));
        
        // Read 'P' and advance
        Assert.Equal('P', source.Read());
        Assert.Equal(2, source.Column);

        // After reading 'P', Peek(0) should return 'Q'
        Assert.Equal('Q', source.Peek());
        
        // Peek past EOF should return '\0'
        Assert.Equal('\0', source.Peek(3));
    }

    // --- Position Update Test (Reusing correct logic from FileSource test) ---

    [Fact]
    public void Read_UpdatesLineAndColumnCorrectly()
    {
        // Content is: 'L','i','n','e',' ','1','\n','L','i','n','e',' ','2','\r','\n','L','i','n','e',' ','3'
        const string content = "Line 1\nLine 2\r\nLine 3";
        byte[] bytes = Encoding.UTF8.GetBytes(content);
        testStream = new MemoryStream(bytes);
        
        using var source = new StreamSource(testStream);
        
        // Read the first 6 characters: "Line 1"
        source.ReadN(6); 
        
        // Verify position before reading '\n'
        Assert.Equal(1, source.Line);
        Assert.Equal(7, source.Column); 

        // Read '\n' (Unix) -> Line becomes 2, Column resets to 1
        Assert.Equal('\n', source.Read()); 
        Assert.Equal(2, source.Line);
        Assert.Equal(1, source.Column);
        
        // Read characters for "Line 2" (6 characters)
        source.ReadN(6); 
        
        // Read '\r' (Windows first char) -> Column increments
        Assert.Equal('\r', source.Read()); 
        Assert.Equal(2, source.Line);
        Assert.Equal(8, source.Column); 
        
        // Read '\n' (Windows second char) -> Line increments, Column resets
        Assert.Equal('\n', source.Read()); 
        Assert.Equal(3, source.Line);
        Assert.Equal(1, source.Column);
    }
    
    // --- Resource Disposal Test ---
    
    [Fact]
    public void Dispose_ClosesInternalReaderAndPreventsFurtherOperations()
    {
        const string content = "A";
        byte[] bytes = Encoding.UTF8.GetBytes(content);
        testStream = new MemoryStream(bytes);
        
        var source = new StreamSource(testStream);
        
        // Ensure we can read before disposal
        Assert.Equal('A', source.Read());
        
        // Dispose of the resource
        source.Dispose();
        
        // Operations should now throw ObjectDisposedException, 
        // as inherited from Source class.
        Assert.Throws<ObjectDisposedException>(() => source.Read());
        Assert.Throws<ObjectDisposedException>(() => source.Peek());
        Assert.Throws<ObjectDisposedException>(() => source.Peek(0));
        // IsEOF should return true immediately after disposal.
        Assert.True(source.IsEOF);
    }

    // --- Helper Method ---
    
    private static Encoding GetEncoding(EncodingType type)
    {
        return type switch
        {
            EncodingType.Ascii => Encoding.ASCII,
            EncodingType.Utf8 => Encoding.UTF8,
            _ => throw new ArgumentOutOfRangeException(nameof(type)),
        };
    }
}