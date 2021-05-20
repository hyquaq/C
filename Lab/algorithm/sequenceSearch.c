#include <stdio.h>

int binarySearch(int a[], int leg, int key)
{
    for (int i = 0; i < leg; i++)
        if (a[i] == key)
            return i;

    return -1;
}
int main()
{
    int a[] = {1, 2, 3, 5, 7, 9};
    for (int i = 1; i <= 10; i++)
        printf("%d -> %d\n", i, binarySearch(a, 6, i));
}