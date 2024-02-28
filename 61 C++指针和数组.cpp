#include <iostream>
using namespace std;
#include <string>

int main() {

	int arr1[] = { 1,2,3, 4,5,6 };
	int* p = arr1;

	int n = sizeof(arr1) / sizeof(arr1[0]);
	int i = 0;
	for ( i < 0; i < n; i++)
	{
		cout<< * p << endl;
		p++; //指针循环
	}

	system("pause");
	return 61;
}