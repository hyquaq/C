#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;
    printf("Enter number: \n");
    scanf("%d", &num);
    printf("Absolute %d = %d", num, abs(num));
    return 0;
}