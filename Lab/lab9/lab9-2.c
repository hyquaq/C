// read the input data contains 5 strings, then write to new file the length of each string
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    FILE *fi = fopen("input02.txt", "r");
    FILE *fo = fopen("output02.txt", "w");
    for (int i = 0; i < 5; i++)
    {
        fscanf(fi, "%s", &str);
        fprintf(fo, "%s -> leng = %d\n", str, strlen(str));
    }
    fclose(fi);
    fclose(fo);
}