// Define a recursive function that check whether a number is prime
#include <stdio.h>

int isPrime(int n, int i)
{
    if (n == 2)
    {
        return 1;
    }
    if (n < 2)
    {
        return 0;
    }
    if (n == i)
    {
        return 1;
    }
    if (n % i == 0)
    {
        return 0;
    }

    return isPrime(n, i + 1);
}

int main(void)
{
    int n;
    printf("enter n = ");
    scanf("%d", &n);
    if (isPrime(n, 2))
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    return 0;
}