
#include <stdio.h>
#include <stdlib.h>

long int Factorial(int iNo)
{
    int icnt = 0;
    long iFact = 0;

    for (icnt = 1, iFact = 1; icnt <= iNo; icnt++)
    {
        iFact = iFact * icnt;
    }
    return iFact;
}
int main()
{
    int ivalue = 0;
    long iRet = 0;

    printf("Enter number : \n");
    scanf("%d", &ivalue);

    iRet = Factorial(ivalue);
    printf("Factorial is : %ld\n", iRet);
    return EXIT_SUCCESS;
}