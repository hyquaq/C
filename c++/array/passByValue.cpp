#include <iostream>

using namespace std;

void resizeArr(int **arr, int n)
{
    delete[] * arr;
    *arr = new int[n];
}
int main()
{
    int *arr = new int[10];
    int n = 100;
    resizeArr(&arr, n);
    for (int i = 0; i < n; i++)
    {
        arr[i] = i;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << '.';
    }
    delete[] arr;
    return 0;
}