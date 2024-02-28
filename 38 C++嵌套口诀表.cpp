#include <iostream>
using namespace std;
#include <string>

int main38() {
	int i = 0;
	int k = 0;

	for (i = 1; i < 10; i++) {
		for (k = 0; k <= i; k++) {
			cout << i << "*" << k << "=" << i * k;
		}
		cout << endl;

	}

	system("pause");
	return 38;

}