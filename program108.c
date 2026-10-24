#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool CheckPrime(int iNo)   //3 5 7
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= iNo/2;iCnt++)
    {
       if ((iNo % iCnt) == 0)
       {
         iSum = iSum + iCnt;     // summmation of iSum

       }
    }
    if(iSum == 1)
    {
        return true;

    }
    else
    {
        return false;
    }
}
int main()  //(void) fuction is not going to accept anything but return value is interger
{
    int iValue = 0;
    bool bRet = false;
    printf("Enter number: \n");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);
    if(bRet == true)
    {
        printf("it is prime number \n");
    
    }
    else
    {
        printf(" it is not prime number \n");
    }
    
    return EXIT_SUCCESS;
}
