// Write program to merge two array to third array.
#include <stdio.h>
#define SIZE 1000

void mergeArray(int[], int[], int[], int, int);
void printArray(int[], int);

int main(void)
{
    int a[] = {1, 2, 3};
    int b[] = {-1, -2, 0};
    int c[SIZE] = {0};

    int sizea = sizeof(a) / sizeof(a[0]);
    int sizeb = sizeof(b) / sizeof(b[0]);
    int sizeC = sizea + sizeb;
    mergeArray(a, b, c, sizea, sizeb);
    printArray(c, sizeC);
    return 0;
}

void mergeArray(int a[], int b[], int affter[], int sizea, int sizeb)
{

    for (int i = 0; i < sizea; i++)
    {
        affter[i] = a[i];
    }
    for (int i = 0; i < sizeb; i++)
    {
        affter[i + sizea] = b[i];
    }
}

void printArray(int a[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", a[i]);
}