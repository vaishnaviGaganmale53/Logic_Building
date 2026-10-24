
//question : accept number from user and prform addition of digits in that number.
// 
import java.util.Scanner;

class Digit {
    public void SumDigits(int iNo) {
        int iDigit = 0;
        int iSum = 0;

        if (iNo < 0) {
            iNo = -iNo;
        }

        while (iNo != 0) {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;

        }
        System.out.println("Summation of digit : " + iSum);
    }
}

class program128 {
    public static void main(String A[]) {

        Digit digit = new Digit();
        Scanner sc = new Scanner(System.in);
        int iRet = 0;
        System.out.print("Enter a number: ");
        int iValue = sc.nextInt();

        digit.SumDigits(iValue);
        // iRet = digit.CountDigits(iValue);
        // System.out.println("Number of digits: " + iRet);

    }
}
