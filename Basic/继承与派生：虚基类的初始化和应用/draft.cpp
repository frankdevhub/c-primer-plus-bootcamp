#include<iostream>
#include<string>

using namespace std;

class Person
{
public:
	Person(string nam, char s, int a)
	{
		name = nam; sex = s; age = a;
	}
protected:
	string name;
	char sex;
	int age;
};

class Teacher :virtual public Person
{
public:
	Teacher(string nam, char s, int a, string t) :Person(nam, s, a)
	{
		title = t;
	}
protected:
	string title;
};

class Student :virtual public Person
{
public:
	Student(string nam, char s, int a, float sco) :Person(nam, s, a), score(sco){}
		
protected:
	float score;
};

class Graduate :public Teacher, public Student
{
public:
	Graduate(string nam, char s, int a, string t, float sco, float w) :
		Person(nam, s, a), Teacher(nam, s, a, t), Student(nam, s, a, sco), wage(w){}

	void show()
	{
		cout << "name:" << name << endl;
		cout << "age:" << age << endl;
		cout << "sex:" << sex << endl;
		cout << "score:" << score << endl;
		cout << "title:" << title << endl;
		cout << "wages:" << wage << endl;
	}
protected:
	float wage;
};

int main()
{
	Graduate grad1("Wang_li",'f',24,"assistant",89.5,1200);
	grad1.show();

	system("pause");
}