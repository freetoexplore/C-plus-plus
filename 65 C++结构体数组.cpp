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

int main65() {

	struct Student stuArr[3] = {
		{"Mike", 18, 100},
		{"Mikie", 15, 99},
		{"Leo", 38, 66}

	};

	//访问或修改值
	stuArr[1].name = "John";

	for (int i = 0; i < 3; i++)
	{
				//不调取成员会报错
		cout << stuArr[i].name <<" "
			<< stuArr[i].age <<" "
			<< stuArr[i].score << endl;
	};

	system("pause");
	return 65;
}