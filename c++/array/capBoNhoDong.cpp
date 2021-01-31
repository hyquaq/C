#include <iostream>

using namespace std;
int main()
{
	int n;
	int *arr;
	cin >> n;
	// Thực hiện cấp phát bộ nhớ động cho mảng
	arr = new int[n];
	// Nhập dữ liệu cho mảng
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	// Tính tổng các phần tử trong mảng và lưu vào biến sum
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	cout << "Sum = " << sum;
	delete[] arr;
	return 0;
}