
/*
input : 4
output:-  A B C D

*/

#include <stdio.h>
#include <stdlib.h>


void Pattern(int iNo)
{
  int iCnt = 0;
  char ch = '\0';
  ch = 'A';

  for(iCnt = 1; iCnt <= iNo; iCnt++)
  {
    printf("%c\n",ch);
    ch++;
  }
  printf("\n");
    
}

int main()
{
    int iValue = 0;
    printf("Enter the value : \n");
    scanf("%d", &iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}


/*
C:\Users\gagan\OneDrive\Desktop\Logic_Building>gcc program202.c -o Myexe

C:\Users\gagan\OneDrive\Desktop\Logic_Building>Myexe.exe
Enter the value :
4
A       B       C       D

C:\Users\gagan\OneDrive\Desktop\Logic_Building>Myexe.exe
Enter the value :
6
A       B       C       D       E       F

*/