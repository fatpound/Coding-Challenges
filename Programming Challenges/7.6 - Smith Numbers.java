package pc;

import java.util.*;

public class Main
{
    public static boolean IsPrime(Integer n)
    {
        if (n < 4)
            return (n > 1);
        
        if (n % 2 == 0 || n % 3 == 0)
            return false;
        
        for (int i = 5; i * i <= n; i += 6)
        {
            if (n % i == 0 || n % (i + 2) == 0)
            {
                return false;
            }
        }
        
        return true;
    }
    
    public static int DigitSum(int n)
    {
        return (n > 0 ? (n % 10 + DigitSum(n / 10)) : 0);
    }
    
    public static int SumOfPrimeDivsDigits(int n)
    {
        int sopd = 0;
        
        for (int i = 2; i <= n; i += (i == 2 ? 1 : 2))
        {
            if (IsPrime(i))
            {
                while ((n % i) == 0)
                {
                    sopd += DigitSum(i);
                    n    /= i;
                }
            }
        }
        
        return (sopd);
    }

    public static boolean IsSmith(int n)
    {
        return (IsPrime(n) ? false : (DigitSum(n) == SumOfPrimeDivsDigits(n)));
    }
    
    public static void main(String[] args)
    {
        Scanner scanf  = new Scanner(System.in);
        
        int test_cases = scanf.nextInt();
        int[] inputs   = new int[test_cases];
        
        for (int i = 0; i < test_cases; i++)
        {
            inputs[i] = scanf.nextInt();
        }
        
        for (int i = 0; i < test_cases; i++)
        {
            while (IsSmith(++inputs[i]) == false);
            
            System.out.println(inputs[i]);
        }
    }
}
