// forward and backword 
import java.util.Scanner;

class program66

{
    public static void main(String A[]) 
    {
        Scanner scanner = new Scanner(System.in);
        int ivalue = 0;

        IterationXProgram66 iteration = new IterationXProgram66();

        System.out.println("enter the frequency:");
        ivalue = scanner.nextInt();

        iteration.Display(ivalue);
    }

}

class IterationXProgram66 
{
    public void Display(int iNo)
     {
        int icnt = 0;
        icnt = 1;

        while( icnt <= 4) 
        {
            System.out.println("-----------");         //static
            System.out.println(icnt + " Jay Ganesh....");      //dynaminc
            System.out.println("-----------");
            icnt ++;
        }

    }
}