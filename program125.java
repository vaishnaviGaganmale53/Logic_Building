import java.util.Scanner;

class Digit
{
    public void DisplayDigits(int iNo) 
    {
        int iDigit = 0;
        if(iNo < 0)
        {
            iNo = -iNo;
        }
        
        while(iNo != 0)
            {
            iDigit = iNo % 10;
            iNo = iNo / 10;
            System.out.println(iDigit);
            }

    }
}

class program125
{
    public static void main(String A[] )
    {
        
         Digit digit = new Digit();  
         Scanner sc = new Scanner(System.in);
         System.out.print("Enter a number: ");
         int iValue = sc.nextInt();
         
         digit.DisplayDigits(iValue);

    }
}
