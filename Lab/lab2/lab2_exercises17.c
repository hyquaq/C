#include <stdio.h>

int main(void)
{
    int n = 0;
    do
    {
        scanf("%d", &n);
    } while (n <= 0);

    for (int i = 1; i <= n; i++)
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
            printf("%d\t", i);
        }
    }
    return 0;
}