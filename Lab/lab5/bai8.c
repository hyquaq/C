// Input a string and check whether a word appears or not. if yes return first position
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
    printf("enter data: ");
    fgets(str, SIZE, stdin);
    printf("enter word: ");
    fgets(word, SIZE, stdin);

    checkW(str, len(str), word);
}