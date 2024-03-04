#include <iostream>
using namespace std;
#include <string>


//创建学生数据类型,自定义数据类型
struct Student {

	//成员列表
	string name;
	int age;
	float score;

};

int main64() {
	
	struct Student s1; //创建student时，可以不写struct关键字。定义时一定要写！
	s1.name = "mike";
	s1.age = 12;
	s1.score = 93.5;
	cout << s1.name << " " << s1.age << " " << s1.score << endl;

	//或
	struct Student s2 = { "mike", 12, 93.5 };
	cout << s2.name << " " << s2.age << " " << s2.score << endl;

	//或
	struct Student {

		string name;
		int age;
		float score;

	} s3;

	s3.name = "mike";
	s3.age = 12;
	s3.score = 93.5;
	cout << s3.name << " " << s3.age << " " << s3.score << endl;


	system("pause");
	return 64;
}