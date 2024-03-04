#include <iostream>
using namespace std;
#include <string>

struct Student {

	//成员列表
	string name;
	int age;
	float score;

};


struct Teacher {

	//成员列表
	string name;
	int age;
	int id;
	struct Student stu;

};


int main67_1() {
	Teacher t;
	t.id = 10000;
	t.name = "Leon";
	t.age = 37;
	t.stu.name = "mike";
	t.stu.age = 20;
	t.stu.score = 60;

	cout << t.id << " " << t.stu.name << endl;
	system("pause");
	return 6701;

}