package pc;

import java.util.*;
import java.math.*;

public class Main
{
    public static boolean IsPrime(int n)
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
    
    public static boolean IsCarmichael(int n)
    {
        if (IsPrime(n))
            return false;
        
        BigInteger num  = BigInteger.valueOf(n);
        BigInteger temp = BigInteger.TWO;
        
        if (num.isProbablePrime(10)) return false;
        if (num.compareTo(BigInteger.ZERO) == 0 || num.compareTo(BigInteger.ONE) == 0) return false;
        
        while (temp.compareTo(num) == -1)
        {
            if (temp.gcd(num).compareTo(BigInteger.ONE) == 0) // aralarında asallarsa
            {
                if ((temp.modPow(num.subtract(BigInteger.ONE), num)).compareTo(BigInteger.ONE) != 0)
                {
                    return false;
                }
            }
            
            temp = temp.add(BigInteger.ONE);
        }
        
        return true;
    }
    
    public static void main(String[] args)
    {
        Scanner scanf  = new Scanner(System.in);
        
        for (int input = scanf.nextInt(); input != 0; input = scanf.nextInt())
        {
            if (IsCarmichael(input))
                System.out.println("The number " + input + " is a Carmichael number.");
            else
                System.out.println(input + " is normal.");
        }
    }
}
