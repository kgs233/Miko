using System.IO;
using System;

namespace Miko.Library.Source;

/// <summary>
/// A Source implementation that wraps a string, leveraging StringReader 
/// for efficient, sequential character access in memory with position tracking.
/// </summary>
public sealed class StringSource : Source
{
    private readonly StringReader internalReader;

    /// <summary>
    /// Initializes a new instance of the <see cref="StringSource"/> class from a string.
    /// </summary>
    /// <param name="content">The raw source code string.</param>
    /// <param name="sourceName">An optional identifier for the source (e.g., "InMemorySource").</param>
    public StringSource(string content, string? sourceName = "InMemorySource")
        // Initialize SourceName using the provided or default name.
        : base() 
    {
        SourceName = sourceName ?? "InMemorySource";
        // StringReader is used for sequential char access.
        internalReader = new StringReader(content ?? string.Empty);
    }

    /// <summary>
    /// Reads the next character from the underlying StringReader.
    /// </summary>
    /// <returns>The next character, or '\0' if the end of the source is reached.</returns>
    public override char ImplementRead()
    {
        // StringReader.Read() returns -1 on EOF.
        int charCode = internalReader.Read();

        if (charCode == -1)
        {
            return '\0';
        }
        
        return (char)charCode;
    }
    
    /// <summary>
    /// Releases the underlying StringReader resource.
    /// </summary>
    /// <param name="disposing">True to release both managed and unmanaged resources.</param>
    protected override void Dispose(bool disposing)
    {
        if (disposing)
        {
            // Dispose of the managed resource held by this derived class.
            internalReader.Dispose();
        }
        
        // Call the base class's Dispose method.
        base.Dispose(disposing);
    }
}