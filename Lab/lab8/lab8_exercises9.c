// find a youngest employee
#include <stdio.h>
#include <string.h>
#define SIZE 100

struct employee
{
    int id;
    char name[SIZE];
    char sex[SIZE];
    char birthYear[SIZE];
    char phoneNumber[SIZE];
    int salary;
};
void printfInformation(int i, struct employee employeeOne)
{
    printf("-------------------------------------\n");
    printf("INFOMATION employee %d .\n", i);
    printf("id %d .\n", employeeOne.id);
    printf("name %d .\n", employeeOne.name);
    printf("sex %s .\n", employeeOne.sex);
    printf("birthYear %s .\n", employeeOne.birthYear);
    printf("phoneNumber %s .\n", employeeOne.phoneNumber);
    printf("salary %d .\n", employeeOne.salary);
}
int main()
{
    struct employee employeeOne[10];

    int minBirthYear = employeeOne[0].salary, index = 0;
    for (int i = 1; i < 10; i++)
    {
        if (minBirthYear > employeeOne[i].salary)
        {
            minBirthYear = employeeOne[i].salary;
            index = i;
        }
    }

    printfInformation(index, employeeOne[index]);
    return 0;
}