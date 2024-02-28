#include <iostream>
using namespace std;
#include <string>

int main42() {

	int arr1[5];
	arr1[0] = 1;
	arr1[1] = 2;
	//...自动填充一个巨大值

	int arr2[6] = { 1, 2, 3, 4, 5 }; //自动填充0

	int arr3[] = { 1, 2, 3, 4, 5 };
	int i = 0;
	for (i = 0; i < 5; i++) {
		cout << arr3[i] << endl;
	}

	cout << "size of arr1: " << sizeof(arr1) << endl;
	cout << "length of arr1: " << sizeof(arr1) / sizeof(arr1[0]) << endl;
	cout << "address head: " << (int)arr1 << endl;
	cout << "address first: " << (int)&arr1[0] << endl;
	cout << "address second: " << (int)&arr1[1] << endl;

	//arr1是常量，不可赋值

	system("pause");
	return 42;
}