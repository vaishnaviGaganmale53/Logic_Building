// Addition of two number
// approch 3
//non static method


import java.util.Scanner;

class program39
{
    
    public void main(String A[])
    {
            Scanner scanner = null;  // scanner obj for input

            Arithematic arithematic = null;
            int ivalue1 = 0, ivalue2 = 0, iResult = 0;
            

            scanner = new Scanner(System.in);   //object name policy

            System.out.println("Enter first number:");
            ivalue1 = scanner.nextInt();

            System.out.println("Enter secand number:");
            ivalue2 = scanner.nextInt();
            arithematic = new Arithematic();

            iResult = arithematic.Addition(ivalue1, ivalue2);      // call by name of Arithmatic.Addition()...

            iResult = ivalue1 + ivalue2;  //business logic
        
            
           System.out.println("Addition is : "+iResult);

    }
}
class Arithematic 
{
    public static int Addition(int iNo1, int iNo2)  //
    {
        int iAns = 0;
        iAns = iNo1 + iNo2; 
        return iAns;
    }

    
}


