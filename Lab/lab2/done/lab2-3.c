// Write a C program to print table of any number.
#include <stdio.h>

int main(void)
{
    int n;
    printf("enter number n: ");
    scanf("%d", &n);
    printf("table of any number\n");
    for (int i = 0; i <= 10; i++)
    {
        printf("%d * %d = %d\n", n, i, n * i);
    }
    return 0;
}