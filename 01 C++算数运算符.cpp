#include <iostream>
using namespace std;
#include <string>


int main11() {
	float a = 3.14f;
	int b = 2;
	cout << "input a/b is " << a/b << endl;

	int c = 3;
	cout << "input c%b is " << c % b << endl;

	double d1 = 3.14;
	int d2 = 1;
	//小数不可取模(取余) cout << d1 % d2 << endl;

	int a2 = 10;
	int b2 = ++a2 * 10;
	cout << b2 << endl;
//前置后置
	int a3 = 10;
	int c2 = a3++ * 10;
	cout << c2 << endl;

	system("pause");
	return 8;
}