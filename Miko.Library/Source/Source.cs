namespace Miko.Library.Source;

/// <summary>
/// Abstract base class representing a source of characters for the Lexer.
/// Provides indexed access to the source content, optimized for reading.
/// </summary>
public abstract class Source(string? name = null) : IDisposable
{
    /// <summary>
    /// Gets the name or identifier of the source, used primarily for error reporting.
    /// This can be a file name, "InMemorySource", or any meaningful identifier.
    /// </summary>
    public string? SourceName { get; } = name;

    /// <summary>
    /// Gets the total length (number of characters or bytes) of the source content.
    /// </summary>
    public abstract long Length { get; }

    /// <summary>
    /// Gets the character at the specified zero-based index.
    /// </summary>
    public abstract char GetChar(long index);

    // Must be overridden by subclasses that use disposable resources (like MMF)
    public abstract void Dispose();
}