#include <iostream>
using namespace std;

//1.宏常量 #define obj val
#define Day 7

//2.const修饰的变量

int main3() {

	//Day = 8; 报错not modifiable value，宏常量不可更改

	cout << "一周内共有 " << Day << " 天" << endl;

	const int month = 12;
	//month = 24; 报错，const修饰的变量也称为常量

	cout << "一年有 " << month << " 月" << endl;

	system("pause");
	return 5;
}