// Input a string and two interger numbers, name n and position. then delete n characters from postion of input string
#include <stdio.h>
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

void deteleN(char s[], int n, int position)
{
    for (int i = 0; i < position; i++)
    {
        printf("%c", s[i]);
    }

    for (int i = position + n; i < len(s); i++)
    {
        printf("%c", s[i]);
    }
}

int main()
{
    char str[SIZE];
    printf("enter string: ");
    fgets(str, SIZE, stdin);
    int n, position;
    printf("enter n = ");
    scanf("%d", &n);
    printf("enter position = ");
    scanf("%d", &position);

    deteleN(str, n, position);
}