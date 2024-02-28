#include <iostream>
using namespace std;
#include <string>

int main() {

	int a = 10;
	int b = 10;

	//常量指针，可以修改指针指向；不可修改指针值(p = 20;)
	int * p = &a;
	p = &b;

	system("pause");
	return 60;
}