using System.IO;
using System.IO.MemoryMappedFiles;
using System.Text;
using System;

namespace Miko.Library.Source;

/// <summary>
/// A Source implementation that uses Memory-Mapped Files (MMF) for efficient, low-memory access
/// to large files, using the specified character encoding for sequential access.
/// </summary>
public sealed class FileSource : Source
{
    private readonly MemoryMappedFile mappedFile;
    private readonly MemoryMappedViewStream mappedStream;
    private readonly StreamReader internalReader;
    private readonly string filePath;

    /// <summary>
    /// Gets the full, absolute path to the physical file on disk.
    /// </summary>
    public string FilePath => filePath;

    /// <summary>
    /// Initializes a new instance of the <see cref="FileSource"/> class by mapping a file to memory.
    /// </summary>
    /// <param name="filePath">The full path to the source file.</param>
    /// <param name="encoding">The file encoding (optional, defaults to UTF8). 
    /// If null, UTF8 is used with BOM detection.</param>
    public FileSource(string filePath, Encoding? encoding = null)
        : base() 
    {
        if (string.IsNullOrWhiteSpace(filePath))
            throw new ArgumentException("File path cannot be null or empty.", nameof(filePath));

        this.filePath = filePath;
        
        SourceName = Path.GetFileName(filePath);
        
        mappedFile = MemoryMappedFile.CreateFromFile(
            this.filePath,
            FileMode.Open, 
            null, 
            0,
            MemoryMappedFileAccess.Read);

        mappedStream = mappedFile.CreateViewStream(0, 0, MemoryMappedFileAccess.Read);
        
        Encoding finalEncoding = encoding ?? Encoding.UTF8;
        bool detectBom = (encoding == null);
        internalReader = new StreamReader(mappedStream, finalEncoding, detectBom);
    }
    
    /// <summary>
    /// Reads the next character from the internal StreamReader using ImplementRead().
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
    /// Releases the unmanaged and managed resources used by the <see cref="FileSource"/>.
    /// </summary>
    /// <param name="disposing">True to release both managed and unmanaged resources.</param>
    protected override void Dispose(bool disposing)
    {
        if (disposing)
        {
            // Dispose of managed resources held by this derived class.
            internalReader.Dispose(); 
            mappedFile.Dispose();
        }

        // Call the base class's Dispose method.
        base.Dispose(disposing);
    }
}