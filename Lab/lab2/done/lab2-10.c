// Write a C program to enter any number and print it's reverse
#include <stdio.h>

int main(void)
{
    int n;
    printf("enter number n: ");
    scanf("%d", &n);

    printf("reverse %d -> ", n);
    if (n < 0)
    {
        printf("%d", n % 10);
        n *= -1;
        n /= 10;
    }
    while (n)
    {
        printf("%d", n % 10);
        n /= 10;
    }
    return 0;
}