using System.Text;
using System.IO.MemoryMappedFiles;

namespace Miko.Library.Source;

/// <summary>
/// A Source implementation using Memory-Mapped Files (MMF) for efficient, low-memory access
/// to large files on disk. Instantiation may throw file-system related exceptions.
/// </summary>
public sealed class FileSource : Source
{
    private readonly MemoryMappedFile _mappedFile;
    private readonly MemoryMappedViewAccessor _accessor;
    private readonly Encoding _encoding;
    private readonly long _byteLength;
    
    // 新增的私有成员，用于存储完整的文件路径
    private readonly string _filePath; 

    public override long Length => _byteLength;

    /// <summary>
    /// Gets the full, absolute path to the physical file on disk.
    /// </summary>
    public string FilePath => _filePath;

    /// <summary>
    /// Initializes a new instance of the <see cref="FileSource"/> class by mapping a file to memory.
    /// </summary>
    /// <param name="filePath">The full path to the source file.</param>
    /// <param name="encoding">The file encoding (optional, defaults to UTF8).</param>
    public FileSource(string filePath, Encoding? encoding = null)
        : base(Path.GetFileName(filePath)) // SourceName 为文件名
    {
        if (string.IsNullOrWhiteSpace(filePath))
            throw new ArgumentException("File path cannot be null or empty.", nameof(filePath));

        _filePath = filePath;
        _encoding = encoding ?? Encoding.UTF8;

        // 1. 创建 MemoryMappedFile
        _mappedFile = MemoryMappedFile.CreateFromFile(
            _filePath, 
            FileMode.Open, 
            null, 
            0, // Map the entire file
            MemoryMappedFileAccess.Read);

        // 2. 创建视图，获取访问器
        _accessor = _mappedFile.CreateViewAccessor(0, 0, MemoryMappedFileAccess.Read);
        _byteLength = _accessor.Capacity;
    }

    public override char GetChar(long index)
    {
        if (index < 0 || index >= _byteLength)
            return '\0'; 

        // Read byte from MMF view
        byte b = _accessor.ReadByte(index);
        
        // Simplified: Treat byte as char (works for ASCII/simple UTF-8)
        return (char)b; 
    }

    public override void Dispose()
    {
        _accessor?.Dispose();
        _mappedFile?.Dispose();
    }
}