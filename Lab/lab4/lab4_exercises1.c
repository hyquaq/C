//  Write functions to calculate the following expressions:
#include <stdio.h>

float ansA(int);
int ansB(int);
int ansC(int);
int ansD(int);
float ansE(int);

int main(void)
{
    int n;
    printf("enter n: ");
    scanf("%d", &n);

    printf("a. sum i/2 = %f\n", ansA(n));
    printf("b. sum i/2 = %d\n", ansB(n));
    printf("c. sum i/2 = %d\n", ansC(n));
    printf("d. sum i/2 = %d\n", ansD(n));
    printf("e. sum i/2 = %f\n", ansE(n));
    return 0;
}

float ansA(int n)
{
    float a = 0;
    for (int i = 1; i <= n; i++)
    {
        a += (i / 2);
    }

    return a;
}

int ansB(int n)
{
    float b = 0;
    for (int i = 1; i <= n; i++)
    {
        b += (2 * i + 1);
    }

    return b;
}

int ansC(int n)
{
    float c = 0;
    int gt = 1;
    for (int i = 1; i <= n; i++)
    {
        gt *= i;
        c += (gt + 1);
    }
    return c;
}

int ansD(int n)
{
    float d = 1;
    int gt = 1;
    for (int i = 1; i <= n; i++)
    {
        gt *= i;
        d *= gt;
    }
    return d;
}

float ansE(int n)
{
    float e = 1;
    for (int i = 1; i <= n; i++)
    {
        e *= ((2 * i) / 3);
    }
    return e;
}