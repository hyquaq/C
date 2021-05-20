// Write a C program to print all Prime number between 1 to n by using three loop structures.
// Validating the input, in case the input isn’t correct, prompt user to enter it again.

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

    printf("Prime number between 1 to %d: ", n);
    for (int i = 2; i <= n; i++)
    {
        int dk = 0;
        for (int j = 2; j <= i / 2; j++)
        {
            if (!(i % j))
            {
                dk = 1;
                break;
            }
        }
        if (dk)
            continue;
        printf("%d ", i);
    }
    return 0;
}