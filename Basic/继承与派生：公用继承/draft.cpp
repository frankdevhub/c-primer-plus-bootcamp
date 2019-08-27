#include<iostream>
#include<string>
using namespace std;

class Student
{
public:
	void get_value()
	{
		cin >> num >> name >> sex;
	}

	void display()
	{
		cout << " num: " << num << endl;
		cout << " name: " << name << endl;
		cout << " sex: " << sex << endl;
	}
private:
	int num;
	string name;
	char sex;
};


class Student1:Student
{
public:
	void get_value_1()
	{
		cin >> age >> addr;
	}

	void display_1()
	{
		cout << " age: " << age << endl;
		cout << " address: " << addr << endl;
	}

private:
	int age;
	string addr;
};


int main()
{}