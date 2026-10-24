import java.util.Scanner;

class Digit
{
    public void DisplayDigits(int iNo) 
    {
        int iDigit = 0;

        
        while(iNo != 0)
            {
            iDigit = iNo % 10;
            iNo = iNo / 10;
            System.out.println(iDigit);
            }

    }
}

class program123
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
