import java.util.Scanner;
class program57

{
    public static void main(String A[])
    {
        Scanner scanner = new Scanner(System.in);
        int ivalue = 0;
        IterationX iteration = new IterationX();

        System.out.println("enter the frequency:");
        ivalue = scanner.nextInt();
           
        iteration.Display(ivalue);
    }

}

class IterationX
{
    public void Display(int iNo)
    {
            int icnt = 0;

            for(icnt = 1; icnt <= iNo; icnt++)
            {
                System.out.println("Jay Ganesh");
            }

    }
}   