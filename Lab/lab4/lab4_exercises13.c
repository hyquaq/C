// Write program to put even and odd elements of array into two new separate arrays.
#include <stdio.h>
#define SIZE 1000

int slip(int[], int[], int[], int, int *, int *);
void printArray(int[], int);

int main(void)
{
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(a) / sizeof(a[0]);
    printArray(a, size);

    int odd[SIZE];
    int sizeO;
    int even[SIZE];
    int sizeE;

    slip(a, odd, even, size, &sizeO, &sizeE);
    printArray(odd, ++sizeO);
    printArray(even, ++sizeE);
    return 0;
}

int slip(int a[], int odd[], int even[], int size, int *sizeO, int *sizeE)
{
    *sizeO = -1;
    *sizeE = -1;
    for (int i = 0; i < size; i++)
    {
        if (a[i] % 2)
        {
            odd[++*sizeO] = a[i];
            continue;
        }

        even[++*sizeE] = a[i];
    }
}

void printArray(int a[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", a[i]);

    printf("\n");
}