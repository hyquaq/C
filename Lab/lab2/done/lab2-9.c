// Write a C program to swap first and last digits of any number
#include <stdio.h>
#include <math.h>

int main(void)
{
    int n, count = 1, saveN;
    printf("enter number n: ");
    scanf("%d", &n);
    saveN = n;
    int lastDigit = n % 10;
    while (n / 100)
    {
        count++;
        n /= 10;
    }

    int firstDigit = n / 10;
    int finalNum = saveN + lastDigit * pow(10.0, count) + firstDigit - lastDigit - firstDigit * pow(10.0, count);

    printf("%d final swap %d", saveN, finalNum);
    return 0;
}