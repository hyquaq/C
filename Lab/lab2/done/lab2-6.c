// Write a C program to calculate sum of digits of any number
#include <stdio.h>

int main(void)
{
    int n, sum = 0, saveN;
    printf("enter number n: ");
    scanf("%d", &n);
    saveN = n;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    n = saveN;
    printf("sum of digits %d = %d", n, sum);
    return 0;
}