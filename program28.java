// input missmatch in between age nad name 


import java.util.Scanner;

class program28
{
    public static void main(String A[])
    {
            Scanner scanner = null;  // scanner obj for input
            String sName = null;

            int iAge = 0;
            float fMarks = 0.0f;    

            scanner = new Scanner(System.in);   //object name policy

            System.out.println("Enter your name:");

        
            sName = scanner.next();    // eexception occured here 

           System.out.println("Enter your age:");
           iAge = scanner.nextInt();

           System.out.println("Enter your Marks::");
           fMarks = scanner.nextFloat();

            System.out.println("Welcome "+sName);
           System.out.println(" your age is:" +iAge);
           System.out.println(" your Marks:"+fMarks);
           

    }
}


// C:\Users\gagan\OneDrive\Desktop\LB>java program28.java
// Enter your name:
// vaishnavi Ashok Gaganmale
// Enter your age:
// Exception in thread "main" java.util.InputMismatchException
//         at java.base/java.util.Scanner.throwFor(Scanner.java:977)
//         at java.base/java.util.Scanner.next(Scanner.java:1632)
//         at java.base/java.util.Scanner.nextInt(Scanner.java:2297)
//         at java.base/java.util.Scanner.nextInt(Scanner.java:2251)
//         at program28.main(program28.java:24)