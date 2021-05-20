#include <stdio.h>

int main(void)
{
    int year;
    printf("Enter year: \n");
    scanf("%d", &year);

    if(!(year/400))
    {
        printf("%d is leap year.",year);
    }
    else if (!(year % 4) && (year % 100))
    {
        printf("%d is leap year.", year);
    }
    else
    {
        printf("%d isn't leap year.", year);
    }
    
    return 0;
}