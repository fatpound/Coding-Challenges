package pc;

import java.util.*;

public class Main
{
    public static int DigitCount(int n)
    {
        return (n > 0 ? (1 + DigitCount(n / 10)) : 0);
    }
    
    public static void main(String[] args)
    {
        Scanner scanf = new Scanner(System.in);
        
        int a  = scanf.nextInt()
        int b  = scanf.nextInt();
        
        int ad = DigitCount(a);
        int bd = DigitCount(b);
        
        int carry = 0;
        int count = 0;
        
        for (int i = 0; i < Math.max(ad, bd); i++)
        {
            int sum = a % 10 + b % 10 + carry;
            
            if (sum > 9)
            {
                count++;
                carry = sum % 10;
            }
            
            a /= 10;
            b /= 10;
        }
        
        if (count == 0)
        {
            System.out.println("No carry operation.");
        }
        else if (count == 1)
        {
            System.out.println("1 carry operation.");
        }
        else
        {
            System.out.println(count + " carry operations.");
        }
    }
}
