package pc;

import java.util.*;

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
    
    public static void main(String[] args)
    {
        Scanner scanf = new Scanner(System.in);
        
        int n = scanf.nextInt(); // 6!
        int m = scanf.nextInt(); // 9
        
        int[] f = new int[n];
        
        for (int i = 0; i < n; i++)
        {
            f[i] = i + 1;
        }
        
        boolean end = true;
        
        int temp = m;
        
        for (int i = 2; i <= temp; i += (i == 2 ? 1 : 2))
        {
            if (IsPrime(i))
            {
                int count = 0;
                
                while ((temp % i) == 0)
                {
                    count++;
                    temp /= i;
                }
                
                if (count > 0)
                {
                    boolean flag = true;
                    
                    for (int j = 0; j < n; j++)
                    {
                        while ((f[j] % i) == 0)
                        {
                            count--;
                            f[j] /= i;
                            
                            if (count == 0)
                            {
                                flag = false;
                                break;
                            }
                        }
                        
                        if (flag == false)
                        {
                            break;
                        }
                    }
                    
                    if (count != 0)
                    {
                        end = false;
                        System.out.println(m + " does not divide " + n + "!"); 
                        break;
                    }
                }
            }
        }
        
        if (end == true)
        {
            System.out.println(m + " divides " + n + "!");
        }
        
        // ANOTHER SOLUTION
        /*
        
        int Max = Math.max(n, m);
        
        int[] d1 = new int[Max - 1];
        int[] d2 = new int[Max - 1];
        
        for (int i = 0; i < n - 1; d1[i++] = 0);
        for (int i = 0; i < m - 1; d2[i++] = 0);
        
        for (int i = n; i > 0; i--)
        {
            int temp = i;
            
            for (int j = 2; j <= temp; j += (j == 2 ? 1 : 2))
            {
                if (IsPrime(j))
                {
                    while ((temp % j) == 0)
                    {
                        d1[j - 2]++;
                        temp /= j;
                    }
                }
            }
        }
        
        int temp = m;
        
        for (int j = 2; j <= temp; j += (j == 2 ? 1 : 2))
        {
            if (IsPrime(j))
            {
                while ((temp % j) == 0)
                {
                    d2[j - 2]++;
                    temp /= j;
                }
            }
        }
        
        boolean flag = true;
        
        for (int i = 0; i < Max - 1; i++)
        {
            if (d2[i] != 0)
            {
                if (d2[i] > d1[i])
                {
                    flag = false;
                    System.out.println(m + " does not divide " + n + "!");
                    break;
                }
            }
        }
        
        if (flag == true)
        {
            System.out.println(m + " divides " + n + "!");
        }
        
        */
    }
}
