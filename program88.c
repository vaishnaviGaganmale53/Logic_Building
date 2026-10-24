/*excepte number from usr and chheck factorial or nor

*/
#include <stdio.h>
#include <stdlib.h>

void Display(int iNo)
{
    int icnt = 0;

    for (icnt = 1; icnt <= ivalue; icnt++)
    {
        printf("%d\n", icnt);
    }
}
int main()
{
    int ivalue = 0;
    int icnt = 0;

    printf("Enter number : \n");

    scanf("%d", &ivalue);

    Display(ivalue);
    return EXIT_SUCCESS;
}
