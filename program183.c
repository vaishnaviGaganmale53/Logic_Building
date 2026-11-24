// 5 
//1 2 3 4 5

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void Pattern(int iNo)
{
     int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        printf("$\t", iCnt);
    }
    printf("\n");
}


int main()
{
    int iValue = 0;
    printf("Enter the Frequency: \n");
    scanf("%d",iValue);
    Pattern(7);
    
    return EXIT_SUCCESS;
}
