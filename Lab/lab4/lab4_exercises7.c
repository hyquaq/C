// Write function to reverse an array without using temporary array.
#include <stdio.h>

void reverseArray(int[], int);
void printArray(int[], int);

int main(void)
{
    int a[] = {1, 3, 4, 5};
    reverseArray(a, sizeof(a) / sizeof(a[0]));
    printArray(a, sizeof(a) / sizeof(a[0]));
    return 0;
}

void reverseArray(int a[], int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        int tmp = a[i];
        a[i] = a[size - (i + 1)];
        a[size - (i + 1)] = tmp;
    }
}

void printArray(int a[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", a[i]);
}