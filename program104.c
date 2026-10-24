#include <stdio.h>
#include <stdlib.h>

void CheckPerfect(int iNo)
{
    int iCnt = 0, iSum = 0;

    for (iCnt = 1; iCnt <= iNo / 2; iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }

        if (iSum == iNo)
        {
            printf("it is a perfect number");
        }
        else
        {
            printf("it is not a perfect number");
        }
    }
}
int main()
{
    int ivalue = 0;

    printf("Enter number : \n");
    scanf("%d", &ivalue);

    CheckPerfect(ivalue);

    printf("Summation of Factors : %d\n");

    return EXIT_SUCCESS;
}

/
