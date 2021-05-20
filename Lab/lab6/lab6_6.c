#include <stdio.h>
#include <math.h>

int factorialN(int n)
{
    if (n == 1)
        return 1;
    return n * factorialN(n - 1);
}

float ansA(int n)
{
    if (n == 1)
        return 3;
    return (2 * n + 1) + ansA(n - 1);
}

float ansB(int n)
{
    if (n == 1)
        return 1.0 / 2;
    return (n / 2.0) + ansB(n - 1);
}

float ansC(int n)
{
    if (n == 1)
        return 1;
    return factorialN(n) + ansC(n - 1);
}

float ansD(int n)
{
    if (n == 1)
        return 1;
    return sqrt(n * 1.0) + ansD(n - 1);
}

float ansE(int n)
{
    if (n == 1)
        return 1;
    return factorialN(n) * ansE(n - 1);
}

int main(void)
{
    int n;
    printf("enter n = ");
    scanf("%d", &n);
    printf("a. 2i+1 == %f\n", ansA(n));
    printf("b. i/2 == %f\n", ansB(n));
    printf("c. i! == %f\n", ansC(n));
    printf("d. sqrt(i) == %f\n", ansD(n));
    printf("e. *i! == %f\n", ansE(n));
    return 0;
}