#include <iostream>
using namespace std;
#include <string>

int main39() {

	int input_x = 1;
	cout << "input_x: " << endl;
	cin >> input_x;

	switch (input_x) {
	case 1:
		cout << "Good guess! " << endl;
		break;
	case 2:
		cout << "Try again." << endl;
		break;
	default:
		cout << "Too bad." << endl;
		break;
	}

	system("pause");
	return 39;
}