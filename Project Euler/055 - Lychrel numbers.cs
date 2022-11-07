using System.Numerics;

namespace ProjectEuler
{
    internal class Solution55
    {
        static int DigitCount(BigInteger n)
        {
            return (n > 0 ? (1 + DigitCount(n / 10)) : 0);
        }

        static BigInteger RevNum(BigInteger n)
        {
            return (n != 0 ? (n % 10) * (BigInteger.Pow(10, DigitCount(n) - 1)) + RevNum(n / 10) : 0);
        }

        static int IsPalindrome(BigInteger n)
        {
            BigInteger x = n;
            int i, count = DigitCount(n);

            BigInteger[] str = new BigInteger[count + 1];

            for (i = 0; i < count; str[i++] = x % 10, x /= 10);
            for (i = 0; i < count; i++)
            {
                if (str[i] != str[count - i - 1])
                {
                    return 0;
                }
            }

            return 1;
        }
        static int IsLychrel(BigInteger n)
        {
            for (int i = 0; i < 50; i++)
            {
                if (IsPalindrome(n += RevNum(n)) == 1)
                {
                    return 0;
                }
            }

            return 1;
        }

        public static int Main(string[] args)
        {
            int count = 0;

            for (BigInteger n = BigInteger.One; n < 10000; n++)
            {
                if (IsLychrel(n) == 1)
                {
                    count++;
                }
            }
            
            Console.WriteLine(count);
            return 0;
        }
    }
}