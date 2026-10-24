#include<stdio.h>
#include<stdlib.h>


void CheckEven(int iNo)  // 
{
    if((iNo % 2) == 0)
    {
        printf("it is even Number\n");
    }
    else
    {
        printf("it is odd Number\n");
    }
}

int main()
{
    int ivalue =0;

    printf("Enter number:\n");
    scanf("%d",&ivalue);

    CheckEven(ivalue);

    
    return EXIT_SUCCESS;
}




// C:\Users\gagan\OneDrive\Desktop\LB>Myexe.exe
// Enter number:
// 12
// it is even Number

// C:\Users\gagan\OneDrive\Desktop\LB>Myexe.exe
// Enter number:
// 13
// it is odd Number