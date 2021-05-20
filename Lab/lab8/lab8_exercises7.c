// sort the employee array in ascending order of salary
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
void bubbleSort(struct employee employeeOne[], int leg)
{
    for (int i = 0; i < leg - 1; i++)
    {

        for (int j = i + 1; j < leg; j++)
        {
            if (employeeOne[j].salary > employeeOne[i].salary)
            {
                struct employee employeeTmp = employeeOne[i];
                employeeOne[i] = employeeOne[j];
                employeeOne[j] = employeeTmp;
            }
        }
    }
}
int main()
{
    struct employee employeeOne[10];

    bubbleSort(employeeOne, 10);
    for (int i = 0; i < 10; i++)
    {
        printfInformation(i, employeeOne[i]);
    }
    return 0;
}