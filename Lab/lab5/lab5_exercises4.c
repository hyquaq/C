// Input a string and normalize it (trim the space before, inside, and after; to lower each token except the first)
// ex : "   PrOgRaMmInG   MeThOd   " => "Programming Method"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define SIZE 100

int len(char str[])
{
    int cnt = 0;
    while (str[cnt] != '\0')
    {
        cnt++;
    }
    return cnt - 1;
}

void delOneChar(char str[], int location, int leg)
{
    for (int i = location; i <= leg; i++)
    {
        str[i] = str[i + 1];
    }
}

void toLowerAll(char str[], int leg)
{
    for (int i = 0; i < leg; i++)
    {
        str[i] = tolower(str[i]);
    }
}

void trimAllSpace(char str[], int leg)
{
    int first = 0;
    while (str[first] == ' ')
        first++;
    int last = leg - 1;
    while (str[last] == ' ')
        last--;

    char tmp[SIZE] = "";
    for (int i = first, j = 0; i <= last; i++, j++)
        tmp[j] = str[i];

    str[0] = 0;
    printf("-%s-\n", str);
    int i;
    for (i = 0; i <= last - first; i++)
        str[i] = tmp[i];
    str[i] = '\0';

    leg = last - first + 1;
    i = 0;
    while (i < len(str))
    {
        while (str[i] == str[i + 1] && str[i] == ' ')
        {
            delOneChar(str, i, len(str));
        }

        i++;
    }
}

void upperOne(char str[], int leg)
{
    for (int i = 0; i <= leg; i++)
    {
        if(str[i-1] == ' ' || i == 0)
            str[i] = toupper(str[i]);
    }
}
int main()
{
    char str[SIZE];
    printf("enter string: ");
    fgets(str, SIZE, stdin);

    toLowerAll(str, len(str));
    trimAllSpace(str, len(str));
    upperOne(str, len(str));
    
    printf("%s", str);
}