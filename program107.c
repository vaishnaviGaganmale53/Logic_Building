#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void CheckPrime(int iNo)   //3 5 7
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
        printf("It is prime number \n");

    }
    else
    {
        printf("It is not prime number \n");
    }
}
int main()  //(void) fuction is not going to accept anything but return value is interger
{
    int iValue = 0;
    printf("Enter number: \n");
    scanf("%d",&iValue);

    CheckPrime(iValue);
    
    return EXIT_SUCCESS;
}
