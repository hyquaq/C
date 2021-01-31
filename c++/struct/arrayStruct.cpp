#include <iostream>

using namespace std;

struct Student
{
    int age;
    string name;
    int score;
};

int main()
{
    int n;
    cin >> n;
    Student *students = new Student[100];
    for (int i = 0; i < n; i++)
    {
        cin >> students[i].name >> students[i].age >> students[i].score;
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (students[i].score > students[ans].score)
        {
            ans = i;
        }
    }
    cout << "Name: " << students[ans].name << endl;
    cout << "Age: " << students[ans].age << endl;
    cout << "Score: " << students[ans].score << endl;
    delete[] students;
    return 0;
}