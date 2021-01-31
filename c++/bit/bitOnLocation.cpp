// 5 = 101
// bit 3 tu phai qua la 1
// *method 1
// tao ra 100 BANG CACH 1 << (3-1)
// sau do and
// 101
// 100
// 100 ra 1
// *method 2
// lui 101 lai thanh 1 BANG CACH 5 >> (3-1)
// xong and vs 1
// ra 1 la 1
// ra 0 la 0

#include <iostream>

using namespace std;

int main()
{
    int a, n;
    cin >> a >> n;
    cout << (1 & (a >> (n - 1)));
    return 0;
}