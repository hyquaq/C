// write a program to illustrate a search program, the program's scenario is as follows:
// print to the console: "enter a filename".
// read a string from the console for the filename
// print a menu of the algorithms you implemented, having each represented by a letter or number
// print to the console: "choose one of these search algorithms:".
// read a letter or number indicating the algorithm
// print to the console: "enter a value to search for: ".
// read an integer from the console as your target value then print the position or print "not found"
#include <stdio.h>
#define SIZE 100

int linearSearch(int value, int arr[], int n)
{
    for (int i = 0; i < n; i++)
        if (arr[i] == value)
            return i;
    return -1;
}

int binarySearch(int value, int arr[], int low, int high)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == value)
            return mid;

        if (arr[mid] < value)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main()
{
    char fileInput[SIZE];
    int n;
    int arr[SIZE];

    printf("enter a filename: ");
    scanf("%s", fileInput);
    FILE *fi = fopen(fileInput, "r");

    fscanf(fi, "%d", &n);
    for (int i = 0; i < n; i++)
    {
        fscanf(fi, "%d", &arr[i]);
    }

    fclose(fi);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\nchoose one of these search algorithms:\n\t1:LinearSearch\n\t2:BinarySeach\n\tChoose: ");
    int chooseSearch = 0;
    scanf("%d", &chooseSearch);
    printf("enter value: ");
    int value = 0;
    scanf("%d", &value);
    if (chooseSearch == 1)
    {
        int position = linearSearch(value, arr, n);
        if (position == -1)
            printf("not found\n");
        else
            printf("position %d -> arr[%d]\n", value, position);
    }
    if (chooseSearch == 2)
    {
        int position = binarySearch(value, arr, 0, n - 1);
        if (position == -1)
            printf("not found\n");
        else
            printf("position %d -> arr[%d]\n", value, position);
    }

    return 0;
}
