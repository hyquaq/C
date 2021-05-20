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
    int i = 2, j;
    while (i <= n)
    {
        int dk = 0;
        j = 2;
        while (j <= i / 2)
        {
            if (!(i % j))
            {
                dk = 1;
                break;
            }
            j++;
        }
        i++;
        if (dk)
            continue;
        printf("%d ", i - 1);
    }
    return 0;
}