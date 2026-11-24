
/*
input : 4
output:- A B C D

each char has its own ascii value
*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    char ch = '\0'; 

    for(ch = 'A'; ch <= 'Z'; ch++) 
    {
        printf("%c\n",ch);     //display A-- Z
    }

    return EXIT_SUCCESS;
}
