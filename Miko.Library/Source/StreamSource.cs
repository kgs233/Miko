namespace Miko.Library.Source;

/// <summary>
/// A Source adapter implementation that reads the entire content from a standard C# TextReader
/// (e.g., StreamReader, StringReader) during construction and stores it in memory.
/// This allows stream-based inputs to conform to the indexed-access requirements of the Source abstract class.
/// </summary>
public sealed class StreamSource : Source
{
    private readonly char[] _content;

    public override long Length => _content.LongLength;

    /// <summary>
    /// Initializes a new instance of the <see cref="StreamSource"/> class by reading the entire
    /// content from the provided TextReader. The reader is consumed upon construction.
    /// </summary>
    /// <param name="reader">The TextReader instance to read from. It will be fully consumed.</param>
    /// <param name="sourceName">An optional identifier for the source (e.g., "NetworkStream").</param>
    public StreamSource(TextReader reader, string? sourceName = "StreamSource") 
        : base(sourceName) 
    {
        if (reader == null)
            throw new ArgumentNullException(nameof(reader));

        // 核心逻辑：将整个流内容读取到内部字符串，然后转换为 char[]，以满足 Source 接口的索引要求。
        // 这是 TextReader 适配为随机访问的必要开销。
        string fullContent = reader.ReadToEnd();
        _content = fullContent.ToCharArray();
    }

    public override char GetChar(long index)
    {
        if (index < 0 || index >= _content.LongLength)
        {
            return '\0'; // End-of-file marker for out-of-bounds access
        }
        return _content[index]; 
    }
    
    // No disposable resources are held by this class (the TextReader is consumed and closed/disposed externally).
    public override void Dispose() { }
}