// Input two string s1 and s2, concatenating s2 to s1
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

void concatenating(char s1[], char s2[])
{
    int leg1 = len(s1);
    int leg2 = len(s2);

    for (int i = 0; i < leg1;i++)
    {
        printf("%c", s1[i]);
    }

    for (int i = 0; i < leg2;i++)
    {
        printf("%c", s2[i]);
    }
}

int main()
{
    char s1[SIZE];
    printf("enter s1: ");
    fgets(s1, SIZE, stdin);
    char s2[SIZE];
    printf("enter s2: ");
    fgets(s2, SIZE, stdin);
    concatenating(s1, s2);
}