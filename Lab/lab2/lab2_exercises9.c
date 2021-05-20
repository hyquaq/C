// write a C program to swap first and last digits of any number
#include <stdio.h>
#include <math.h>

int main(void)
{
    int num, count = 1, backNum;
    scanf("%d", &num);
    backNum = num;
    int lastDigit = num % 10;
    while (num / 100)
    {
        count++;
        num /= 10;
    }

    int firstDigit = num / 10;
    float finalNum = lastDigit * (pow(10, count)) + firstDigit;
    count = 0;
    backNum /= 10;
    while (backNum / 10)
    {
        count++;
        finalNum += (pow(10, count)) * (backNum % 10);
        backNum /= 10;
    }

    printf("%0.0f", finalNum);
    return 0;
}