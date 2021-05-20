#include <stdio.h>

void xuat(int a[], int leg)
{
    for (int i = 0; i < leg; i++)
        printf("%d\t", a[i]);
    printf("\n");
}
void selectionSort(int a[], int leg)
{
    for (int i = 0; i < leg; i++)
    {

        int maxInArr = a[i], index = i;
        for (int j = i + 1; j < leg; j++)
        {
            if (maxInArr < a[j])
            {
                maxInArr = a[j];
                index = j;
            }
        }

        int tmp = a[i];
        a[i] = a[index];
        a[index] = tmp;
    }
}
int main()
{
    int a[] = {2, 1, 3, 1, 0, 9};
    selectionSort(a, 6);
    xuat(a, 6);
}