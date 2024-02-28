#include <iostream>
using namespace std;

int main29() {
	//if condition 1 ? then statement 2 : else statament 3
	int a = 6;
	int b = 10;
	int c = 0;
	
	c =(a > b ? a : b);
	(a > b ? a : b) = 100;//返回变量=100
	cout << a << endl;

	system("pause");
	return 29;
}