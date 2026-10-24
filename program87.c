/*ecepte number from usr which is divisible by 3 nad 5
use nested if else 
*/ 
#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    // Logic
    if(((iNo % 3) == 0))
    {
            if(((iNo % 5) == 0))
            {
                printf("Number is divisible\n");
            }
            else
            {
            printf("Not Divisible \n");
            }
    }

    else
    {
       printf("Not Divisible \n");
    }
}
int main()
{
        int iValue = 0;

        printf("Enter number : \n");

        scanf("%d", &iValue);

        CheckDivisible(iValue);

        return EXIT_SUCCESS;
}




// C:\Users\gagan\OneDrive\Desktop\LB>
// C:\Users\gagan\OneDrive\Desktop\LB>Myexe.exe
// Enter number :
// 9
// Not Divisible

// C:\Users\gagan\OneDrive\Desktop\LB>Myexe.exe
// Enter number :
// 7
// Not Divisible

// C:\Users\gagan\OneDrive\Desktop\LB>