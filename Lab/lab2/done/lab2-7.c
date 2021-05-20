// Write a C program to calculate product of digits of any number.
#include <stdio.h>

int main(void)
{
    int n, product = 1, saveN;
    printf("enter number n: ");
    scanf("%d", &n);
    saveN = n;
    while (n)
    {
        product *= n % 10;
        n /= 10;
    }
    n = saveN;
    printf("product of digits %d = %d", n, product);
    return 0;
}