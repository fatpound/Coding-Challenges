package pc;

import java.util.*;

public class Main
{
    public static void main(String[] args)
    {
        Scanner scanf = new Scanner(System.in);
        
        int input = scanf.nextInt();
        
        while (input != 0)
        {
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
            
            input = scanf.nextInt();
        }
    }
}
