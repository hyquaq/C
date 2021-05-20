#include <stdio.h>
#include <math.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || j == 1 || j == n)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    printf("\n-------------------------------------------------------------------------\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            if (i + j == n + 1 || i == n || abs(j - i) == n - 1)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    printf("\n-------------------------------------------------------------------------\n");

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            if (i + j <= n || (abs(i - j) >= n && i != n))
            {
                printf("   ");
            }
            else
            {
                printf(" * ");
            }
        }
        printf("\n");
    }
    printf("\n-------------------------------------------------------------------------\n");

    for (int i = 1; i <= 2 * n - 1; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            if (i + j == n + 1 || abs(i - j) == n - 1 || i+j == 2*n+n-1)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    return 0;
}