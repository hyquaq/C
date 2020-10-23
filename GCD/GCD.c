#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);

    // A = qB + r
    // A = B
    // B = r
    while (b > 0)
    {
        int r = a / b;
        a = b;
        b = r;
    }
    printf("%d", a);

    return 0;
}