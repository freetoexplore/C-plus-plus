#include <iostream>
using namespace std;
#include <string>

int main44_2() {
	int arr4[5] = { 100, 200, 300, 400, 350 };
	int n = sizeof(arr4) / sizeof(arr4[0]) - 1;
	int arr44[5];
	int i = 0;

	for (i = 0; i <= n; i++)
	{
		arr44[i] = arr4[n - i];
	}

	int k = 0;//挨个打印array元素，不能整体读取
	for (k = 0; k < 5; k++) {
		cout << arr44[k] << endl;
	}
	system("pause");
	return 44;
}