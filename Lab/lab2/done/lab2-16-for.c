// Write a C program to print all Armstrong numbers between 1 to n by using three loop structure.
// Validating the input, in case the input isn’t correct, prompt user to enter it again.

#include <stdio.h>
#include <math.h>

int main(void)
{
    int num = 0;
    printf("enter number n: ");
    scanf("%d", &num);
    while (num < 0)
    {
        printf("please enter again: ");
        scanf("%d", &num);
    }

    printf("Armstrong number: ");
    for (int i = 1; i <= num; i++)
    {
        int n = i, cnt = 0;
        int sum = 0;
        while (n)
        {
            cnt++;
            n /= 10;
        }
        n = i;
        while (n)
        {
            sum += pow(n % 10, cnt);
            n /= 10;
        }
        if (sum == i)
        {
            printf("%d ", i);
        }
    }

    return 0;
}