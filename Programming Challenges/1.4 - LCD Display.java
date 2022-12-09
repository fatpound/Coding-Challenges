package pc;

import java.util.*;

public class PC
{
    public static int DigitCount(int n)
    {
        return (n > 0 ? (1 + DigitCount(n / 10)) : 0);
    }
    
    public static void printLCD(int size, int num)
    {
        String[][] str =
        {
            {"-", "|", "|", " ", "|", "|", "-"}, // 0
            {" ", "|", "|", " ", "|", "|", " "}, // 1 unused
            {"-", " ", "|", "-", "|", " ", "-"}, // 2
            {"-", " ", "|", "-", " ", "|", "-"}, // 3
            {" ", "|", "|", "-", " ", "|", " "}, // 4
            {"-", "|", " ", "-", " ", "|", "-"}, // 5
            {"-", "|", " ", "-", "|", "|", "-"}, // 6
            {"-", " ", "|", " ", " ", "|", " "}, // 7
            {"-", "|", "|", "-", "|", "|", "-"}, // 8
            {"-", "|", "|", "-", " ", "|", "-"}  // 9
        };
        
        int digit_count = DigitCount(num);
        int[] digits = new int[digit_count];
        
        int temp = num;
        
        for (int i = digit_count - 1; i >= 0; i--)
        {
            digits[i] = temp % 10;
            temp /= 10;
        }
        
        for (int i = 0; i < size * 2 + 3; i++)
        {
            for (int j = 0; j < digit_count; j++)
            {
                if (digits[j] == 1)
                {
                    System.out.print(" ");
                    
                    if (i % (size + 1) == 0)
                        System.out.print(" ");
                    else
                        System.out.print("|");
                    
                    System.out.print(" ");
                    continue;
                }
                
                if (i % (size + 1) == 0)
                {
                    System.out.print(" ");
                    
                    for (int k = 0; k < size; k++)
                    {
                        System.out.print(str[digits[j]][i == 0 ? 0 : i > (size + 1) ? 6 : 3]);
                    }
                    
                    System.out.print(" ");
                }
                else
                {
                    System.out.print(str[digits[j]][i > size ? 4 : 1]);
                    
                    for (int k = 0; k < size; k++)
                    {
                        System.out.print(" ");
                    }
                    
                    System.out.print(str[digits[j]][i > size ? 5 : 2]);
                }
                
                System.out.print(" ");
            }
            
            System.out.println();
        }
    }
    
    public static void main(String[] args)
    {
        Scanner scanf = new Scanner(System.in);
        
        printLCD(scanf.nextInt(), scanf.nextInt());
    }
}
