#include <iostream>
using namespace std;
#include "swap55.h"

//在header files中,创建后缀名为.h的头文件
//在source file中,创建后缀名为.cpp的源文件
//在头文件中写函数声明
//在源文件中写函数定义


//void swap(int a, int b);

//void swap(int a, int b) {

//	int temp = a;
//	a = b;
//	b = temp;

//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;

//}


int main55() {
	int a = 4;
	int b = 9;
	swap55(a, b);
	system("pause");
	return 55;
}