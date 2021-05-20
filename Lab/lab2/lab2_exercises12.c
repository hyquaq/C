// write a C program to check whether a number is Prime number or not.
// validating the input, in case the input isn't correct, prompt user to enter it again
#include <stdio.h>

int main(void)
{
    int a;
    do
    {
        scanf("%d", &a);
    } while (a <= 0);

    int cnt = 0;
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
            cnt++;
    }
    if (cnt == 2)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }

    return 0;
}