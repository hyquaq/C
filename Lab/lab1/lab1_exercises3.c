#include <stdio.h>

int main(void)
{
    float oneNumber, twoNumber;
    printf("Enter two interger: ");
    scanf("%f %f", &oneNumber, &twoNumber);
    printf("PERMETER: %0.2f\n", (oneNumber + twoNumber) * 2);
    printf("AREA: %0.2f\n", oneNumber * twoNumber);

    return 0;
}