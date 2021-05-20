#include <stdio.h>

void swapInt(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
int main()
{
    int a = 1, b = 2;
    swapInt(&a, &b);

    printf("%d\t %d", a, b);
    return 0;
}