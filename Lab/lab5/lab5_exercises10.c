// Input two string s1, s2 and position. Then insert s2 to s1 from this position
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

void insterS(char s1[], char s2[], int position)
{
    int leg1 = len(s1);
    int leg2 = len(s2);
    for (int i = 0; i < position; i++)
    {
        printf("%c", s1[i]);
    }
    for (int i = 0; i < leg2; i++)
    {
        printf("%c", s2[i]);
    }
    for (int i = position; i < leg1; i++)
    {
        printf("%c", s1[i]);
    }
}
int main()
{
    char s1[SIZE];
    char s2[SIZE];
    printf("enter s1: ");
    fgets(s1, SIZE, stdin);
    printf("enter s2: ");
    fgets(s2, SIZE, stdin);

    int position;
    printf("enter position: ");
    scanf("%d", &position);

    insterS(s1, s2, position);
}