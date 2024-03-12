#include <iostream>
using namespace std;
#include <string>

void showmenu() {
	cout<< "********************" << endl;
	cout << "**1.add person   **" << endl;
	cout << "**2.show contact **" << endl;
	cout << "**3.del contact  **" << endl;
	cout << "**4.find         **" << endl;
	cout << "**5.modify       **" << endl;
	cout << "**6.remove all   **" << endl;
	cout << "**0.exit         **" << endl;
	cout << "*******************" << endl;

}

struct Person {
	string name;
	string gender;
	int age;
	string phone;

};
#define MAX 1000;

struct AddressBook {

	struct Person PersonArray[1000];
	int m_size;
};

// 1
void addPerson(AddressBook * abs) {
	if (abs->m_size == 1000) {
		cout << "Can't add more." << endl;
	}
	else {
		string aname = "";
		cout << "input name: " << endl;
		cin >> aname;
		abs->PersonArray[abs->m_size].name = aname;

		string agender = "";
		cout << "input gender: " << endl;
		cin >> agender;
		abs->PersonArray[abs->m_size].gender = agender;

		int aage = 0;
		cout << "input age: " << endl;
		cin >> aage;
		abs->PersonArray[abs->m_size].age = aage;

		string aphone = "";
		cout << "input phone: " << endl;
		cin >> aphone;
		abs->PersonArray[abs->m_size].phone = aphone;

		abs->m_size++;
	}
	;
};

//2
void showContact(AddressBook* abs) {
	for (int i = 0; i <= abs->m_size; i++)
	{
		cout << abs->PersonArray[i].name << " " << abs->PersonArray[i].gender << " " << abs->PersonArray[i].age << " " << abs->PersonArray[i].phone << endl;
	}
	
};

//3
void delContact(AddressBook* abs) {
	string dname = "";
	cout << "name a person to del" << endl;
	cin >> dname;

	for (int i = 0; i <= abs->m_size; i++)
	{
		if (abs->PersonArray[i].name == dname) {
			abs->PersonArray[i] = abs->PersonArray[i + 1];

			int start = 0;
			start = i + 1;
			for (int k = start; k < abs->m_size; k++)
			{
				abs->PersonArray[k] = abs->PersonArray[k + 1];
			}
			abs->m_size--;
		}
	}
	

};

//4
void findContact(AddressBook* abs) {
	string dname = "";
	cout << "name a person to find" << endl;
	cin >> dname;


	for (int i = 0; i <= abs->m_size; i++)
	{
		if (abs->PersonArray[i].name == dname) {
			cout << abs->PersonArray[i].name << " " << abs->PersonArray[i].gender << " " << abs->PersonArray[i].age << " " << abs->PersonArray[i].phone << endl;
			break;
		}
	}
	

};

//5
void changeContact(AddressBook* abs) {
	string cname = "";
	cout << "name a person to change" << endl;
	cin >> cname;

	int cage = 0;
	cout << "name the age to change" << endl;
	cin >> cage;

	string cgender = "";
	cout << "name a gender to change" << endl;
	cin >> cgender;

	string cphone = "";
	cout << "name a phone to change" << endl;
	cin >> cphone;


	for (int i = 0; i <= abs->m_size; i++)
	{
		if (abs->PersonArray[i].name == cname) {
			abs->PersonArray[i].name = cname;
			abs->PersonArray[i].gender = cgender;
			abs->PersonArray[i].age = cage; 
			abs->PersonArray[i].phone = cphone;
			break;
		}
	}
};

//6
//void delAll(AddressBook* abs) {
	//abs->m_size = 0;
	//cout << "Contact cleaned" << endl; 
	//system("pause");
	//system("cls");
//};


int main() {

	AddressBook abs; //先创建结构体变量
	abs.m_size = 0;


	while (true) {
		showmenu();

		int select = 0;
		cout << "Please select 0-6" << endl;
		cin >> select;
		switch (select) {
		case 0:
			system("pause");
			return 0;
			break;
		case 1:
			addPerson(&abs);
			break;
		case 2:
			showContact(&abs);
			break;
		case 3:
			delContact(&abs);
			break;
		case 4:
			findContact(&abs);
			break;
		case 5:
			changeContact(&abs);
			break;
		//case 6:
			//delAll(&abs);
			//break;
		default:
			break;

		}
	}


	system("pause");
	system("cls");
	return 72;
}
