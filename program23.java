// Addition of two numbers 


import java.util.Scanner;

class program23
{
    public static void main(String A[])
    {
            Scanner scanner = null;  // best way to create onject
            String sName = null;

            scanner = new Scanner(System.in);   //object name policy

            System.out.println("Enter your name");
        
            sName = scanner.nextLine();
        

            System.out.println("Welcome "+sName);
    }
}