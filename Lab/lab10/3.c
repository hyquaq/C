#include <stdio.h>

int main(void)
{
    int day, month, year;
    printf("enter day = ");
    scanf("%d", &day);
    printf("enter month = ");
    scanf("%d", &month);
    printf("enter year = ");
    scanf("%d", &year);

    if (day <= 0 || month <= 0 || year <= 0)
    {
        printf("ERROR");
        return 0;
    }
    if (month > 12)
    {
        printf("ERROR");
        return 0;
    }
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        if (day > 31)
        {
            printf("ERROR");
            return 0;
        }
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        if (day > 30)
        {
            printf("ERROR");
            return 0;
        }
        break;
    default:
        if (!(year % 400) || (!(year % 4) && (year % 100)))
        {
            if (day > 29)
            {
                printf("ERROR");
                return 0;
            }
        }
        else
        {
            if (day > 28)
            {
                printf("ERROR");
                return 0;
            }
        }

        break;
    }

    printf("HOP LE");
    return 0;
}