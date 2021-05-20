// Input a string represent a full name, split and print the first name and the last name
#include <stdio.h>
#include <ctype.h>
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

void split(char str[], int leg)
{
    int i = leg;
    while (str[i] != ' ')
    {
        i--;
    }

    printf("last name: ");
    for (int j = 0; j < i; j++)
    {
        printf("%c", str[j]);
    }
    printf("\nfirst name: ");
    for (int j = i + 1; j <= leg; j++)
    {
        printf("%c", str[j]);
    }
}
int main()
{
    char str[SIZE];
    printf("enter full name: ");
    fgets(str, SIZE, stdin);
    split(str, len(str) - 1);
}