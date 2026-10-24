// Addition of two number
//Approach 3  Addition separate function 


import java.util.Scanner;
/**
 * Innerprogram36
 */
 class Arithmatic 
{
    public static int Addition(int iNo1, int iNo2)
    {
        int iAns = 0;
        iAns = iNo1 + iNo2; 
        return iAns;
    }

    
}

class program36
{
    
    public static void main(String A[])
    {
            Scanner scanner = null;  // scanner obj for input
            int ivalue1 = 0, ivalue2 = 0, iResult = 0;
            

            scanner = new Scanner(System.in);   //object name policy

            System.out.println("Enter first number:");
            ivalue1 = scanner.nextInt();

            System.out.println("Enter secand number:");
            ivalue2 = scanner.nextInt();
            iResult = Addition(ivalue1, ivalue2);      

            iResult = ivalue1 + ivalue2;  //business logic
        
            
           System.out.println("Addition is : "+iResult);

    }
}

// C:\Users\gagan\OneDrive\Desktop\LB>java program36.java
// Error: Could not find or load main class program36.java
// Caused by: java.lang.ClassNotFoundException: program36.java


