#include <stdio.h>
#include <stdlib.h>

void DisplayDigits(int iNo)
{
    int iDigit = 0;
     if(iNo < 0)
     {
        iNo = -iNo;
     }
}
int main()
{
    int iValue = 0;
    printf("Enter number : \n");
    scanf("%d", &iValue);

    DisplayDigits(iValue);

    return EXIT_SUCCESS;
}
 