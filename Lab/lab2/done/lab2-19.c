// Write a C program to compute the Factorial of n.
// Validating the input, in case the input isn’t correct, prompt user to enter it again
#include <stdio.h>

int main(void)
{
    int n;
    long long product = 1;
    printf("enter number n: ");
    scanf("%d", &n);
    if (!n)
    {
        printf("%d! = %d", n, n);
        return 0;
    }
    for (int i = 1; i <= n; i++)
        product *= i;
    printf("%d! = %lld", n, product);
    return 0;
}