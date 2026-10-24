// Addition of two numbers 


import java.util.Scanner;

class program27
{
    public static void main(String A[])
    {
            Scanner scanner = null;  // scanner obj for input
            String sName = null;

            int iAge = 0;
            float fMarks = 0.0;    //error

            scanner = new Scanner(System.in);   //object name policy

            System.out.println("Enter your name:");

        
            sName = scanner.next();    // only use next either nextLine next method is use to 

           System.out.println("Enter your age:");
           iAge = scanner.nextInt();

           System.out.println("Enter your Marks::");
           fMarks = scanner.nextFloat();

            System.out.println("Welcome "+sName);
           System.out.println(" your age is:" +iAge);
           System.out.println(" your Marks:"+fMarks);
           


           
    }
}

// C:\Users\gagan\OneDrive\Desktop\LB>java program27.java
// program27.java:14: error: incompatible types: possible lossy conversion from double to float
//             float fMarks = 0.0;
//                            ^
// 1 error
// error: compilation failed
