// Write program to delete all duplicate elements from an array.
#include <stdio.h>
#define SIZE 1000

int countNumberDuplicate(int[], int[], int);
void printArray(int[], int);

int main(void)
{
    int a[] = {1, 2, 3, 2, 3, 10, -1, 12, -1, 0, 0, 0};
    int b[SIZE] = {0};
    int size = sizeof(a) / sizeof(a[0]);

    int sizeAffterDelete = countNumberDuplicate(a, b, size);
    printArray(b, sizeAffterDelete);
    return 0;
}

int countNumberDuplicate(int a[], int b[], int size)
{
    int sizeCount = -1;

    for (int i = 0; i < size; i++)
    {
        int acc = 0;
        for (int j = 0; j <= sizeCount; j++)
        {
            if (a[i] == b[j])
            {
                acc = 1;
                break;
            }
        }

        if (!acc)
        {
            b[++sizeCount] = a[i];
        }
    }

    return ++sizeCount;
}

void printArray(int b[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", b[i]);
    }
}