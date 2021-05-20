// Define a recursive function to compute 2^n
#include <stdio.h>

int compute2(int n)
{
    if (n == 1)
        return 2;

    return 2 * compute2(n - 1);
}
int main(void)
{
    int n;
    printf("enter n: ");
    scanf("%d", &n);
    printf("2^%d = %d", n, compute2(n));
    return 0;
}