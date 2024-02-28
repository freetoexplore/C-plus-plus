#include <iostream>
using namespace std;
#include <string>

//值传递
void swap(int a = 1, int b = 2)
{
	int temp = 0;
	temp = a;
	a = b;
	b = temp;
	cout << a << b << temp << endl;
}

//指针函数
void swap2(int *p1, int *p2)
{
	int temp = 0;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
	cout << *p1 << *p2 << temp << endl;
}

//投入变量a, b
int main62() {

	int a = 10;
	int b = 20;
	swap2(&a, &b);//地址传递，可修饰实际参数
	return 62;

}
