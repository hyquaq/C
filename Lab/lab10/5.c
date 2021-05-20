#include <stdio.h>
#include <string.h>
#define SIZE 300
int main(void)
{
    char s[SIZE];
    printf("enter string: ");
    scanf("%s", &s);
    for (int i = 0; i < strlen(s) / 2; i++)
    {
        if(s[i]!=s[strlen(s)-i-1])
        {
            printf("False");
            return 0;
        }
    }
    printf("True");
    return 0;
}