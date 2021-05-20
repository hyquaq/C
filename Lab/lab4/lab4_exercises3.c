// Write function to find the minimum number of an interger array.
#include <stdio.h>

int findMinimun(int[], int);

int main(void)
{
    int a[] = {1, -10, 3};

    printf("minimun in array %d", findMinimun(a, sizeof(a) / sizeof(a[0])));
    return 0;
}

int findMinimun(int a[], int size)
{
    int min = a[0];

    for (int i = 1; i < size; i++)
    {
        if (a[i] < min)
            min = a[i];
    }
    return min;
}