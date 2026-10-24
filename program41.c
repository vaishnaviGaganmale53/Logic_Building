#include <stdio.h>
#include <stdlib.h>

void Maximum(int iNo1, int iNo2)
{
    if (iNo1 > iNo2)
    {
        printf("Maximum is : %d\n", iNo1);
    }
    else
    {
        printf("Maximum is : %d\n", iNo2);
    }
}

int main()
{
    int ivalue1 = 0, ivalue2 = 0, iResult = 0;
    printf("Enter first number : \n");
    scanf("%d", &ivalue1);

    printf("Enter secand number : \n");
    scanf("%d", &ivalue2);

    if (ivalue1 > ivalue2)
    {
        printf("Maximum is : %d\n", ivalue1);
    }
    else
    {
        printf("Maximum is : %d\n", ivalue2);
    }

    return EXIT_SUCCESS;
}
