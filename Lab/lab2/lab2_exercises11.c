// write a C program to check whether a number is palindrome or not
#include <stdio.h>

int main(void)
{

    int n;
    scanf("%d", &n);
    int child[100], count = 0;
    while (n)
    {
        child[count++] = n % 10;
        n /= 10;
    }

    for (int i = 0; i < count / 2; i++)
    {
        if (child[i] != child[count - i - 1])
        {
            // printf("%d%d\n", child[i], child[count - i - 1]);
            printf("false");
            return 0;
        }
    }
    printf("true");
    return 0;
}