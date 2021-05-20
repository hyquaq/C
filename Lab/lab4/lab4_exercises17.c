// Write program to subtract two matrices.
#include <stdio.h>
#define SIZE 10000

void printfArrayMatrix(int[][SIZE], int, int);
void subtractTwoMatrix(int[][SIZE], int[][SIZE], int[][SIZE], int, int);

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
    int c[][SIZE] = {0};
    printf("matrix one: \n");
    printfArrayMatrix(a, columns, rows);
    printf("matrix two: \n");
    printfArrayMatrix(b, columns, rows);

    subtractTwoMatrix(a, b, c, columns, rows);
    printf("matrix Before subtract: \n");
    printfArrayMatrix(c, columns, rows);

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
void subtractTwoMatrix(int a[][SIZE], int b[][SIZE], int c[][SIZE], int columns, int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            c[i][j] = a[i][j] - b[i][j];
        }
    }
}