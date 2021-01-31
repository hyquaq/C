#include <iostream>

using namespace std;

struct Student
{
    int age;
    string name;

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
    void getInformation()
    {
        cin >> name >> age;
    }
};

int main()
{
    int n;
    cin >> n;
    Student *students = new Student[100];
    for (int i = 0; i < n; i++)
    {
        students[i].getInformation();
    }
    for (int i = 0; i < n; i++)
    {
        students[i].display();
    }

    delete[] students;
    return 0;
}