
#include <stdio.h>
#include <stdlib.h>


    int addition
    (
        int iNo1, // first input
        int iNo2  // secand input
    )
{
    int iAns = 0;

    iAns = iNo1 + iNo2; //// Business logic

    return iAns;
}

int main()
{
    int ret = 0;
    int No = 0;

    printf("Enter number:\n");

        ret = scanf("%d", &No); // printf and scanf suddha value return karto....

    printf("Return valur is:%d\n,ret");

        // EXIT_SUCCESS lihnyasathi #include<stdlib.h> hi header file use keli jate.

        return EXIT_SUCCESS;
}