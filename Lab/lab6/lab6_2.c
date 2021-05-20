// Define a recursive function to compute factorial of n
#include <stdio.h>

int factorialN(int n)
{
    if (n == 1)
        return 1;
    return n * factorialN(n - 1);
}
int main(void)
{
    int n;
    printf("enter n = ");
    scanf("%d", &n);
    printf("%d! = %d", n, factorialN(n));
    return 0;
}