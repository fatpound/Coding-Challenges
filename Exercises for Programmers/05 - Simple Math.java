package solution5;

import java.util.*;

public class Main
{
    public static void main(String[] args)
    {
        Scanner   scanf = new Scanner(System.in);
        Integer[] num = new Integer[2];
        
        for (int i = 0; i < 2; i++)
        {
            System.out.printf("What is the %s number? ", i == 0 ? "first" : "second");
            num[i] = Integer.valueOf(scanf.nextLine());
        }
        
        System.out.println("");
        String operation = "+-*/";
        
        for (int i = 0; i < 4; i++)
        {
            System.out.print(num[0] + " " + operation.charAt(i) + " " + num[1] + " = ");
            
            switch (i)
            {
                case 0:
                {
                    System.out.println(num[0] + num[1]);
                    break;
                }
                
                case 1:
                {
                    System.out.println(num[0] - num[1]);
                    break;
                }
                
                case 2:
                {
                    System.out.println(num[0] * num[1]);
                    break;
                }
                
                case 3:
                {
                    System.out.printf("%.0f\n", (float)num[0] / num[1]);
                    break;
                }
                
                default:
                    break;
            }
        }
    }
}
