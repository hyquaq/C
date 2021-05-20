// write a C program to calculate product of digits of any number
#include <stdio.h>

int main(void)
{
    int num, product = 1;
    scanf("%d", &num);
    while (num)
    {
        product *= num % 10;
        num /= 10;
    }
    printf("%d", product);
    return 0;
}