#include <stdio.h>
#include <string.h>
#define SIZE 300
int checkDX(char s[])
{
    for (int i = 0; i < strlen(s) / 2; i++)
    {
        if (s[i] != s[strlen(s) - i - 1])
        {
            return 0;
        }
    }
    return 1;
}
int main(void)
{
    char s[SIZE];
    printf("enter string: ");
    scanf("%s", &s);

    return 0;
}