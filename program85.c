/*ecepte number from usr which is divisible by 3 nad 5
------------------------------------------------------
               operation &&
------------------------------------------------------
result 1         result2           result 3
------------------------------------------------------
True              True              True
True              False             False            not shortsecuite
false             True              False                   yes
false             false             False               yes
------------------------------------------------------


*/ 
#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    // Logic
    if(((iNo % 3) == 0) && ((iNo % 5) == 0))
    {
        printf("Number is divisible\n");
    }
    else
    {
       printf("Not Divisible \n");
    }
}
int main()
{
        int iValue = 0;

        printf("Enter number : \n");

        scanf("%d",&iValue);

        CheckDivisible(iValue);

        return EXIT_SUCCESS;
}