// Write a C program to print all Perfect numbers between 1 to n by using three loop structures.
// Validating the input, in case the input isn’t correct, prompt user to enter it again.
#include <stdio.h>

int main(void)
{
    int num;
    printf("enter number n: ");
    scanf("%d", &num);
    while (num < 0)
    {
        printf("please enter again: ");
        scanf("%d", &num);
    }

    printf("Perfect number between 1 to %d: ", num);
    for (int i = 1; i <= num; i++)
    {
        int sumGCD = 0;
        for (int j = 1; j <= i / 2; j++)
        {
            if (!(i % j))
            {
                sumGCD += j;
            }
        }
        if (sumGCD == i)
        {
            printf("%d ", i);
        }
    }
    return 0;
}