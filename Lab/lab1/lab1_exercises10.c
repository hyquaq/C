#include <stdio.h>

int main(void)
{
    int number;
    printf("Enter number: \n");
    scanf("%d", &number);
    
    if(!number)
        printf("%d is zero", number);
    else if(number%2)
        printf("%d is odd", number);
    else
        printf("%d is even", number);

    return 0;
}