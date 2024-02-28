#include <iostream>
using namespace std;
#include <string>

int main46() {

	int arr[9] = { 4, 2, 8, 0, 5, 7, 1, 3, 9 };

	cout << "before sorting" << endl;
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	//开始冒泡排序
	//总共排序个数为 元素个数 - 1
	for (int i = 0; i < 9; i++)
	{
	//内层对比循环 次数=元素个数-当前轮数-1
		for (int j = 0; j < 9 - i - 1; j++) 
		{
			//如果数1比数2大，交换数字

			if (arr[j] > arr[j + 1]){
				int temp = 0;
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}


	cout << "after sorting" << endl;
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << " ";
	}
	system("pause");
	return 46;
}