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

	Student stu;
	Student *p = &stu;
	stu.num = 10301;
	stu.name = "Wang Fang";
	stu.sex = 'f';

	stu.score = 89.5;
	cout << stu.num << " " << stu.name << " " << stu.sex << " " << stu.score << endl;
	cout << (*p).num << " " << (*p).name << " " << (*p).sex << " " << (*p).score << endl;

	system("pause");
	return 0;

}