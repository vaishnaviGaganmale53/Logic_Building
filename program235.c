
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char Arr[100];
    printf("Enter string :\n");

    //scanf("%[^'\n]s",Arr);      two ways in which we accept string
    fgets(Arr, sizeof(Arr),stdin); //kuthe kiti kuthun

    printf("Enterd string is: %s\n",Arr); // %s accept string till first void space
     

    return EXIT_SUCCESS;
}