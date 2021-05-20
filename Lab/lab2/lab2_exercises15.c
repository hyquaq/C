#include <stdio.h>
int main(void)
{
    int n = 0, nBack;
    do
    {
        scanf("%d", &n);
    } while (n <= 0);
    nBack = n;

    for (int i = 2; i <= n; i++)
    {
        int dk = 0;
        for (int j = 2; j <= i / 2; j++)
        {
            if(!(i%j))
            {
                dk = 1;
                break;
            }
        }

        if(dk)
            continue;

        printf("%d ", i);
    }
    return 0;
}