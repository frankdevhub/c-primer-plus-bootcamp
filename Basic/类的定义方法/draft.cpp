#include<iostream>
using namespace std;


class Student
{
private:
	int num;
	char name[20];
	char sex;
public:
	void Student::display()
	{
		cout << "num:" << num << endl;
		cout << "name:" << name << endl;
		cout << "sex:" << sex << endl;

	}

	Student(int num, char names[], char sex) :num(num), sex(sex){
		strcpy_s(name, names);
	}
};

Student stu1(1001,"Frank Fang",'m');


int main()
{
	stu1.display();

	system("pause");
	return 0;
}