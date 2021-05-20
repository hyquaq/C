#include <stdio.h>

int main(void)
{
    float oneNumber, twoNumber;
    printf("Enter two number: \n");
    scanf("%f %f", &oneNumber, &twoNumber);

    if (oneNumber > twoNumber)
        printf("%.2f", oneNumber);
    else
        printf("%.2f", twoNumber);
    return 0;
}