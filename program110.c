#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool CheckPrime(int iNo)   //3 5 7
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 2; iCnt <= iNo/2; iCnt++)  //iCnt = 2; start from 2 
    {
       if ((iNo % iCnt) == 0)
       {
         iSum = iSum + iCnt;     // summmation of iSum

       }
    }
    if(iSum == 0)
    {
        return true;

    }
    else
    {
        return false;
    }
}
int main()  
{
    int iValue = 0;
    bool bRet = false;
    printf("Enter number: \n");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);

    if(bRet)  
    {
        printf("it is prime number \n");
    
    }
    else
    {
        printf(" it is not prime number \n");
    }
    
    return EXIT_SUCCESS;
}
