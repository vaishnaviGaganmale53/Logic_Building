
/* 2n time complecity
input : 4
output:- 4 -3 -2 -1 0 1 2 3 4  two loops 

loop chenge kelyanantar time complecity chenge hot nahi.

*/
#include <stdio.h>
#include <stdlib.h>
//\t --> tab

void Pattern(int iNo)
{

    int iCnt = 0;
    for (iCnt = -iNo; iCnt <= 0; iCnt++)  //sequece of iteration          (O(N))
    {
        printf("%d\t", iCnt);
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++ )  //O(N)
    {
    printf("%d\t",iCnt);  
    }

    printf("\n");
}
// 2n time complexity of function
int main()
{
    int iValue = 0;
    printf("Enter the value : \n");
    scanf("%d", &iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}



// C:\Users\gagan\OneDrive\Desktop\Logic_Building>gcc program190.c -o Myexe

// C:\Users\gagan\OneDrive\Desktop\Logic_Building>Myexe.exe
// Enter the value :
// 4
// -4      -3      -2      -1      0       1       2       3       4

