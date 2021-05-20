// Write a C program to check whether a number is  Perfect number or not.
#include <stdio.h>

int main(void)
{
    int n;
    printf("enter number n: ");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum += i;
    }

    if (sum == n)
    {
        printf("%d is Perfect number.", n);
    }
    else
    {
        printf("%d isn't Perfect number.", n);
    }
    return 0;
}