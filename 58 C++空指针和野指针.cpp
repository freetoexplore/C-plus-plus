#include <iostream>
using namespace std;

int main58_1() {

	//空指针初始化变量,
	int *p = NULL; // NULL = 0
	
	//可赋值空指针；但不可访问空指针,因为0~255之间的内存编号是系统占用的
	*p = 100;
	cout << *p << endl;

	//

	system("pause");
	return 57;
}

int main58_2() {

	//指针指向非法地址
	int *p = (int *)0x1100; // NULL = 0

	//不可访问野指针
	cout << *p << endl;

	//

	system("pause");
	return 57;
}