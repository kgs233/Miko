using System;
using System.Collections.Generic;
using System.Text;

namespace Miko.Library.Source
{
    /// <summary>
    /// Abstract base class representing an input source, providing character reading and peeking capabilities.
    /// This class implements IDisposable to ensure proper resource management in derived classes.
    /// </summary>
    public abstract class Source : IDisposable
    {
        private bool disposed = false;

        /// <summary>
        /// The name of the source, e.g., filename or description.
        /// </summary>
        public string SourceName { get; protected set; } = "Unnamed Source";

        /// <summary>
        /// The current line number, starting from 1.
        /// </summary>
        public int Line { get; protected set; } = 1;

        /// <summary>
        /// The current column number, starting from 1.
        /// </summary>
        public int Column { get; protected set; } = 1;

        /// <summary>
        /// The maximum number of lookahead characters allowed.
        /// </summary>
        public const int MaxLookahead = 256;

        // The lookahead buffer for storing read characters. Queue naturally supports FIFO read/peek.
        protected readonly Queue<char> lookaheadBuffer = new Queue<char>(MaxLookahead);

        // Flag indicating whether the end of the source has been reached.
        protected bool isEndOfFile = false;

        /// <summary>
        /// When implemented in a derived class, reads the next raw character from the actual source (e.g., file or stream).
        /// </summary>
        /// <returns>The next raw character, or '\0' if the end of the source is reached.</returns>
        public abstract char ImplementRead();

        /// <summary>
        /// Reads and returns the current character, advancing the position pointer by one.
        /// </summary>
        /// <returns>The character at the current position.</returns>
        public char Read()
        {
            if (disposed) throw new ObjectDisposedException(nameof(Source));

            // Ensure there is at least one character to read or confirm EOF.
            if (!IsEOF())
            {
                // Peek(0) ensures the buffer is filled if necessary and returns the next char.
                char current = Peek(0);
                
                // Dequeue the character (Consume it)
                lookaheadBuffer.Dequeue(); 

                // Update position information
                if (current == '\n')
                {
                    Line++;
                    Column = 1;
                }
                else
                {
                    Column++;
                }

                return current;
            }
            return '\0';
        }

        /// <summary>
        /// Reads and returns the next N characters, advancing the position pointer by N.
        /// </summary>
        /// <param name="n">The number of characters to read.</param>
        /// <returns>A string containing N characters (or fewer if EOF is reached).</returns>
        public string ReadN(int n)
        {
            if (disposed) throw new ObjectDisposedException(nameof(Source));
            if (n <= 0) return string.Empty;
            if (n > MaxLookahead) n = MaxLookahead;

            StringBuilder sb = new StringBuilder(n);

            for (int i = 0; i < n; i++)
            {
                if (IsEOF()) break;
                sb.Append(Read());
            }

            return sb.ToString();
        }

        /// <summary>
        /// Peeks at the current character (Lookahead 0) without advancing the pointer.
        /// </summary>
        /// <returns>The character at the current position.</returns>
        public char Peek()
        {
            if (disposed) throw new ObjectDisposedException(nameof(Source));
            return Peek(0);
        }

        /// <summary>
        /// Peeks at the character N positions ahead of the current position (N >= 0) without advancing the pointer.
        /// </summary>
        /// <param name="n">The offset from the current position (0 is the current character).</param>
        /// <returns>The character at the offset n.</returns>
        public char Peek(int n)
        {
            if (disposed) throw new ObjectDisposedException(nameof(Source));
            if (n < 0 || n >= MaxLookahead)
            {
                throw new ArgumentOutOfRangeException(nameof(n), $"Offset n must be between 0 and {MaxLookahead - 1}.");
            }

            // Fill buffer up to the required offset n
            FillBuffer(n + 1);

            // If the buffer size is less than or equal to n, it means EOF was hit before reaching n.
            if (lookaheadBuffer.Count <= n)
            {
                return '\0';
            }
            
            // Queue doesn't have an indexed Peek. To implement Peek(n), we must convert to array.
            // This is slightly less efficient than a direct circular buffer array, but cleaner code.
            if (n == 0)
            {
                return lookaheadBuffer.Peek();
            }
            else
            {
                return lookaheadBuffer.ToArray()[n];
            }
        }

        /// <summary>
        /// Checks whether the end of the source has been reached.
        /// </summary>
        /// <returns>True if the end of the source has been reached, otherwise false.</returns>
        public bool IsEOF()
        {
            if (disposed) return true;

            // If the queue is empty and we've confirmed EOF from the source, return true.
            if (lookaheadBuffer.Count == 0 && isEndOfFile)
            {
                return true;
            }
            // If the queue is empty but EOF flag is not set, try filling once to determine EOF state.
            else if (lookaheadBuffer.Count == 0 && !isEndOfFile)
            {
                FillBuffer(1);
                return lookaheadBuffer.Count == 0;
            }
            return false;
        }


        // --- Helper Method ---

        /// <summary>
        /// Fills the lookaheadBuffer by reading data from ImplementRead().
        /// </summary>
        /// <param name="minRequired">The minimum number of characters required to be in the buffer after filling.</param>
        protected void FillBuffer(int minRequired = MaxLookahead)
        {
            if (isEndOfFile) return;

            int targetSize = Math.Min(MaxLookahead, minRequired);

            // Read characters until the buffer contains the target number of items or is full.
            while (lookaheadBuffer.Count < targetSize)
            {
                char c = ImplementRead();

                // Check for EOF marker ('\0')
                if (c == '\0')
                {
                    isEndOfFile = true;
                    break;
                }

                lookaheadBuffer.Enqueue(c);
            }
        }

        // --- IDisposable Implementation ---

        /// <summary>
        /// Public method to release resources.
        /// </summary>
        public void Dispose()
        {
            Dispose(true);
            // Prevents the finalizer from being called.
            GC.SuppressFinalize(this);
        }

        /// <summary>
        /// Protected virtual method for releasing resources. Derived classes should override this
        /// to clean up their own resources.
        /// </summary>
        /// <param name="disposing">True to release both managed and unmanaged resources.</param>
        protected virtual void Dispose(bool disposing)
        {
            if (disposed) return;

            if (disposing)
            {
                // Managed resources specific to the base class (the Queue) can be cleared, 
                // though GC handles memory, explicit clearing helps.
                lookaheadBuffer.Clear();
            }

            disposed = true;
        }

        /// <summary>
        /// Finalizer to ensure unmanaged resources are released if Dispose was not explicitly called.
        /// </summary>
        ~Source()
        {
            Dispose(false);
        }
    }
}