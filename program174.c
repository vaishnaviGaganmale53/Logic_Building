
#include<stdio.h>
#include<stdlib.h>

int CountDigits(int iNo)
{
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iCount++;
        iNo = iNo / 10;
    }

    return iCount;
}

int SumDigits(int iNo)
{
    int iDigit = 0;
    int iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
    }

    return iSum;
}

float AverageDigits(int iTotal, int iFrequency)
{
    float fAns = 0.0f;

    if(iFrequency == 0)
    {
        return 0.0f;
    }

    fAns = (float)iTotal / (float)iFrequency;

    return fAns;
}

int main()
{
    int iValue = 0;
    int iSum = 0;
    int iCount = 0;
    float fRet = 0.0f;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    iSum = SumDigits(iValue);
    iCount = CountDigits(iValue);

    fRet = AverageDigits(iSum, iCount);

    printf("Average of Digits: %.2f\n", fRet);

    return EXIT_SUCCESS;
}
