// Write a C program to check whether a number is Armstrong number or not.
#include <stdio.h>
#include <math.h>

int main(void)
{
    int n, saveN;
    printf("enter number n: ");
    scanf("%d", &n);
    saveN = n;
    int cnt = 0;

    while (n)
    {
        cnt++;
        n /= 10;
    }

    n = saveN;
    int sum = 0;
    while (n)
    {
        sum += pow(n % 10, cnt);
        n /= 10;
    }

    if (sum == saveN)
    {
        printf("%d is Armstrong number.", saveN);
    }
    else
    {
        printf("%d isn't Armstrong number.", saveN);
    }

    return 0;
}