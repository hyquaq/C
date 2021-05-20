// Write program to find transpose of a matrix.
#include <stdio.h>
#define SIZE 10

void transposeMatrix(int[][SIZE], int);
void swap(int *, int *);
void printArray(int[][SIZE], int);

int main(void)
{
    int n = 3;
    int a[SIZE][SIZE] = {
        {1, 2, 3},
        {3, 4, 5},
        {5, 6, 7}};
    printf("After transpose: \n");
    printArray(a, n);

    transposeMatrix(a, n);

    printf("Before transpose: \n");
    printArray(a, n);
    return 0;
}

void transposeMatrix(int a[][SIZE], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(&a[i][j], &a[j][i]);
        }
    }
}

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void printArray(int a[][SIZE], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}