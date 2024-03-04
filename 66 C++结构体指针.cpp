#include <iostream>
using namespace std;
#include <string>

//定义
struct Student {

	//成员列表
	string name;
	int age;
	float score;

};

int main66() {

	struct Student s = { "mike", 12, 93.5 };

	struct Student * p = &s;//指针访问
	cout << p->age << endl;

	system("pause");
	return 66;
}