namespace Miko.Library.Source;

/// <summary>
/// A Source implementation that stores the entire content as a string in memory.
/// Suitable for smaller files or in-memory code snippets.
/// </summary>
public sealed class StringSource : Source
{
    private readonly string _content;

    public override long Length => _content.Length;

    /// <summary>
    /// Initializes a new instance of the <see cref="StringSource"/> class from a string.
    /// </summary>
    /// <param name="content">The raw source code string.</param>
    /// <param name="sourceName">An optional identifier for the source (e.g., "REPL_Input_1").</param>
    public StringSource(string content, string? sourceName = "InMemorySource") 
        : base(sourceName) 
    {
        _content = content ?? string.Empty;
    }

    public override char GetChar(long index)
    {
        if (index < 0 || index >= _content.Length)
        {
            return '\0'; // End-of-file marker for out-of-bounds access
        }
        return _content[(int)index]; 
    }
    
    // No disposable resources
    public override void Dispose() { }
}