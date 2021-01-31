#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    cout << (a & 1);
    if (a & 1)
        cout << "'odd'";
    else
        cout << "'even'";
    return 0;
}