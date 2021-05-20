#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        printf("please enter n: ");
        scanf("%d", &n);
    } while (n < 0);

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if ((i % 2))
        {
            sum += i;
        }
    }

    printf("sum = %d", sum);
    return 0;
}