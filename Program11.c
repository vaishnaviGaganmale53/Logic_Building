#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    int No = 0;

    printf("Enter number:\n");

    if(scanf("%d", &No) != 1)// printf and scanf suddha value return karto....
    {
        printf("Invalid input");
        return EXIT_FAILURE;
    }
        printf("input is valid\n");
    
        // EXIT_SUCCESS lihnyasathi #include<stdlib.h> hi header file use keli jate.

        return EXIT_SUCCESS;
}




// C:\Users\gagan\OneDrive\Desktop\LB>gcc program11.c -o Myexe

// C:\Users\gagan\OneDrive\Desktop\LB>Myexe.exe
// Enter number:
// 10
// input is valid

// C:\Users\gagan\OneDrive\Desktop\LB>Myexe.exe
// Enter number:             EXIT_FAILURE ne baher padli.
// Demo
// Invalid input