#include <iostream>
using namespace std;
#include <ctime>

int main31() {
	//猜数字
	//用srand加seed
	srand((unsigned int)time(NULL));
	int randnum = rand() % 100 + 1;
	int numb = 0;
	cout << "input number: " << endl;
	cin >> numb;

	while (true)
		if (numb < randnum) {
			cout << "numb too small" << endl;
			cout << "input new guess: " << endl;
			cin >> numb;
		}
		else if (numb > randnum) {
			cout << "numb too big" << endl;
			cout << "input new guess: " << endl;
			cin >> numb;
		}
		else if (numb = randnum){
			cout << "numb is right" << endl;
			break;
		} 

	system("pause");
	return 31;
}