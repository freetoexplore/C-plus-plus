#include <iostream>
using namespace std;
int main24() {

	//单行
	int score = 0;
	cout << "input score: " << endl;
	cin >> score;
	cout << "your score: " << score << endl;

	if (score > 600)
	{
		cout << "Congrats!" << endl;
		
		//嵌套if
		if (score > 700) {
			cout << "Top school" << endl;
		}
		else if (score > 650) {
		
			cout << "Second top school" << endl;
		}

	}

	//多行
	else if (score > 500)
	{
		cout << "Middle school." << endl;
	}

	//多条件

	else {
		cout << "Sorry score not enough" << endl;
	}

	system("pause");
	return 24;
}