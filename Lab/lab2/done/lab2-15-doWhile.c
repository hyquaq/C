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
    do
    {
        if (!(i <= n))
        {
            break;
        }
        int dk = 0;
        j = 2;
        do
        {
            if (!(j <= i / 2))
            {
                break;
            }
            if (!(i % j))
            {
                dk = 1;
                break;
            }
            j++;
        } while (1);
        i++;
        if (dk)
            continue;
        printf("%d ", i - 1);
    } while (1);
    return 0;
}