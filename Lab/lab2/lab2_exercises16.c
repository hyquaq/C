#include <stdio.h>

int Pow(int x, int y)
{
    int res = 1;
    for (int i = 1; i <= y; i++)
        res *= x;
    return res;
}

int main(void)
{
    int n = 0, nBack;
    do
    {
        scanf("%d", &n);
    } while (n <= 0);
    nBack = n;

    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i / Pow(10, cnt))
        {
            cnt++;
        }

        int sum = 0, tmp = i;
        while (tmp)
        {
            sum += Pow(tmp % 10, cnt);
            tmp /= 10;
        }
        if (sum == i)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
// int main()
// {
//     int cnt = 0;
//     for (int i = 1; i <= 1000; i++)
//     {
//         if(i/Pow(10,cnt))
//         {
//             cnt++;
//         }

//         printf("%d\t%d\n", cnt, i);
//     }
// }