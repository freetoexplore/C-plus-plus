#include <iostream>
using namespace std;
#include <string>

int main26 () {
	int weight_A = 0;
	int weight_B = 0;
	int weight_C = 0;
	cout << "input weight a: " << endl;
	cin >> weight_A;
	cout << "input weight b: " << endl;
	cin >> weight_B;
	cout << "input weight c: " << endl;
	cin >> weight_C;

	if (weight_A > weight_B) 
	{

		if (weight_A > weight_C) {
			cout << "Top A" << endl;
		}
		else if (weight_A < weight_C)
		{ cout <<"Top C" << endl; }
	}
	else if (weight_A < weight_B)
	{
		if (weight_A > weight_C) {
			cout << "Top B" << endl;
		}
		else {
			if (weight_B < weight_C) {
				cout << "Top C" << endl;
			}
			else {
				cout << "Top B" << endl;
			}
		}
	}

	system("pause");
	return 26;

}