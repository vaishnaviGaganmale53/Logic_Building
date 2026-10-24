//buffer flashing problem

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char sName[30];
    int iAge = 0;
    float fMarks = 0.0f;

    printf("Enter your name: \n");

    scanf("%[^'\n']s",sName);               



    printf("Enter your age: \n");
    scanf(" %d",&iAge);              //space added

    printf("Enter your Marks: \n");
    scanf("%f",&fMarks);  

    printf("Welcome %s\n",sName);

    printf("your age is %d\n",iAge);
    printf("your Marks %s\f",fMarks);


    return EXIT_SUCCESS;
}
