#include <iostream>
using namespace std;
#include <string>

        //形式参数num1，num2，没有实际值 
int add(int num1, int num2) {
	int sum = num1 + num2;
	return sum;
}

int main50() {
	
	//实际参数a，b
	int a = 10;
	int b = 20;

	//调用add函数,函数结果赋值给对象c
	int c = add(a, b);
	cout << c << endl;

	system("pause");
	return 50;
}