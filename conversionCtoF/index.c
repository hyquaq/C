#include <stdio.h>

double converFtoC(double);
int main(void)
{
    // C = (5/9)*(F-32)
    double F, C;
    printf("Please enter value F = ");
    scanf("%lf", &F);

    C = converFtoC(F);
    printf("Great!!! Value %fF = %fC", F, C);
    return 0;
}

double converFtoC(double F)
{
    return (5.0 / 9.0) * (F - 32);
}