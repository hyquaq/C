// write a C program to check whether a number is armstrong number or not
#include <stdio.h>
#include <math.h>

int main(void)
{
    int n, nBack;
    scanf("%d", &n);
    nBack = n;
    int cnt = 0;

    while (n)
    {
        cnt++;
        n /= 10;
    }

    n = nBack;
    int sum = 0;
    while (n)
    {
        sum += pow(n % 10, cnt);
        n /= 10;
    }

    if (sum == nBack)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }

    return 0;
}