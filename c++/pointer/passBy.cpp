// tham tri va tham chieu
// c++ and c# truyen duoc ca tham tri va tham chieu
// c va java chi truyen duoc tham tri
#include <iostream>

using namespace std;

void thamtri(int *a)
{
	(*a)++;
}
void thamchieu(int &a)
{
	a++;
}
int main()
{
	int a = 0;
	thamtri(&a);
	cout << a << endl;

	int b = 10;
	thamchieu(b);
	cout << b << endl;

	return 0;
}