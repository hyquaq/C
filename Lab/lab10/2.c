#include <stdio.h>
#include <math.h>
#define PI 3.1415
int main(void)
{
    float r, permeter, area;
    printf("enter permetre = ");
    scanf("%f", &permeter);
    r = permeter / (2 * PI);

    printf("area = %f", PI * pow(r, 2));
    return 0;
}