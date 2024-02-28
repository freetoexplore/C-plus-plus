#include <iostream>
using namespace std;
#include <string>

int main44() {
	int arr4[5] = { 100, 200, 300, 400, 350 };
	int i = 0; //idx
	int n = 0; //idx
	int w = 0; //kg

	n = sizeof(arr4) / sizeof(arr4[0]) ;

	for (i = 0; i < n; i++) {
		if (arr4[i] >= w) {
			w = arr4[i];
		}
		
	}
	cout <<"Max weight: " << w << endl;
	system("pause");
	return 44;
}