#include <iostream>
using namespace std;

//无参无反
void test01(){
	cout << "this is test01" << endl;
}

//有参无反
void test02(int a) {
	cout << "this is test02 and input a= " <<a<< endl;
}

//无参有反 
int test03() {

	cout << "this is test03" << endl;
	return 2333;
}

//有参有反
int test04(int ac) {

	cout << "this is test04" << endl;
	cout << "test04 input ac: " << ac << endl;

	int c = ac * 100;
	return c;
}

int main53() {
	test01();
	cout << "\n" << endl;
	
	test02(100);
	cout << "\n" << endl;
	
	int c = test03();
	cout << "test03 c: " << c <<"\n" << endl;
	
	int d = test04(3);
	cout << "test04 d = ac*100 = " << d << endl;

	system("pause");
	return 53;
}