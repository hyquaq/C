// Write a C program to find first and last digits of any number
#include <stdio.h>

int main(void)
{
    int n, saveN;
    printf("enter number n: ");
    scanf("%d", &n);
    saveN = n;
    int lastDigit = n % 10;
    int firstDigit;
    while (n / 10)
    {
        firstDigit = n / 10;
        n /= 10;
    }
    n = saveN;
    printf("first number of %d = %d\nlast number of %d = %d", n, firstDigit, n, lastDigit);
    return 0;
}