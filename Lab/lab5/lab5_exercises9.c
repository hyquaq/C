// Input two string s1 and s2, return the first position where s2 appears in s1
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

void checkW(char str[], int leg, char word[])
{
    int legW = len(word);
    for (int i = 0; i < leg; i++)
    {
        if (str[i] == word[0])
        {
            int j = i;
            int k = 0;
            while (str[j] == word[k] && k < legW)
            {
                j++;
                k++;
            }
            if (k == legW)
            {
                printf("%d", i);
                return;
            }
        }
    }

    printf("ko co");
}

int main()
{
    char str[SIZE], word[SIZE];
    printf("enter s1: ");
    fgets(str, SIZE, stdin);
    printf("enter s2: ");
    fgets(word, SIZE, stdin);

    checkW(str, len(str), word);
}