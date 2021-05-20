#include <stdio.h>
#define SIZE 100

int selectionSort(int a[], int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < len; j++)
        {
            if (a[min] > a[j])
                min = j;
        }

        int tmp = a[min];
        a[min] = a[i];
        a[i] = tmp;
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

    selectionSort(a, len);
    for (int i = 0; i < len; i++)
    {
        printf("\na[%d] = %d", i, a[i]);
    }
    return 0;
}
