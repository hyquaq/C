// size of pointer phu thuoc vao platform x64 or x86
// x84 4
// x64 8
#include <iostream>

using namespace std;
int main()
{
	int a = 0;
	int *pa = &a;
	cout << sizeof(pa) << endl;

	return 0;
}