#include<iostream>
#include<string>
using namespace std;

class Student
{
public:
	Student(int n,string nam,char s)
	{
		num = n;
		name = nam;
		sex = s;
	}

	~Student(){}

protected:
	int num;
	string name;
	char sex;
};


class Student1 :public Student
{
public:
	Student1(int n, string nam, char s, int a, string ad) :Student(n, nam, s), age(a), addr(ad)
	{
		age = a;
		addr = ad;
	}

	void show()
	{
		cout << "num:" << num << endl;
		cout << "name:" << name << endl;
		cout << "sex:" << sex << endl;
		cout << "age:" << age << endl;
		cout << "address:" << addr << endl;
	}
private:
	int age;
	string addr;
};



int main()
{
	Student1 stud1(10010,"Wang-li",'f',19,"115 Beijing Road,Shanghai");
	stud1.show();

	system("pause");
}