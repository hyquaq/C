// Write a C program to count number of digits in any number.
#include <stdio.h>

int main(void)
{
    int n, count = 0, saveN;
    printf("enter number n: ");
    scanf("%d", &n);
    saveN = n;
    while (n)
    {
        count++;
        n /= 10;
    }
    n = saveN;
    printf("count of digits %d = %d", n, count);
    return 0;
}