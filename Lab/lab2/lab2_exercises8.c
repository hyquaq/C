// write a C program to count number of digits in any number
#include <stdio.h>

int main(void)
{
    int num, count = 0;
    scanf("%d", &num);
    while (num)
    {
        count++;
        num /= 10;
    }
    printf("%d", count);
    return 0;
}