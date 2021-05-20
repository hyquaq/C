#include <stdio.h>

void xuat(int a[], int leg)
{
    for (int i = 0; i < leg; i++)
        printf("%d\t", a[i]);
    printf("\n");
}
void bubbleSort(int a[], int leg)
{
    for (int i = 0; i < leg-1; i++)
    {

        for (int j = i + 1; j < leg; j++)
        {
            if(a[j] > a[i])
            {
                int tmp = a[j];
                a[j] = a[i];
                a[i] = tmp;
            }
        }
    }
}
int main()
{
    int a[] = {2, 1, 3, 1, 0, 9};
    bubbleSort(a, 6);
    xuat(a, 6);
}