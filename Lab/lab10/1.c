#include <stdio.h>
#include <math.h>

int main(void)
{
    float x1, y1, x2, y2;
    printf("enter x1 = ");
    scanf("%f", &x1);
    printf("enter y1 = ");
    scanf("%f", &y1);
    printf("enter x2 = ");
    scanf("%f", &x2);
    printf("enter y2 = ");
    scanf("%f", &y2);

    printf("khoang cach = %f", sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)));
    return 0;
}