#include <iostream>
using namespace std;
void swap52(int num1, int num2)//无类型，不需要返回任何值
{
	cout << num1 << endl;
	cout << num2 << endl;

	int temp = num1;
	num1 = num2;
	num2 = temp;
	cout << "1 after exchange: " << num1 << endl;
	cout << "2 after exchange: " << num2 << endl;

}

int main52() {

	int a = 5;
	int b = 10;

	swap(a, b); //即使函数传递值给num1、2行参，实际参数a，b不变，除非赋值

	system("pause");
	return 52;
}