#include <iostream>
using namespace std;
#include <string>


struct Student {

	string name;
	int age;
	float score;

};

//值传递
void printStudent(struct Student s) {
	s.age = 100;//形式参数不修饰实际参数
	cout << s.name << " " << s.age << " " << s.score << endl;
}

//地址传递
void printStudent2(struct Student *p) {
	p->age = 200; //指针可修饰实参
	cout << p->name << " " << p->age << " " << p->score << endl;
}

int main67_2() {
	Student s;
	s.name = "mike";
	s.age = 20;
	s.score = 60;

	printStudent(s);
	printStudent2(&s);

	system("pause");
	return 67;
}