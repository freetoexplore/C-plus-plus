#include <iostream>
using namespace std;
#include <string>

int main49() {

	string names[] = { "A", "B" };
	int arr1[2][3] = { 100, 100, 100, 20, 50, 30 };
	for (int i = 0; i < 2; i++) {
		int aline = 0;
		for (int k = 0; k < 3; k++)

		{
			aline = aline + arr1[i][k];
		
		}
		cout<<names[i]<<" Sum: " << aline << endl;
	}

	system("pause");
	return 49;
}