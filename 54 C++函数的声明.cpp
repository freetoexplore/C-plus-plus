#include <iostream>
using namespace std;
#include <string>


//如果调取函数靠后，需要提前拟函数声明防止报错
int max(int a, int b);


int max(int a, int b) {
	return a > b ? a : b;
}


int main54() {

	int a = 2;
	int b = 1;
	int c = max(a, b);
	cout <<"max value = " << c << endl;

	system("pause");
	return 54;

}



