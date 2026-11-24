
/*
input : 4
output:- A B C D

each char has its own ascii value
*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int iCnt = 0;
    for(iCnt = 'A'; iCnt <= 'Z'; iCnt++) // 65 is ascii value of A (A - Z -- 65 - 90)
    {
        printf("%d\t%o\t%x\t%c\n",iCnt,iCnt,iCnt,iCnt);     //display ascii table
    }

    return EXIT_SUCCESS;
}
