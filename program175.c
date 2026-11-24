
#include<stdio.h>
#include<stdlib.h>

int Reverce(int iNo )
{
 int iDigit = 0, iRev = 0;
 while (iNo != 0)
 {
    iDigit iNo % 10;
    iRev = (iRev * 10) + iDigit;
    iNo = iNo / 10
 }
 
}

int main()
{
    int iValue = 0, iRet = 0;
    

    printf("Enter number:\n");
    scanf("%d", &iValue);
    
    iRet = Reverce(iValue);
    
    printf("Reverce number is: %d\n", fRet);

    return EXIT_SUCCESS;
}
