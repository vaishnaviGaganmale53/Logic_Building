// forward and backword 
import java.util.Scanner;

class program67

{
    public static void main(String A[]) 
    {
        Scanner scanner = new Scanner(System.in);
        int ivalue = 0;

        IterationXProgram67 iteration = new IterationXProgram67();

        System.out.println("enter the frequency:");
        ivalue = scanner.nextInt();

        iteration.Display(ivalue);
    }

}

class IterationXProgram67 
{
    public void Display(int iNo)
     {
        int icnt = 1;

       do 
        {
            System.out.println("-----------");         //static
            System.out.println(icnt + " Jay Ganesh....");      //dynaminc
            System.out.println("-----------");
            icnt ++;
        }
        while(icnt <= 4);

    }
}