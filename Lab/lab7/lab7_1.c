#include <stdio.h>
#define SIZE 100

int sequentialSearch(int a[], int len, int key)
{
    for (int i = 0; i < len; i++)
        if (a[i] == key)
            return i;

    return -1;
}

int main()
{
    int a[SIZE];
    int len, key;

    printf("enter len arr: ");
    scanf("%d", &len);

    for (int i = 0; i < len; i++)
    {
        printf("enter a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("enter key to find: ");
    scanf("%d", &key);

    int position = sequentialSearch(a, len, key);
    if (position != -1)
        printf("%d is position %d", key, position);
    else
        printf("%d is not found", key);
    return 0;
}
