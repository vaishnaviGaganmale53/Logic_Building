// Addition of two number
//Approach 2  separate function 


import java.util.Scanner;

class program34
{
    public int Addition(int iNo1, int iNo2)
    {
        int iAns = 0;
        iAns = iNo1 + iNo2; 
        return iAns;
    }
    public static void main(String A[])
    {
            Scanner scanner = null;  // scanner obj for input
            int ivalue1 = 0, ivalue2 = 0, iResult = 0;
            

            scanner = new Scanner(System.in);   //object name policy

            System.out.println("Enter first number:");
            ivalue1 = scanner.nextInt();

            System.out.println("Enter secand number:");
            ivalue2 = scanner.nextInt();
            iResult = Addition(ivalue1, value2);      error in call

            iResult = ivalue1 + ivalue2;  //business logic
        
            
           System.out.println("Addition is : "+iResult);

    }
}



