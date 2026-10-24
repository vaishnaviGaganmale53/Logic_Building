
// #define  EXIT_SUCCESS
#include <stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////
//
// functionName   :  Addition
// Input          :  Interger,Interger
// Output         :  Interger
// Description    :  Perform addition
// Date           :  09/10/2026 --> updated on(if code updated)
// Author         :  Vaishnavi Ashok Gaganmale.

///////////////////////////////////////////////////////////////////////////////////////////////////

int addition(
              int iNo1,       //first input
              int iNo2        //secand input
            )
{
    int iAns = 0;

    iAns = iNo1 + iNo2;         //// Business logic

    return iAns;
}

///////////////////////////////////////////////////////////////////////////////////////////////////

// Entry point of the application

///////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int ivalue1 = 0, ivalue2 = 0, iresult = 0;

    printf("Enter first nuber:\n");
    if(scanf("%d", &ivalue1) != 1)
        {
        fprintf(stderr,"Unable to proceed as input is invali\n");
        
        return EXIT_FAILURE;
        }

    printf("Enter secand nuber:\n");
    if(scanf("%d", &ivalue2) != 1)
        {
        fprintf(stderr,"Unable to proceed as input is invalid\n");
        
        return EXIT_FAILURE;
        }

    iresult = addition(ivalue1, ivalue2); // Business logic

    printf("Addition is : %d\n", iresult);

    return EXIT_SUCCESS;                         //EXIT_SUCCESS lihnyasathi #include<stdlib.h> hi header file use keli jate
}


//project

// C:\Users\gagan\OneDrive\Desktop\LB>gcc program13.c -o Myexe

// C:\Users\gagan\OneDrive\Desktop\LB>Myexe.exe
// Enter first nuber:
// 10
// Enter secand nuber:
// D
// Unable to proceed as input is invalid