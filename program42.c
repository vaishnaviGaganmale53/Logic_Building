#include<stdio.h>
#include<stdlib.h>

void Minimum(int iNo1,int iNo2)
{
    if(iNo1 < iNo2)
    {
       
        return iNo1;
    }
    else
    {
        
        return iNo2;
    }
}

int main()
{
    int ivalue1 = 0, ivalue2 = 0, iResult = 0;
    printf("Enter first number : \n");
    scanf("%d",&ivalue1);

    printf("Enter secand number : \n");
    scanf("%d",&ivalue2);

    if(ivalue1 < ivalue2)
    {
        printf("Minimum is : %d\n",ivalue1);
    }
    else
    {
        printf("Minimum is : %d\n",ivalue2);
    }

    iResult = Minimum(ivalue1,ivalue2);

    printf("Minimum number is : %d\n",+ iResult);
    


    return EXIT_SUCCESS;

}


