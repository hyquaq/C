#include <stdio.h>

int main(void)
{
    int oneNumber, twoNumber;
    printf("Enter two interger: ");
    scanf("%d %d", &oneNumber, &twoNumber);
    printf("ADDITION: %d + %d = %d \n", oneNumber, twoNumber, oneNumber + twoNumber);
    printf("SUBTRACTION: %d - %d = %d \n", oneNumber, twoNumber, oneNumber - twoNumber);
    printf("MULTIPLICATION: %d * %d = %d \n", oneNumber, twoNumber, oneNumber * twoNumber);
    printf("DIVISION: %d / %d = %d \n", oneNumber, twoNumber, oneNumber / twoNumber);
    printf("REMAINDER: %d %% %d = %d \n", oneNumber, twoNumber, oneNumber % twoNumber);

    return 0;
}