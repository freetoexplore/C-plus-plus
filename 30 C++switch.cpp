#include <iostream>
using namespace std;

int main30()
{
	int score = 0;
	cout << "input socre: " << endl;
	cin >> score;
	
	//switch 不能比较 <、>conditions unfeasible
	switch (score) {
	case 10:
		cout << "highest score" << endl;
		break;
	case 9:
		cout << "second highest score" << endl;
		break;
	default:
		cout<< "not high enough" << endl;
		break;
	}
	system("pause");
	return 30;
}