#include <stdio.h>

int binarySearch(int a[], int leg, int key)
{
    int low = 0;
    int hight = leg - 1;
    int mid;
    while (low <= hight)
    {
        mid = (low + hight) / 2;
        if (a[mid] == key)
            return mid;
        if (a[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            hight = mid - 1;
        }
    }

    return -1;
}
int main()
{
    int a[] = {1, 2, 3, 5, 7, 9};
    for (int i = 1; i <= 10; i++)
        printf("%d -> %d\n", i, binarySearch(a, 6, i));
}