// write a C program to enter any number and print its reverse
#include <stdio.h>
#include <math.h>
int main(void)
{
    int num, count = -1, backNum;
    scanf("%d", &num);
    backNum = num;
    while (num)
    {
        count++;
        num /= 10;
    }

    float reverseNum = 0;
    for (int i = count; i >= 0; i--)
    {
        // printf("%d\n", backNum % 10);
        reverseNum += pow(10, i) * (backNum % 10);
        backNum /= 10;
    }
    printf("%.0f\n", reverseNum);

    return 0;
}