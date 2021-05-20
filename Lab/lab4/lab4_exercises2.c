// Write function to find the maximum number of an interger array.#include<stdio.h>
#include <stdio.h>

int findMaximum(int[], int);

int main(void)
{
    int a[] = {1, 10, 3};

    printf("maximun in array %d", findMaximum(a, sizeof(a) / sizeof(a[0])));
    return 0;
}

int findMaximum(int a[], int size)
{
    int max = a[0];

    for (int i = 1; i < size; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    return max;
}