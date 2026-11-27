// accept string from user count of from string 
#include <stdio.h>
#include <stdlib.h>

int countX(char *str)
{
    int icount = 0;

    while(*str != '\0')
    {
        if((*str == 'A') || (*str == 'a'))
        {
            icount++;
        }
        str++;
    }
    return icount;
}

int main()
{
    char Arr[100] = {'\0'};
    int iRet = 0;
    
    printf("Enter string : \n");
    scanf("%[^'\n]s",Arr);
    
    iRet = countX(Arr);

    printf("frequency of a is : %d\n",iRet);

    return EXIT_SUCCESS;
}

/*
C:\Users\gagan\OneDrive\Desktop\Logic_Building>gcc program247.c -o Myexe

C:\Users\gagan\OneDrive\Desktop\Logic_Building>Myexe.exe
Enter string :
jay ganesh
frequency of a is : 2

C:\Users\gagan\OneDrive\Desktop\Logic_Building>Myexe.exe
Enter string :
JAY GANESH
frequency of a is : 2

C:\Users\gagan\OneDrive\Desktop\Logic_Building>Myexe.exe
Enter string :
JAY ganesh
frequency of a is : 2
*/