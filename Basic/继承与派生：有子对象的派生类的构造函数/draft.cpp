#include<iostream>
#include<string>

using namespace std;

class Student
{
public:
	Student(int n, string nam)
	{
		num = n;
		name = nam;
	}

	void  display()
	{
		cout << "name:" << name << endl;
		cout << "num:" << num << endl;
	}
protected:
	int num;
	string name;


};

class  Student1 : public Student
{
public:
	Student1(int n, string num, int n1, string nam1, int a, string ad) :Student(n, num), monitor(n1,nam1)
	{
		age = a;
		addr = ad;
	}

	void show()
	{
		cout << "This student is:" << endl;
		display();
		cout << "age:" << age << endl;
		cout << "address:" << addr << endl << endl;
	}


	void show_monitor()
	{
		cout << endl;
		cout << "Class monitor is:" << endl;
		monitor.display();
	}

private:
	Student monitor;
	int age;
	string addr;
};


int main()
{
	Student1 stud1 = Student1(10010, "Wang_li", 10001, "Li_sun", 19, "115 Beijing Road");
	stud1.show();
	stud1.show_monitor();

	system("pause");
}