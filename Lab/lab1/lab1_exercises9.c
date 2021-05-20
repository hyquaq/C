#include <stdio.h>

float maxNumber(float a, float b);
int main(void)
{
    float oneNumber, twoNumber, threeNumber;
    printf("Enter two number: \n");
    scanf("%f %f %f", &oneNumber, &twoNumber, &threeNumber);

    printf("%0.2f", maxNumber(oneNumber, maxNumber(twoNumber, threeNumber)));
    return 0;
}

float maxNumber(float a, float b)
{
    if (a > b)
        return a;
    return b;
}