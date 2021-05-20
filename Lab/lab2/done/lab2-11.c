// Write a C program to enter any number and check whether the number is palindrome or not .
#include <stdio.h>
#include <math.h>

int main(void)
{
    int n, count = -1, reverseNum = 0, saveN;
    printf("enter number: ");
    scanf("%d", &n);
    saveN = n;

    while (n)
    {
        count++;
        n /= 10;
    }
    n = saveN;
    while (n)
    {
        reverseNum += pow(10.0, count) * (n % 10);
        count--;
        n /= 10;
    }

    if (saveN == reverseNum)
    {
        printf("%d is palindrome.", saveN);
    }
    else
    {
        printf("%d isn't palindrome.", saveN);
    }

    return 0;
}