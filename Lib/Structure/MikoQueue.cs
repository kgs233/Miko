namespace Miko.Lib.Structure
{
    public class MikoQueue<T> : Queue<T>
    {
        public MikoQueue() : base()
        { }

        public MikoQueue(int capacity) : base(capacity)
        { }

        public MikoQueue(IEnumerable<T> collection) : base(collection)
        { }

        public new T? Peek()
        {
            if (this.Count == 0)
            {
                return default(T?);
            }
            else
            {
                return base.Peek();
            }
        }
    }
}