#include <iostream>

using namespace std;

int main()
{
    int a, n;
    cin >> a >> n;
    a = a & (~(1 << (n - 1)));
    cout << a;
    return 0;
}