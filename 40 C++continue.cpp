#include <iostream>
using namespace std;
#include <string>

int main40() {

	int i = 0;
	for (i = 0; i < 100; i++) {
	
		if (i % 2 == 0)
		{
			continue;//skip循环中还未执行的代码，执行下次循环
		}
		cout << i << endl;
	}


	system("pause");
	return 40;
}