// Addition of two number
//Approach 3  Addition  function write in another class  


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

class program37
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
            iResult = Arithmatic.Addition(ivalue1, ivalue2);      // call by name of Arithmatic.Addition()...

            iResult = ivalue1 + ivalue2;  //business logic
        
            
           System.out.println("Addition is : "+iResult);

    }
}


// C:\Users\gagan\OneDrive\Desktop\LB>java program37.java
// Enter first number:
// 11
// Enter secand number:
// 10
// Addition is : 21

