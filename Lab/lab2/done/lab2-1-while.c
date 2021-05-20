// Write a C program to print sum of all even numbers between 1 to n by using three loop structures.
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

    int sum = 0;
    int i = 0;
    while (i <= n)
    {
        sum += i;
        i += 2;
    }

    printf("sum even 1 to %d = %d", n, sum);
    return 0;
}