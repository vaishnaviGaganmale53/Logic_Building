
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
    scanf("%d", &ivalue1); //

    printf("Enter secand nuber:\n");
    scanf("%d", &ivalue2);

    iresult = addition(ivalue1, ivalue2); // Business logic

    printf("Addition is : %d\n", iresult);

    return EXIT_SUCCESS;                         //EXIT_SUCCESS lihnyasathi #include<stdlib.h> hi header file use keli jate
}






//search on internet
//DDL
//Dll
//fuction - method - API
//


// Microsoft Windows [Version 10.0.26200.9457]
// (c) Microsoft Corporation. All rights reserved.

// C:\Users\gagan\OneDrive\Desktop\LB>gcc program9.c -o Myexe

// C:\Users\gagan\OneDrive\Desktop\LB>Myexe.exe
// Enter first nuber:
// 11
// Enter secand nuber:
// 10
// Addition is : 21

// C:\Users\gagan\OneDrive\Desktop\LB>gcc program9.c -o Myexe

// C:\Users\gagan\OneDrive\Desktop\LB>gcc program9.c -o Myexe

// C:\Users\gagan\OneDrive\Desktop\LB>gcc program9.c -o Myexe

// C:\Users\gagan\OneDrive\Desktop\LB>gcc program9.c -o Myexe

// C:\Users\gagan\OneDrive\Desktop\LB>
// C:\Users\gagan\OneDrive\Desktop\LB>Myexe.exe
// Enter first nuber:
// 12.5
// Enter secand nuber:
// Addition is : 12

// C:\Users\gagan\OneDrive\Desktop\LB>gcc program9.c -o Myexe

// C:\Users\gagan\OneDrive\Desktop\LB>gcc program9.c -o Myexe

// C:\Users\gagan\OneDrive\Desktop\LB>Myexe.exe
// Enter first nuber:
// A
// Enter secand nuber:
// Addition is : 0
