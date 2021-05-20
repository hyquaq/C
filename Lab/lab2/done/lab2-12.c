// Write a C program to check whether a number is Prime number or not.
// Validating the input, in case the input isn't correct, prompt user to enter it again
#include <stdio.h>

int main(void)
{
    int n;
    printf("enter number n: ");
    scanf("%d", &n);
    while (n < 0)
    {
        printf("please enter again: ");
        scanf("%d", &n);
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            cnt++;
    }
    if (cnt == 2)
    {
        printf("%d is Prime number.", n);
    }
    else
    {
        printf("%d isn't Prime number", n);
    }

    return 0;
}