// delete a specific employee
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
    struct employee employeeOne[11];

    int id;
    printf("enter id need delete = ");
    scanf("%d", &id);

    int index = 0;
    while (employeeOne[index].id != id)
    {
        index++
    }

    employeeOne[9].id = -1;
    for (int i = index; i < 10; i++)
    {
        employeeOne[i] = employeeOne[i + 1];
    }

    return 0;
}