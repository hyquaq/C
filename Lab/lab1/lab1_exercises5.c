#include <stdio.h>
#define FAHRENHEIT 33.8
int main(void)
{
    float c;
    printf("Enter value Celsius: \n");
    scanf("%f", &c);
    printf("%0.2fC = %0.2fF", c, c * FAHRENHEIT);
    return 0;
}