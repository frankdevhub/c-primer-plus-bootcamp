#include<iostream>
#include<string>
using namespace std;

int main()
{
	struct Student
	{
		int num;
		string name;
		char sex;
		float score;
	};

	
	Student *p = new Student;
	p->num = 10301;
	p->name = "Wang Fang";
	p->sex = 'f';

	p->score = 89.5;
	
	cout << p->num << " " << p->name << " " << p->sex << " " << p->score << endl;


	cout << p << endl;

	delete p;


	system("pause");
	return 0;

}