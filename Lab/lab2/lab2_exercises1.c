// using for
// #include <stdio.h>

// int main(void)
// {
//     int n;
//     do
//     {
//         printf("please enter n: ");
//         scanf("%d", &n);
//     } while (n < 0);

//     int sum = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         if (!(i % 2))
//         {
//             sum += i;
//         }
//     }

//     printf("sum = %d", sum);
//     return 0;
// }

// using while
// #include <stdio.h>

// int main(void)
// {
//     int n;
//     do
//     {
//         printf("please enter n: ");
//         scanf("%d", &n);
//     } while (n < 0);

//     int sum = 0;
//     int i = 0;
//     while (i <= n)
//     {
//         if (i % 2 == 0)
//             sum += i;
//         i += 1;
//     }

//     printf("sum = %d", sum);
//     return 0;
// }

// using do while
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
    int i = 0;
    do
    {
        if (i % 2 == 0)
            sum += i;
        i++;
    } while (i <= n);

    printf("sum = %d", sum);
    return 0;
}