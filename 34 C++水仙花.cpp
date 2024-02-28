#include <iostream>
using namespace std;
#include <string>

int main34() {

	for (int n = 100; n < 1000; n++)
	{
		int a = n % 10;
		int b = n / 10 % 10;
		int c = n / 100;
		if (n / 100*100 + n / 10 % 10*10 + n % 10 == a * a * a + b * b * b + c * c * c)
		{
			cout << n << endl;
		}
		
	}
	system("puase");
	return 34;
}