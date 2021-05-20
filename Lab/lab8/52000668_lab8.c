#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE_MAX 1000

typedef struct
{
    int id;
    char name[SIZE_MAX];
    char sex[SIZE_MAX];
    int birthYear;
    char phoneNumber[SIZE_MAX];
    float salary;
} employe;

void defineInf(employe a[10], int n)
{
    a[0].id = 52001;
    strcpy(a[0].name,"nguyen van a");
    strcpy(a[0].sex,"female");
    a[0].birthYear = 2000;
    strcpy(a[0].phoneNumber,"03 456789");
    a[0].salary = 12.5;

    a[1].id = 51001;
    strcpy(a[1].name,"nguyen van b");
    strcpy(a[1].sex,"female");
    a[1].birthYear = 1991;
    strcpy(a[1].phoneNumber,"03 987654");
    a[1].salary = 99;

    a[2].id = 50001;
    strcpy(a[2].name,"nguyen van c");
    strcpy(a[2].sex,"female");
    a[2].birthYear = 1987;
    strcpy(a[2].phoneNumber,"03 159753");
    a[2].salary = 587.09;

    a[3].id = 50301;
    strcpy(a[3].name,"nguyen van d");
    strcpy(a[3].sex,"male");
    a[3].birthYear = 1977;
    strcpy(a[3].phoneNumber,"03 159753");
    a[3].salary = 789;

    a[4].id = 50201;
    strcpy(a[4].name,"nguyen van e");
    strcpy(a[4].sex,"male");
    a[4].birthYear = 1997;
    strcpy(a[4].phoneNumber,"04 159754");
    a[4].salary = 87;

    a[5].id = 50001;
    strcpy(a[5].name,"nguyen van f");
    strcpy(a[5].sex,"male");
    a[5].birthYear = 1888;
    strcpy(a[5].phoneNumber,"05 159755");
    a[5].salary = 268;

    a[6].id = 60001;
    strcpy(a[6].name,"nguyen vo c");
    strcpy(a[6].sex,"female");
    a[6].birthYear = 1999;
    strcpy(a[6].phoneNumber,"06 169766");
    a[6].salary = 167;

    a[7].id = 70001;
    strcpy(a[7].name,"nguyen duy c");
    strcpy(a[7].sex,"male");
    a[7].birthYear = 1998;
    strcpy(a[7].phoneNumber,"07 179777");
    a[7].salary = 152;

    a[8].id = 80001;
    strcpy(a[8].name,"nguyen tho c");
    strcpy(a[8].sex,"female");
    a[8].birthYear = 1988;
    strcpy(a[8].phoneNumber,"08 189888");
    a[8].salary = 123;

    a[9].id = 90001;
    strcpy(a[9].name,"nguyen bao c");
    strcpy(a[9].sex,"female");
    a[9].birthYear = 1999;
    strcpy(a[9].phoneNumber,"09 199999");
    a[9].salary = 11.2;

}

void printInfOne(employe b)
{
    printf("id = %d\n", b.id);
    printf("name = %s\n", b.name);
    printf("sex = %s\n", b.sex);
    printf("birthYear = %d\n", b.birthYear);
    printf("phoneNumber = %s\n", b.phoneNumber);
    printf("salary = %f$\n", b.salary);
}
void printInf(employe a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("=======================information %d=======================\n", i);
        printInfOne(a[i]);
    }
}
int main()
{
    char enter;

    int countEmploy = 10;
    employe employes[countEmploy];

    defineInf(employes, countEmploy);
    printInf(employes, countEmploy);

//    4.find employe
    printf("=========================================================4.find employe===============================================\n");
    int idFind;
    printf("nhap id can tim: ");
    scanf("%d", &idFind);
    for(int i = 0; i < countEmploy; i++)
        if(employes[i].id == idFind)
        {
            printf("tim thay!!!\n");
            printInfOne(employes[i]);
            idFind = -1;
            break;
        }
    if (idFind != -1)
        printf("khong tim thay!!!\n");
//    5.count male and female
    printf("==================================================5.count male and female===============================================\n");
    int male = 0, female = 0;
    for(int i = 0 ; i < countEmploy; i++)
        if(!strcmp(employes[i].sex, "male"))
            male++;
        else
            female++;

    printf("male = %d \nfemale = %d\n", male, female);

//    6.sort order year
    printf("=====================================================6.sort order year===============================================\n");
    for(int i = 0; i < countEmploy-1; i++)
        for(int j = i+1; j < countEmploy; j++)
        if(employes[i].birthYear > employes[j].birthYear)
        {
            employe tmp = employes[i];
            employes[i] = employes[j];
            employes[j] = tmp;
        }
    printInf(employes, countEmploy);

//    7.sort order salary
    printf("====================================================7.sort order salary===============================================\n");
        for(int i = 0; i < countEmploy-1; i++)
        for(int j = i+1; j < countEmploy; j++)
        if(employes[i].salary > employes[j].salary)
        {
            employe tmp = employes[i];
            employes[i] = employes[j];
            employes[j] = tmp;
        }
    printInf(employes, countEmploy);


//    8.find max salary
    printf("=========================================================8.find max salary===============================================\n");
    int maxSalary = 0;
    for(int i = 1; i < countEmploy; i++)
        if(employes[maxSalary].salary < employes[i].salary)
            maxSalary = i;
    printInfOne(employes[maxSalary]);

//    9.find youngest
    printf("=========================================================9.find youngest===============================================\n");
    int youngest = 0;
    for(int i = 1; i < countEmploy; i++)
        if(employes[youngest].birthYear < employes[i].birthYear)
            youngest = i;
    printInfOne(employes[youngest]);

//    10.delete
    printf("=========================================================10.delete===============================================\n");
    int position;
    printf("nhap vi tri can xoa: ");
    scanf("%d", &position);
    for(int i = position; i < countEmploy-1; i++)
        employes[i] = employes[i+1];

    printInf(employes, --countEmploy);
    return 0;
}

