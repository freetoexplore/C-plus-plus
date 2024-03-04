#include <iostream>
using namespace std;
#include <string>

//定义
struct Hero {

	//成员列表
	string name;
	int age;
	string gender;

};



int main() {
	struct Hero arr[5] = { {"molly", 12, "female"}, {"mike", 11, "male"}, {"sam", 21, "male"}, 
						   {"tom", 13, "male"}, {"kelly", 18, "female"} };

	
	cout << "before sorting" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i].age << " "; //只能打印结构列
	}
	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5 - i - 1; j++)
		{
			if (arr[j].age > arr[j + 1].age) {
				struct Hero temp = arr[j];   //临时结构类型 + 交换结构行
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}


	}


	cout << "after sorting" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i].age << " ";
	}
	system("pause");
	return 71;
}