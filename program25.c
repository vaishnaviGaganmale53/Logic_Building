#include<stdio.h>
#include<stdlib.h>

int main()
{
    char sName[30];

    printf("Enter your name: \n");

    scanf("%s",sName);               // %s use for string ,no need to write & beacause of we use array.
    printf("Welcome %s\n",sName);
    return EXIT_SUCCESS;
}



// C:\Users\gagan\OneDrive\Desktop\LB>Myexe.exe
// Enter your name:
// vaishnavi Ashok Gaganmale
// Welcome vaishnavi