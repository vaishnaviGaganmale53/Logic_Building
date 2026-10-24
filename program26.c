#include<stdio.h>
#include<stdlib.h>

int main()
{
    char sName[30];

    printf("Enter your name: \n");

    scanf("%[^'\n']s",sName);               // %[^'\n']s  accept string until joparyat user enter press karat nahi ... (special scanf)use for string ,no need to write & beacause of we use array.

    printf("Welcome %s\n",sName);

    return EXIT_SUCCESS;
}


//%[^'\n']s by using thie we solve our problem which is createed  in previous code

// C:\Users\gagan\OneDrive\Desktop\LB>Myexe.exe
// Enter your name:
// vaishnavi Ashok Gaganmale
// Welcome vaishnavi Ashok Gaganmale