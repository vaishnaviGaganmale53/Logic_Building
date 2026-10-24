import java.util.Scanner;

class program61

{
    public static void main(String A[]) {
        Scanner scanner = new Scanner(System.in);
        int ivalue = 0;

        IterationXProgram60 iteration = new IterationXProgram60();

        System.out.println("enter the frequency:");
        ivalue = scanner.nextInt();

        iteration.Display(ivalue);
    }

}

class IterationXProgram60 {
    public void Display(int iNo) {
        int icnt = 0;

        // input updater
        if (iNo < 0) {
            iNo = -iNo;
            System.out.println("Invalid Input");
            return;
        }

        for (icnt = 1; icnt <= iNo; icnt++) 
        {
            System.out.println("-------------");//static
            System.out.println(icnt);      //dynaminc
            System.out.println("-----------");
        }

    }
}