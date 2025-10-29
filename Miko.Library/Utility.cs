using System;

namespace Miko.Library;

public static class Utility
{
    public static byte[] HashString(string s)
    {
        byte[] typeStringBytes = System.Text.Encoding.UTF8.GetBytes(s);
        return System.Security.Cryptography.SHA256.HashData(typeStringBytes);
    }
}
