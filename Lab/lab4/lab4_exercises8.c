// Write program to delete an element from an array at specified position
#include <stdio.h>

void detele(int[], int, int);
void printArray(int[], int);

int main(void)
{
    int a[] = {1, 2, 3};
    int position = 1;
    int size = sizeof(a) / sizeof(a[0]);

    detele(a, size, position);
    printArray(a, size - 1);
    return 0;
}

void detele(int a[], int size, int position)
{
    for (int i = position; i < size; i++)
    {
        a[i] = a[i + 1];
    }
}

void printArray(int a[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", a[i]);
}