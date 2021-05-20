// define an employee structure contains the following properties:
// id,  name, sex, birthyear, phone number, salary.
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

int main()
{
    struct employee employeeOne;
    employeeOne.id = 1;
    strcpy(employeeOne.name, "QuaqHy");
    strcpy(employeeOne.sex, "male");
    strcpy(employeeOne.birthYear, "2002");
    strcpy(employeeOne.phoneNumber, "0837377855");
    employeeOne.salary = 3000;
    return 0;
}