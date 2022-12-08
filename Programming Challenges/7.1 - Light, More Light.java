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
    
    public static void main(String[] args)
    {
        Scanner scanf = new Scanner(System.in);
        
        int input = scanf.nextInt();
        
        while (input != 0)
        {
            int prod = 1;
            
            for (int i = 2; i <= input; i += (i == 2 ? 1 : 2))
            {
                if (IsPrime(i))
                {
                    int count = 0;
                    
                    while ((input % i) == 0)
                    {
                        count++;
                        input /= i;
                    }
                    
                    prod *= (++count);
                }
            }
            
            if (prod % 2 == 0)
                System.out.println("no");
            else
                System.out.println("yes");
            
            // ANOTHER SOLUTION
            /*
            
            int[] lights = new int[input];
            
            for (int i = 0; i < input; i++)
            {
                lights[i] = 0;
            }
            
            for (int i = 1; i <= input; i++)
            {
                for (int j = i; j <= input; j += i)
                {
                    lights[j - 1] ^= 1;
                }
            }
            
            if (lights[input - 1] == 1)
                System.out.println("yes");
            else
                System.out.println("no");
            
            */
            
            input = scanf.nextInt();
        }
    }
}
