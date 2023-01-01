using System.Diagnostics;
using System.Numerics;

namespace ProjectEuler
{
    internal class Solution48
    {
        static void Main(string[] args)
        {
            Stopwatch clock = Stopwatch.StartNew();
            BigInteger sum = 0;

            for (int n = 1; n <= 1000; n++)
            {
                sum = (sum + BigInteger.ModPow(n, n, 10000000000)) % 10000000000;
            }

            clock.Stop();
            Console.WriteLine(sum + "\n{0} ms", clock.ElapsedMilliseconds);
        }
    }
}
