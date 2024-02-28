#include <iostream>
using namespace std;

int main56() {
	
	//定义指针
	int a = 10;
	int * p;
	p = &a;
	cout << "a address: " << &a << endl;
	cout << "a address by pointer: " << p << endl;


	//使用指针读写数据: 解引用找到指向内存中的数据
	cout << "a = " << a << endl; //10

	*p = 1000;//解引用
	cout << "new *p or a = " << *p << endl; //1000


	system("pause");
	return 56;
}