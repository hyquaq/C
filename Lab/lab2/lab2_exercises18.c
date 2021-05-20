// #include <stdio.h>

// int Pow(int x, int y)
// {
//     int res = 1;
//     for (int i = 1; i <= y; i++)
//         res *= x;
//     return res;
// }

// int binaryNumber(int n)
// {
//     int cnt = 0;
//     int binaryNum = 0;
//     while (n)
//     {
//         binaryNum += (n % 2) * Pow(10, cnt);
//         n /= 2;
//         cnt++;
//     }

//     return binaryNum;
// }
// int main(void)
// {
//     int n;
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//         printf("%d\t%d\n", i, binaryNumber(i));
//     return 0;
// }

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
    int n;
    scanf("%d", &n);

    int cnt = 0;
    int binaryNum = 0;
    while (n)
    {
        binaryNum += (n % 2) * Pow(10, cnt);
        n /= 2;
        cnt++;
    }
    printf("%d", binaryNum);
    return 0;
}