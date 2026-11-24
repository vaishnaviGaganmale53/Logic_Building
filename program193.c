
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
        printf("%C\n",iCnt);  // %c  
    }

    return EXIT_SUCCESS;
}


/*C:\Users\gagan\OneDrive\Desktop\Logic_Building>Myexe.exe
A
B
C
D
E
F
G
H
I
J
K
L
M
N
O
P
Q
R
S
T
U
V
W
X
Y
Z*/