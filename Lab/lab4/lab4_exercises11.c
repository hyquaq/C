// Write program to count frequency of each element in an array.
#include <stdio.h>
#define SIZE 1000

int countNumberDuplicate(int[], int[], int[], int);
void printArray(int[], int[], int);

int main(void)
{
    int a[] = {1, 2, 3, 2, 3, 10, -1, 12, -1, 0, 0, 0};
    int b[SIZE] = {0};
    int c[SIZE] = {0};
    int size = sizeof(a) / sizeof(a[0]);

    int sizeAffter = countNumberDuplicate(a, b, c, size);
    printArray(b, c, sizeAffter);
    return 0;
}

int countNumberDuplicate(int a[], int b[], int c[], int size)
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
    return ++sizeCount;
}

void printArray(int b[], int c[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d->%d lan\n", b[i], c[i]);
    }
}