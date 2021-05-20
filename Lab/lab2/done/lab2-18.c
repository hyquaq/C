// Write a C program convert Decimal to Binary number system.
#include <stdio.h>
#include <math.h>

int main(void)
{
    int n;
    printf("enter number n: ");
    scanf("%d", &n);

    int cnt = 0;
    int binaryNum = 0;
    while (n)
    {
        binaryNum += (n % 2) * pow(10, cnt);
        n /= 2;
        cnt++;
    }
    printf("after conver -> %d", binaryNum);
    return 0;
}