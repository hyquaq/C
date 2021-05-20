// Write program to search an element in an array by providing key value.
#include <stdio.h>
#define SIZE 1000

int findNumberByKey(int[], int, int);
void printArray(int[], int);

int main(void)
{
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(a) / sizeof(a[0]);
    printArray(a, size);

    int key;
    printf("enter number need find: ");
    scanf("%d", &key);

    printf("location %d in array -> %d", key, findNumberByKey(a, size, key));
    return 0;
}

int findNumberByKey(int a[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (a[i] == key)
            return i;
    }
    return -1;
}

void printArray(int a[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", a[i]);

    printf("\n");
}