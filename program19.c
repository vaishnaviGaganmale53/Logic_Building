// true faalse value for even and odd.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>  //boolean is not used in c but we can use it by using #include<stdbool.h> header file..


bool CheckEven(int iNo)  //  values in true or false farmat either even or odd...
{
    if((iNo % 2) == 0)
    {
        
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int ivalue =0;

    bool  bret =false ;  ///false means it should be 0 (nutral) 

    printf("Enter number:\n");
    scanf("%d",&ivalue);

    bret = CheckEven(ivalue);
    if(bret == true)
    {
        printf("It is even\n");
    }
    else
    {
       printf("It is odd\n");
    }
    
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