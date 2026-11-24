/* 48967
odd : 7
even:  6 
odd: 9
even: 8
Even: 4
*/

#include <stdio.h>
#include <stdlib.h>

int CountDigits(int iNo)
{
    
    int iDigit = 0;
    int iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

     while(iNo != 0)
     {
        iDigit = iNo % 10;
        //-------------logic----------------
        if((iDigit % 2) == 0)
        {
            iSum = iSum + iDigit;
        }
        
        iNo = iNo / 10;
     }

    return iSum;
}
int main()
{
    int iValue = 0;
    

    printf("Enter number : \n");
    scanf("%d", &iValue);

    iSum = CountDigits(iValue);

    return EXIT_SUCCESS;
}
 