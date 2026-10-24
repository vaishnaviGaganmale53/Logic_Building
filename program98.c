
#include <stdio.h>
#include <stdlib.h>

typedef unsigned long long ULONG;

ULONG Factorial(int iNo)
{
    int icnt = 0;
    ULONG iFact = 0;

    for (icnt = 1, iFact = 1; icnt <= iNo; icnt++)
    {
        iFact = iFact * icnt;
    }
    return iFact;
}
int main()
{
    int ivalue = 0;
    ULONG iRet = 0;

    printf("Enter number : \n");
    scanf("%d", &ivalue);

    iRet = Factorial(ivalue);
    printf("Factorial is : %lld\n", iRet);
    return EXIT_SUCCESS;
}