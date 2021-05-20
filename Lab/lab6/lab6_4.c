// Define a recursive function to compute x^n
#include <stdio.h>

int compute2(int x, int n)
{
    if (n == 1)
        return x;

    return x * compute2(x, n - 1);
}
int main(void)
{
    int n, x;
    printf("enter x: ");
    scanf("%d", &x);
    printf("enter n: ");
    scanf("%d", &n);
    printf("%d^%d = %d", x, n, compute2(x, n));
    return 0;
}