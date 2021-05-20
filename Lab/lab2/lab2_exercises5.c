// write a C program to find first and last digits of any number
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int lastDigit = n % 10;
    int firstDigit;
    while (n / 10)
    {
        firstDigit = n / 10;
        n /= 10;
    }
    printf("%d \t %d", firstDigit, lastDigit);
    return 0;
}