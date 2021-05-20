// find a employee by providing his/her id
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
    int idFind;
    printf("providing id = ");
    scanf("%d", &idFind);
    for (int i = 0; i < 10; i++)
    {
        if (idFind == employeeOne[i].id)
        {
            printfInformation(i, employeeOne[i]);
            break;
        }
    }
    return 0;
}