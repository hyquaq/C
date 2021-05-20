#include <stdio.h>

int main(void)
{
    int days;
    printf("Enter days: \n");
    scanf("%d", &days);

    int year = days / 365;
    int weeks, day;
    weeks = (days % 365) / 7;
    day = days - year * 365 - weeks * 7;
    printf(" year: %d\n week: %d\n day: %d", year, weeks, day);
    return 0;
}