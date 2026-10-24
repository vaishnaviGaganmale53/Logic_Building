// Addition of two numbers 


import java.util.Scanner;

class program24
{
    public static void main(String A[])
    {
            Scanner scanner = null;  // scanner obj for input
            String sName = null;

            scanner = new Scanner(System.in);   //object name policy

            System.out.println("Enter your name");
        
            sName = scanner.next();    // only use next either nextLine next method is use to 
        

            System.out.println("Welcome "+sName);
    }
}
//output by using only next.();
// C:\Users\gagan\OneDrive\Desktop\LB>java program24.java
// Enter your name
// vaishnavi_ashok_gaganmale  
// Welcome vaishnavi_ashok_gaganmale