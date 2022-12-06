package solution3;

import java.util.*;

public class Main
{
    public static void main(String[] args)
    {
        Scanner scanf = new Scanner(System.in);
        
        String input1, input2;
        
        System.out.print("What is the quote? ");
        input1 = scanf.nextLine();
        
        System.out.print("Who said it? ");
        input2 = scanf.nextLine();
        
        String output = input2.concat(" says, \"" + input1 + "\"");
        
        System.out.println(output);
    }
}
