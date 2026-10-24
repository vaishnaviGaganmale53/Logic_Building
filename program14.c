

 #include"Header.h" 
// #include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////
// Entry point of the application

///////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int ivalue1 = 0, ivalue2 = 0, iresult = 0;

    printf("Enter first nuber:\n");
    if(scanf("%d", &ivalue1) != 1)
        {
        fprintf(stderr,"Unable to proceed as input is invali\n");
        
        return EXIT_FAILURE;
        }

    printf("Enter secand nuber:\n");
    if(scanf("%d", &ivalue2) != 1)
        {
        fprintf(stderr,"Unable to proceed as input is invalid\n");
        
        return EXIT_FAILURE;
        }

    iresult = addition(ivalue1, ivalue2); // Business logic

    printf("Addition is : %d\n", iresult);

    return EXIT_SUCCESS;                         //EXIT_SUCCESS lihnyasathi #include<stdlib.h> hi header file use keli jate
}