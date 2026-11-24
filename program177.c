//pallindrom
// 14341

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


bool CheckPallindrome(int iNo )

{
    
    int iDigit = 0, iRev = 0;
    int iTemp = 0;

    iTemp = iNo;

    while (iNo != 0)
    {
        iDigit iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10
    }
    if(iRev == iNo)
    {
       return true;
    }
    else{
      return false
    }
 
}

int main()
{
    int iValue = 0;
     bool bRet = 0;

    

    printf("Enter number:\n");
    scanf("%d", &iValue);
    
    iRev = CheckPallindrome(iValue);
    if()
    {

    }
    else
    {
        
    }
    
    printf("Reverce number is: %d\n", iRev);

    return EXIT_SUCCESS;
}
