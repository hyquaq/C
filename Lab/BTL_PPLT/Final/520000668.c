//============================================================================/
// Name        : maiantiem.c
// Author      : NguyenTranQuangHuy
// Version     : 1.1
//============================================================================
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#define MAXSIZECHAR 100

float computeqT(char t[], int s)
{
    int juice = s % 6;

    switch (juice)
    {
    case 5:
        if (!strcmp(t, "Flood"))
        {
            return 0;
        }
        if (!strcmp(t, "Storm"))
        {
            return 0.05;
        }
        if (!strcmp(t, "Rain"))
        {
            return 0.1;
        }
        if (!strcmp(t, "Shower"))
        {
            return 0.15;
        }
        if (!strcmp(t, "Drizzle"))
        {
            return 0.2;
        }
        if (!strcmp(t, "Cloudy"))
        {
            return 0.25;
        }
        break;
    case 4:
        if (!strcmp(t, "Flood"))
        {
            return -0.05;
        }
        if (!strcmp(t, "Storm"))
        {
            return 0;
        }
        if (!strcmp(t, "Rain"))
        {
            return 0.05;
        }
        if (!strcmp(t, "Shower"))
        {
            return 0.1;
        }
        if (!strcmp(t, "Drizzle"))
        {
            return 0.15;
        }
        if (!strcmp(t, "Cloudy"))
        {
            return 0.20;
        }
        break;
    case 0:
        if (!strcmp(t, "Flood"))
        {
            return -0.1;
        }
        if (!strcmp(t, "Storm"))
        {
            return -0.05;
        }
        if (!strcmp(t, "Rain"))
        {
            return 0;
        }
        if (!strcmp(t, "Shower"))
        {
            return 0.05;
        }
        if (!strcmp(t, "Drizzle"))
        {
            return 0.1;
        }
        if (!strcmp(t, "Cloudy"))
        {
            return 0.15;
        }
        break;
    case 1:
        if (!strcmp(t, "Flood"))
        {
            return -0.15;
        }
        if (!strcmp(t, "Storm"))
        {
            return -0.1;
        }
        if (!strcmp(t, "Rain"))
        {
            return -0.05;
        }
        if (!strcmp(t, "Shower"))
        {
            return 0;
        }
        if (!strcmp(t, "Drizzle"))
        {
            return 0.05;
        }
        if (!strcmp(t, "Cloudy"))
        {
            return 0.1;
        }
        break;
    case 2:
        if (!strcmp(t, "Flood"))
        {
            return -0.2;
        }
        if (!strcmp(t, "Storm"))
        {
            return -0.15;
        }
        if (!strcmp(t, "Rain"))
        {
            return -0.1;
        }
        if (!strcmp(t, "Shower"))
        {
            return -0.05;
        }
        if (!strcmp(t, "Drizzle"))
        {
            return 0;
        }
        if (!strcmp(t, "Cloudy"))
        {
            return 0.5;
        }
        break;
    case 3:
        if (!strcmp(t, "Flood"))
        {
            return -0.25;
        }
        if (!strcmp(t, "Storm"))
        {
            return -0.2;
        }
        if (!strcmp(t, "Rain"))
        {
            return -0.15;
        }
        if (!strcmp(t, "Shower"))
        {
            return -0.1;
        }
        if (!strcmp(t, "Drizzle"))
        {
            return -0.05;
        }
        if (!strcmp(t, "Cloudy"))
        {
            return 0;
        }
        break;
    }
}

int triangular(int n)
{
    return (n * (n + 1)) / 2;
}

float computeqgS(int s)
{
    int juice = s % 6;
    switch (juice)
    {
    case 0:
        return s / 2.0;
    case 1:
        return 2 * s;
    case 2:
        return -pow((s % 9), 3) / 5.0;
    case 3:
        return -pow((s % 30), 2) + 3.0 * s;
    case 4:
        return -s;
    case 5:
        return -1 * triangular((s % 5) + 5);
    }
}

int isPrime(int number)
{
    int count = 0;
    int i;
    for (i = 1; i <= number; i++)
        if (!(number % i))
            count++;
    if (count == 2)
        return 1;
    return 0;
}

int computeP1(int hp)
{
    if (isPrime(hp))
        return 1000;
    return hp;
}

int computeP2(int hp, int d, int s)
{
    if (isPrime(hp))
        return (hp + s) % 1000;
    return (hp + d) % 100;
}

float computeRanCan(int d, int p1, int p2)
{
    return (d + p1 + p2) / 1000.0;
}

int isFibo(int num)
{
    int first = 1, second = 1;
    while (1)
    {
        int next = first + second;
        first = second;
        second = next;

        if (num == first || num == second)
            return 1;
        if (num < first)
            return 0;
    }
}

float computeF(int hp, int d, int s, char t[])
{
    int isFi = isFibo(d + s);
    if (d < 200 && !isFi)
    {
        return 0;
    }
    else if (d <= 800)
    {
        return (40.0 - (abs(d - 500) / 20.0) + computeqgS(s)) * (1.0 + computeqT(t, s));
    }
    else
    {
        return (-d * s) / 1000.0;
    }
}

float computep(int hp, int d, int s, char t[])
{
    int p1 = computeP1(hp);
    int p2 = computeP2(hp, d, s);
    if (d >= 200 && d < 300)
    {
        float shake = computeRanCan(d, p1, p2);
        if (shake > 0.8)
            return 0;
        else if (shake > 0.6)
        {
            hp -= 50;
            p1 = hp;
            p2 = (hp + d) % 100;
        }
        else if (shake > 0.4)
        {
            hp -= 30;
            p1 = hp;
            p2 = (hp + d) % 100;
        }
        else if (shake > 0.2)
        {
            hp -= 20;
            p1 = hp;
            p2 = (hp + d) % 100;
        }
    }

    float f = computeF(hp, d, s, t);
    float p = (p1 + p2 * f) / (1000.0 + abs(p2 * f));
    if (p >= 1)
        return 1;

    if (p <= 0)
        return 0;

    return p;
}

int checkInput(int hp, int d, int s, char t[])
{
    if (hp < 1 || hp > 999)
        return 1;
    if (d < 1 || d > 1000)
        return 1;
    if (s < 1 || s > 100)
        return 1;

    if ((!strcmp(t, "Cloudy")) || (!strcmp(t, "Drizzle")) || (!strcmp(t, "Shower")) || (!strcmp(t, "Rain")) || (!strcmp(t, "Storm")) || (!strcmp(t, "Flood")))
        return 0;

    return 1;
}

int doc_File(int *hp, int *d, int *s, char t[])
{
    FILE *fi = fopen("input.inp", "r");
    fscanf(fi, "%d%d%d%s", hp, d, s, t);

    fclose(fi);
    if (checkInput(*hp, *d, *s, t))
        return 0;
    return 1;
}

void ghi_File(float p)
{
    FILE *fo = fopen("output.out", "w");
    if (p == -1)
        fprintf(fo, "-1");
    else if (p == 1)
        fprintf(fo, "1");
    else if (p == 0)
        fprintf(fo, "0");
    else
        fprintf(fo, "%.3g", p);
    fclose(fo);
}

int main()
{
    int hp = 0, d = 0, s = 0;
    char t[MAXSIZECHAR];
    float P1 = 0, P2 = 0, p = -1;

    if (doc_File(&hp, &d, &s, t))
    {
        p = computep(hp, d, s, t);
    }

    ghi_File(p);
    return 0;
}
