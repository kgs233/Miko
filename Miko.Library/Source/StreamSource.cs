using System.IO;
using System;
using System.Text;

namespace Miko.Library.Source;

/// <summary>
/// A Source implementation that wraps a standard .NET Stream, allowing it to
/// provide sequential character access with line and column tracking, using
/// the specified character encoding.
/// </summary>
public sealed class StreamSource : Source
{
    private readonly StreamReader internalReader;
    
    /// <summary>
    /// Initializes a new instance of the <see cref="StreamSource"/> class.
    /// </summary>
    /// <param name="stream">The base Stream instance to read from (e.g., FileStream, NetworkStream).</param>
    /// <param name="encoding">The character encoding to use (optional, defaults to UTF8). 
    /// If null, UTF8 is used with BOM detection.</param>
    /// <param name="sourceName">An optional identifier for the source.</param>
    /// <exception cref="ArgumentNullException">Thrown if the provided stream is null.</exception>
    public StreamSource(Stream stream, Encoding? encoding = null, string? sourceName = null)
        // Set SourceName using the file path if it's a FileStream, otherwise use the provided name or a default.
        : base() 
    {
        if (stream == null)
            throw new ArgumentNullException(nameof(stream));

        // Initialize SourceName based on stream type or provided name.
        SourceName = sourceName ?? (stream is FileStream fs ? fs.Name : "StreamSource");

        Encoding finalEncoding = encoding ?? Encoding.UTF8;
        bool detectBom = (encoding == null);

        internalReader = new StreamReader(stream, finalEncoding, detectBom);
    }

    /// <summary>
    /// Reads the next character from the internal StreamReader.
    /// </summary>
    /// <returns>The next character, or '\0' if the end of the source is reached.</returns>
    public override char ImplementRead()
    {
        // StreamReader.Read() returns -1 on EOF.
        int charCode = internalReader.Read();

        if (charCode == -1)
        {
            return '\0';
        }
        
        return (char)charCode;
    }

    /// <summary>
    /// Releases the unmanaged and managed resources used by the <see cref="StreamSource"/>.
    /// </summary>
    /// <param name="disposing">True to release both managed and unmanaged resources.</param>
    protected override void Dispose(bool disposing)
    {
        if (disposing)
        {
            // Dispose of the managed resource held by this derived class.
            // internalReader will also dispose of the underlying Stream, 
            // unless its leaveOpen flag was set (which isn't the case by default here).
            internalReader.Dispose();
        }
        
        // Call the base class's Dispose method.
        base.Dispose(disposing);
    }
}