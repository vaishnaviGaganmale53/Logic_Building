/*excepte number from usr and chheck factorial or nor

*/
#include <stdio.h>
#include <stdlib.h>

int Summation(int iNo)
{
    int icnt = 0, iSum =0;

    for (icnt = 1; icnt <= iNo; icnt++)
    {
        iSum = iSum +icnt;
    }
    return iSum;
}
int main()
{
    int ivalue = 0, iRet = 0;
        

    printf("Enter number : \n");

    scanf("%d", &ivalue);

    iRet = Summation(ivalue);
    printf("Summation is : %d\n",iRet);
    return EXIT_SUCCESS;
}
