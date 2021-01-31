#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    while (n != 0)
    {
        // check bit cuoi co phai la 1 hay ko
        ans += n & 1;
        // lui bit ve phai
        n = n >> 1;
    }

    cout << ans;
    return 0;
}