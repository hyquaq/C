// Write function to sum all non-positive numbers of an interger array.

#include <stdio.h>

float sumAll(int[], int);

int main(void)
{
    int a[] = {1, 2, 3, -3, -2};

    printf("sum all non-positive numbers of array = %.2f", sumAll(a, sizeof(a) / sizeof(a[0])));
    return 0;
}

float sumAll(int a[], int size)
{
    float sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] < 0)
            sum += a[i];
    }

    return sum;
}