#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool CheckPrime(int iNo)   
{
    int iCnt = 0;


    for(iCnt = 2; iCnt <= iNo/2; iCnt++)   //iCnt start from 2 
    {
       if ((iNo % iCnt) == 0) // if iNo is divisible by iCnt
       {
         break;     //if number is not prime then break the loop // we use break or continue... break is used to exit the loop and continue is used to skip the current iteration and move to the next iteration
       }
    }

    if (iCnt == (iNo / 2)+ 1)  // if loop completed without finding a divisor 
    {
        return true; // number is prime
    }
    else
    {
        return false; // number is not prime
    }
    
}
int main(void)   
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
