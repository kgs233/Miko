namespace Miko.Lib.Structure
{
    class Source : IDisposable
    {
        private byte[] Buffer;
        readonly private FileStream File;
        private int Position = 0;


        public void Dispose() { }
    }
}