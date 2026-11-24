
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
    for(iCnt = 65; iCnt <= 90; iCnt++)
    {
        printf("%d\n",iCnt);  //%d
    }

    return EXIT_SUCCESS;
}