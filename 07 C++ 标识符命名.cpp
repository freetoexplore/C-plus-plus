#include <iostream>
using namespace std;
#include <string> //用C++字符串（string类）时要包含这个头文件
int main7() {
	int c = 2;
	cout << c << '/n';

	float f1 = 3.1415926;
	cout << "float f1 is " << f1 << endl;
	cout << "size f1 is " << sizeof(f1) << endl;

	char ch1 = 'a'; //单引号创建字符型变量
	cout << "size s is " << sizeof(ch1) << endl;
	char ch2 = 'A';
	cout << "A size " << sizeof(ch2) << endl;
	cout << "ASCII a is " << (int)ch1 << endl; //a-97
	cout << "ASCII A is " << (int)ch2 << endl; //A-65

	cout << "\n" << endl;
	cout << "\\" << endl;
	cout << "\tHello" << endl;

	char str1[] = "hello world";
	cout << str1 << endl;
	string str2 = "hello C++";
	cout << str2 << endl;
	
	bool flag = true;
	cout << flag << endl;
	flag = false;
	cout << flag << endl;
	cout << "bool size " << sizeof(flag) << endl;

	system("pause");
	return 7;

}