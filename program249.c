// accept string from user count number of ovel
// a  e  i  o   u  
#include <stdio.h>
#include <stdlib.h>

int countVowelsX(char *str)
{
    int icount = 0;

    while(*str != '\0')
    {
        if((*str == 'A') || (*str == 'E') ||(*str == 'I') || (*str == 'O')|| (*str == 'U') )
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
    
    iRet = countVowelsX(Arr);

    printf("frequency of Vowels : %d\n",iRet);

    return EXIT_SUCCESS;
}

/*
C:\Users\gagan\OneDrive\Desktop\Logic_Building>gcc program249.c -o Myexe

C:\Users\gagan\OneDrive\Desktop\Logic_Building>Myexe.exe
Enter string :
JAY GANESH
frequency of Vowels : 3

*/