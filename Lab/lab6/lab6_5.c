// Define a recursive function to return the number of digits of a positive interger number
#include <stdio.h>

int digitOfNum(int n)
{
    if (!n)
        return 0;
    return 1 + digitOfNum(n / 10);
}
int main(void)
{
    int n;
    printf("enter n = ");
    scanf("%d", &n);
    printf("%d", digitOfNum(n));
    return 0;
}