package solution6;

import java.util.*;
import java.time.*;

public class Main
{
    public static void main(String[] args)
    {
        Scanner scanf = new Scanner(System.in);
        
        System.out.print("What is your current age? ");
        int a = Integer.parseInt(scanf.nextLine());
        
        System.out.print("At what age would you like to retire? ");
        int b = Integer.parseInt(scanf.nextLine());
        
        int year   = Year.now().getValue();
        int diff   = b - a;
        int retire = year + diff;
        
        System.out.println("You have " + diff + " years left until you can retire.");
        System.out.println("It's " + year + ", so you can retire in " + retire + ".");
    }
}
