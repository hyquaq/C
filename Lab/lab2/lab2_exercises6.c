// write a C program to calculate sum of digits of any number
#include <stdio.h>

int main(void)
{
    int num, sum = 0;
    scanf("%d", &num);
    while(num)
    {
        sum += num % 10;
        num /= 10;
    }
    printf("%d", sum);
    return 0;
}