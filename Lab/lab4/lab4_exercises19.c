// Write program to check whether two matrices are equal or not.
#include <stdio.h>
#define SIZE 1000

void printfArrayMatrix(int[][SIZE], int, int);
int checkEqual(int[][SIZE], int[][SIZE], int, int);

int main(void)
{
    int columns = 3;
    int rows = 2;
    int a[][SIZE] = {
        {1, 2, 3},
        {2, 3, 4}};
    int b[][SIZE] = {
        {1, 2, 3},
        {2, 3, 4}};

    printf("matrix one: \n");
    printfArrayMatrix(a, columns, rows);
    printf("matrix two: \n");
    printfArrayMatrix(b, columns, rows);

    if (checkEqual(a, b, columns, rows))
        printf("equal!!!!!!!!!!!!");
    else
        printf("not equal!");

    return 0;
}

void printfArrayMatrix(int a[][SIZE], int columns, int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}

int checkEqual(int a[][SIZE], int b[][SIZE], int columns, int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (a[i][j] != b[i][j])
                return 0;
        }
    }
    return 1;
}