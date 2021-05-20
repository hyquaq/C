// Input a string and check whether a character appears or not. if yes, return the all appearing positons
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

void isCheck(char s[], char c)
{
    int dk = 1;
    int leg = len(s);
    for (int i = 0; i < leg; i++)
    {
        if (s[i] == c && dk)
        {
            printf("cac vi tri la: ");
            dk = 0;
        }
        if (s[i] == c)
        {
            printf("%d\t", i);
        }
    }

    if (dk)
        printf("not found");
}

int main()
{
    char str[SIZE];
    printf("enter string: ");
    fgets(str, SIZE, stdin);
    printf("enter character: ");
    char c;
    scanf("%c", &c);

    isCheck(str, c);
}