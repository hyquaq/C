#include <stdio.h>
#define SIZE 100

int bubleSort(int a[], int len)
{
    for (int i = len - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[j] > a[i])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}

int main()
{
    int a[SIZE];
    int len, key;

    printf("enter len arr: ");
    scanf("%d", &len);
    if (!len)
    {
        printf("len > 0");
        return 0;
    }

    for (int i = 0; i < len; i++)
    {
        printf("enter a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    bubleSort(a, len);
    for (int i = 0; i < len; i++)
    {
        printf("\na[%d] = %d", i, a[i]);
    }
    return 0;
}
