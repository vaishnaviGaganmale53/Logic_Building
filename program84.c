// ecepte number from usr which is divisible by 5

#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    // Logic
    if(iNo % 5 == 0)
    {
        printf("Number is divisible:");
    }
    else
    {
       printf("Not Divisible ");
    }

}
int main()
{
        int ivalue = 0;
        printf("Enter number : \n");
        scanf("%d",&ivalue);
        CheckDivisible(ivalue);

        return EXIT_SUCCESS;
}