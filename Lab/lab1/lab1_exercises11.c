#include <stdio.h>

int main(void)
{
    char c;
    printf("Enter character:\n");
    scanf("%c", &c);

    if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z' || c >= '0' && c <= '9')
        printf("%c is alphanumeric", c);
    else
        printf("%c isn't alphanumeric", c);
    return 0;
}