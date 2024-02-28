#include <iostream>
using namespace std;

int main57() {
	//指针占用4个字节(32位下)；占用8个字节(64位)
	int a = 10;
	int* p = &a;

	cout << "sizeof (p) " << sizeof(p) << endl;
	cout << "sizeof (int *) " << sizeof(int *) << endl;
	cout << "sizeof (float *) " << sizeof(float *) << endl;
	cout << "sizeof (double *) " << sizeof(double *) << endl;
	cout << "sizeof (char *) " << sizeof(char *) << endl;

	system("pause");
	return 57;
}
