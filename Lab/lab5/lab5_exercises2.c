// Input a string and print it in reverse order
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

void reverseData(char str[], int leg)
{
    printf("reverse: ");
    for (int i = leg - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
}

int main()
{
    char str[SIZE];
    printf("enter string: ");
    fgets(str, SIZE, stdin);
    reverseData(str, len(str));
}