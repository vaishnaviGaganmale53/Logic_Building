/*excepte number from usr and chheck factorial or nor

*/
#include <stdio.h>
#include <stdlib.h>

int Factorial(int iNo)
{
    int icnt = 0, iFact =0;
    iFact = 1;

    for (icnt = 1; icnt <= iNo; icnt++)
    {
        iFact = iFact * icnt;
    }
    return iFact;
}
int main()
{
    int ivalue = 0, iRet = 0;
    
    printf("Enter number : \n");
    scanf("%d", &ivalue);

    iRet = Factorial(ivalue);
    printf("Factorial is : %d\n",iRet);
    return EXIT_SUCCESS;
}


// C:\Users\gagan\OneDrive\Desktop\LB>Myexe.exe
// Enter number :
// 21
// Factorial is : -1195114496

// C:\Users\gagan\OneDrive\Desktop\LB>