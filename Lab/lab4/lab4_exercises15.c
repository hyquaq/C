// Write program to sort array elements in ascending order
#include <stdio.h>

void swap(int *, int *);
void sort(int[], int);
void printArray(int[], int);

int main(void)
{
    int a[] = {10, -1, 2, 1, 9, 2, 6, 7, 3};
    int size = sizeof(a) / sizeof(a[0]);
    printf("After sort: ");
    printArray(a, size);

    sort(a, size);
    printf("Before sort: ");
    printArray(a, size);
    return 0;
}

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void sort(int a[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
            if (a[i] > a[j])
                swap(&a[i], &a[j]);
    }
}

void printArray(int a[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", a[i]);
    printf("\n");
}