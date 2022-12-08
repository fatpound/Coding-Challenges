using System.Numerics;

namespace PC;

internal class PC
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
    
    public static int input;
    public static int index = 0;

    public static BigInteger[] results;
    public static int[] steps;

    static void Try(BigInteger n)
    {
        for (int i = 0; i < 1000; i++)
        {
            if (IsPalindrome(n += RevNum(n)) == 1)
            {
                results[index] = n;
                steps[index++] = i + 1;

                return;
            }
        }

        return;
    }

    public static int Main(string[] args)
    {
        input   = Convert.ToInt32(Console.ReadLine());

        results = new BigInteger[input];
        steps   = new int[input];

        for (int i = 0; i < input; i++)
        {
            Try(Convert.ToInt32(Console.ReadLine()));
        }

        Console.WriteLine();

        for (int i = 0; i < index; i++)
        {
            Console.WriteLine(steps[i] + " " + results[i]);
        }
        
        return 0;
    }
}
