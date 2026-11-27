// accept string from user count of from string 
#include <stdio.h>
#include <stdlib.h>

int countX(char *str)
{
    int icount = 0;

    while(*str != '\0')
    {
        if(*str == 'a')
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