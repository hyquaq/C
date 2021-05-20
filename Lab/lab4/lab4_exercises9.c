// Write program to count total number of duplicate elements in an array.
#include <stdio.h>
#define SIZE 1000

void countNumberDuplicate(int[], int[], int[], int);
void printArray(int[], int[]);

int main(void)
{
    int a[] = {1, 2, 3, 2, 3, 10, -1, 12, -1, 0, 0, 0};
    int b[SIZE] = {0};
    int c[SIZE] = {0};
    int size = sizeof(a) / sizeof(a[0]);

    countNumberDuplicate(a, b, c, size);
    printArray(b, c);
    return 0;
}

void countNumberDuplicate(int a[], int b[], int c[], int size)
{
    int sizeCount = -1;

    for (int i = 0; i < size; i++)
    {
        int acc = 0;
        for (int j = 0; j <= sizeCount; j++)
        {
            if (a[i] == b[j])
            {
                c[j]++;
                acc = 1;
                break;
            }
        }

        if (!acc)
        {
            b[++sizeCount] = a[i];
            c[sizeCount]++;
        }
    }
}

void printArray(int b[], int c[])
{
    for (int i = 0; i < SIZE; i++)
    {
        if (c[i] > 1)
            printf("%d->%d lan\n", b[i], c[i]);
    }
}