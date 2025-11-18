using Miko.Library.Source;
using System.IO;
using System.Text;
using Xunit;
using System;
using System.Linq;

namespace Miko.Library.Source.Tests;

public sealed class FileSourceTests : IDisposable
{
    private readonly string tempFilePath;

    public FileSourceTests()
    {
        // Create a unique temporary file path for testing.
        tempFilePath = Path.Combine(Path.GetTempPath(), Path.GetRandomFileName());
    }

    // --- IDisposable Implementation ---

    public void Dispose()
    {
        // Ensure the temporary file is deleted after tests.
        if (File.Exists(tempFilePath))
        {
            File.Delete(tempFilePath);
        }
    }

    // --- Constructor and File Path Tests ---

    [Fact]
    public void Constructor_ThrowsArgumentException_WhenFilePathIsInvalid()
    {
        // Assert that null, empty, or whitespace paths throw an exception.
        Assert.Throws<ArgumentException>(() => new FileSource(null!));
        Assert.Throws<ArgumentException>(() => new FileSource(string.Empty));
        Assert.Throws<ArgumentException>(() => new FileSource("   "));
    }

    [Fact]
    public void Constructor_InitializesPropertiesCorrectly()
    {
        // Prepare file content.
        File.WriteAllText(tempFilePath, "Test Content");

        // Execute test.
        using var source = new FileSource(tempFilePath);

        // Verify properties.
        Assert.Equal(tempFilePath, source.FilePath);
        Assert.Equal(Path.GetFileName(tempFilePath), source.SourceName);
        Assert.Equal(1, source.Line);
        Assert.Equal(1, source.Column);
    }

    // --- Read/Peek and EOF Tests ---

    [Theory]
    [InlineData("ABC", EncodingType.Ascii)]
    [InlineData("你好", EncodingType.GBK)]
    [InlineData("繁體字", EncodingType.BIG5)]
    [InlineData("いろは", EncodingType.Shift_JIS)]
    [InlineData("Hello, 你好, こにちは！！", EncodingType.Utf8)]
    public void Read_ReadsCharactersCorrectly(string content, EncodingType type)
    {
        // Get encoding and write content to the temporary file.
        Encoding encoding = GetEncoding(type);
        File.WriteAllText(tempFilePath, content, encoding);

        using var source = new FileSource(tempFilePath, encoding);

        for (int i = 0; i < content.Length; i++)
        {
            // Ensure not EOF.
            Assert.False(source.IsEOF);
            // Read character.
            char actual = source.Read();
            // Verify the character read.
            Assert.Equal(content[i], actual);
            // Verify position.
            Assert.Equal(1, source.Line);
            Assert.Equal(i + 2, source.Column);
        }

        // After reading all content, IsEOF should be true.
        Assert.True(source.IsEOF);
        // Reading again should return '\0'.
        Assert.Equal('\0', source.Read());
    }

    [Theory]
    [InlineData("ABC", 0, 'A')]
    [InlineData("ABC", 1, 'B')]
    [InlineData("ABC", 2, 'C')]
    [InlineData("ABC", 3, '\0')]
    public void Peek_PeeksCharactersCorrectly(string content, int offset, char expected)
    {
        File.WriteAllText(tempFilePath, content);
        using var source = new FileSource(tempFilePath);

        // Verify Peek(n) result.
        Assert.Equal(expected, source.Peek(offset));

        // Peek should not change position.
        Assert.Equal(1, source.Line);
        Assert.Equal(1, source.Column);

        // Verify Peek() shortcut.
        if (offset == 0)
        {
            Assert.Equal(expected, source.Peek());
        }
    }

    // --- Newline and Position Update Tests ---

    [Fact]
    public void Read_UpdatesLineAndColumnCorrectly()
    {
        const string content = "Line 1\nLine 2\r\nLine 3";
        File.WriteAllText(tempFilePath, content);
        using var source = new FileSource(tempFilePath);

        // --- Test 1: Reading up to the Unix Newline (\n) ---

        // Read the first 6 characters: "Line 1"
        source.ReadN(6);

        // Verify position before reading '\n'
        Assert.Equal(1, source.Line);
        Assert.Equal(7, source.Column);

        // Now, read the 7th character: '\n' (Unix) 
        char unixNewline = source.Read();

        // Check that we read '\n'
        Assert.Equal('\n', unixNewline);
        // Check that position updated: Line becomes 2, Column resets to 1
        Assert.Equal(2, source.Line);
        Assert.Equal(1, source.Column);

        // --- Test 2: Reading up to the Windows Newline (\r\n) ---

        // Read characters for "Line 2" (6 characters)
        source.ReadN(6);

        // Verify position before reading '\r'
        Assert.Equal(2, source.Line);
        Assert.Equal(7, source.Column);

        // Read '\r' (Windows first char) -> Column increments
        char carriageReturn = source.Read();
        Assert.Equal('\r', carriageReturn);
        Assert.Equal(2, source.Line);
        Assert.Equal(8, source.Column);

        // Read '\n' (Windows second char) -> Line increments, Column resets
        char lineFeed = source.Read();
        Assert.Equal('\n', lineFeed);
        Assert.Equal(3, source.Line);
        Assert.Equal(1, source.Column);

        // Read "L" of Line 3
        source.Read();
        Assert.Equal(3, source.Line);
        Assert.Equal(2, source.Column);
    }

    // --- ReadN Tests ---

    [Fact]
    public void ReadN_ReadsMultipleCharactersCorrectly()
    {
        const string content = "0123456789";
        File.WriteAllText(tempFilePath, content);
        using var source = new FileSource(tempFilePath);

        // Read the first 5 characters.
        string result1 = source.ReadN(5);
        Assert.Equal("01234", result1);
        Assert.Equal(1, source.Line);
        Assert.Equal(6, source.Column);

        // Read the rest.
        string result2 = source.ReadN(10); // Tries to read 10, but only 5 remain.
        Assert.Equal("56789", result2);
        Assert.Equal(1, source.Line);
        Assert.Equal(11, source.Column);

        // Should be EOF now.
        Assert.True(source.IsEOF);
        string result3 = source.ReadN(1);
        Assert.Equal(string.Empty, result3);
    }

    // --- Resource Disposal Test ---

    [Fact]
    public void Dispose_PreventsFurtherOperations()
    {
        File.WriteAllText(tempFilePath, "A");
        var source = new FileSource(tempFilePath);

        // Dispose of the resource.
        source.Dispose();

        // Operations like Read/Peek should throw ObjectDisposedException.
        Assert.Throws<ObjectDisposedException>(() => source.Read());
        Assert.Throws<ObjectDisposedException>(() => source.Peek());
        Assert.Throws<ObjectDisposedException>(() => source.Peek(0));
        // IsEOF should return true immediately after disposal.
        Assert.True(source.IsEOF);
    }

    // --- Private Helper Method: Get Encoding ---

    public enum EncodingType { Utf8, Ascii, Shift_JIS, GBK, BIG5 }

    private static Encoding GetEncoding(EncodingType type)
    {
        Encoding.RegisterProvider(CodePagesEncodingProvider.Instance);
        return type switch
        {
            EncodingType.Ascii => Encoding.ASCII,
            EncodingType.Utf8 => Encoding.UTF8,
            EncodingType.Shift_JIS => Encoding.GetEncoding("Shift_JIS"),
            EncodingType.GBK => Encoding.GetEncoding("GBK"),
            EncodingType.BIG5 => Encoding.GetEncoding(950),
            _ => throw new ArgumentOutOfRangeException(nameof(type)),
        };
    }
}