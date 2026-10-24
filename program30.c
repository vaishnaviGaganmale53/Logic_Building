#include<stdio.h>
#include<stdlib.h>

int main()
{
    char sName[30];
    int iAge = 0;
    float fMarks = 0.0f;

    printf("Enter your name: \n");

    scanf("%[^'\n']s",sName);               // %[^'\n']s  accept string until (joparyat) user enter press karat nahi ... (special scanf)use for string ,no need to write & beacause of we use array.'

    // enter remains in input buffer


    printf("Enter your age: \n");
    scanf("%d",&iAge);

    printf("Enter your Marks: \n");
    scanf("%f",&fMarks);

    printf("Welcome %s\n",sName);

    printf("your age is %d\n",iAge);
    printf("your Marks %s\f",fMarks);


    return EXIT_SUCCESS;
}
// printf("your Marks %s\f",fMarks); this line is not shown in output

// C:\Users\gagan\OneDrive\Desktop\LB>Myexe.exe
// Enter your name:
// vaishnavi Ashok Gaganmale
// Enter your age:
// 22
// Enter your Marks:
// 67.4567
// Welcome vaishnavi Ashok Gaganmale
// your age is 22