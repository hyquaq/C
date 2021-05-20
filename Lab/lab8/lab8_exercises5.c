// count the number of male/female employee
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

    int countMale = 0, countFemale = 0;
    for (int i = 0; i < 10; i++)
    {
        if (employeeOne[i].sex == "male")
        {
            countMale++;
        }
        else
        {
            countFemale++;
        }
    }
    printf("male = %d\n female = %d", countMale, countFemale);
    return 0;
}