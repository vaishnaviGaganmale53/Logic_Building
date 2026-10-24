// input missmatch in between age nad name 


import java.util.Scanner;

class program29
{
    public static void main(String A[])
    {
            Scanner scanner = null;  // scanner obj for input
            String sName = null;

            int iAge = 0;
            float fMarks = 0.0f;    

            scanner = new Scanner(System.in);   //object name policy

            System.out.println("Enter your name:");

        
            sName = scanner.nextLine();    

           System.out.println("Enter your age:");
           iAge = scanner.nextInt();

           System.out.println("Enter your Marks::");
           fMarks = scanner.nextFloat();

            System.out.println("Welcome "+sName);
           System.out.println("your age is:" +iAge);
           System.out.println("your Marks:"+fMarks);
           

    }
}

// C:\Users\gagan\OneDrive\Desktop\LB>java program29.java
// Enter your name:
// vaishnavi Gaganmale
// Enter your age:
// 22
// Enter your Marks::
// 23.99
// Welcome vaishnavi Gaganmale
// your age is:22
// your Marks:23.99

