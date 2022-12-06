package solution7;

import java.util.*;

public class Main
{
    public static void main(String[] args)
    {
        Scanner scanf = new Scanner(System.in);
        Integer[] dimensions = new Integer[2];
        
        for (int i = 0; i < 2; i++)
        {
            System.out.printf("What is the %s of the room in feet? ", i == 0 ? "length" : "width");
            dimensions[i] = Integer.valueOf(scanf.nextLine());
        }
        
        System.out.printf("You entered dimensions of %d feet by %d feet.\n", dimensions[0], dimensions[1]);
        System.out.println("The area is");
        
        System.out.printf("%d square feet\n", dimensions[0] * dimensions[1]);
        System.out.printf("%.3f square meters\n", (float)dimensions[0] * dimensions[1] * 0.09290304);
    }
}
