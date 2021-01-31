#include <iostream>

using namespace std;
struct Student
{
    int age;
    string name;
};

int main()
{
    Student s;
    cin >> s.name >> s.age;
    cout << "Name: " << s.name << endl;
    cout << "Age: " << s.age << endl;
    return 0;
}