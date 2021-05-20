#include <stdio.h>
#define SIZE 100

int binarySearch(int a[], int left, int right, int key)
{
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (a[mid] == key)
            return mid;

        if (a[mid] > key)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return -1;
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

    printf("enter key to find: ");
    scanf("%d", &key);

    int position = binarySearch(a, 0, len, key);
    if (position != -1)
        printf("%d is position %d", key, position);
    else
        printf("%d is not found", key);
    return 0;
}
