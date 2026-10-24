//question : accept number from user count number of digits in that number
import java.util.Scanner;

class Digit
{
    public void CountDigits(int iNo) 
    {
        //int iDigit = 0;   remove which is unnecessary
        int iCount = 0;
        
        if(iNo < 0)
            {
                iNo = -iNo;
            }
        
        while(iNo != 0)
            {
            //iDigit = iNo % 10;     dry run  751 -->75  -->7 --> 0
            iNo = iNo / 10;
            iCount++;

            }
        System.out.println("Number of digits: " + iCount);
    }
}

class program127
{
    public static void main(String A[] )
    {
        
         Digit digit = new Digit();  
         Scanner sc = new Scanner(System.in);
         int iRet = 0;
         System.out.print("Enter a number: ");
         int iValue = sc.nextInt();
         
        digit.CountDigits(iValue);
         //iRet = digit.CountDigits(iValue);
         //System.out.println("Number of digits: " + iRet);

    }
}
