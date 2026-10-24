/*ecepte number from usr which is divisible by 3 or 5
------------------------------------------------------
               operation &&
------------------------------------------------------
result 1         result2           result 3
------------------------------------------------------
True              True              True
True              False             True            
false             True              True                   short circuit
false             false             False              short circuit
------------------------------------------------


*/ 

#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    // Logic  OR operator

    if(((iNo % 3) == 0) || ((iNo % 5) == 0))    
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