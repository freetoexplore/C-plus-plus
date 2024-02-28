#include <iostream>
using namespace std;
#include <string>

				//数值首地址（和原数组功能一样）
void bubbleSort(int* arr, int len)
{
	cout << "Original Array: " << endl;
	for (int o = 0; o< len;o++)
	{
		cout << arr[o] << endl;
	}


	for (int i = 0; i < len; i++)
	{
		for (int k = 0; k < len - 1 - i; k++)
		{
			if (arr[k] > arr[k + 1])
			{

				int temp = 0;
				temp = arr[k+1];
				arr[k + 1] = arr[k];
				arr[k] = temp;
			}
		}
	}

	cout << "Sorted Array: " << endl;
	for (int j = 0; j < len; j++)
	{
		cout << arr[j] << endl;
	}
}


int main() {

	int arr[] = {1, 3, 4, 2, 7};
	int len = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, len);

	system("pause");
	return 63;

}
