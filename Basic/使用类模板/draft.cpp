#include<iostream>
using namespace std;

template<class numtype>
class Compare
{
public:
	Compare(numtype a, numtype b)
	{
		x = a; y = b;
	}
	numtype max()
	{
		return (x > y) ? x : y;
	}
	numtype min()
	{
		return (x < y) ? x : y;
	}
private:
	numtype x, y;
};

int main()
{
	Compare<int> cmpl1(3, 7);
	cout << cmpl1.max() << " is the Maximum of two ineger numbers" << endl;
	cout << cmpl1.min() << " is the Minimun of two ineger numbers" << endl<<endl;
	Compare<float> cmpl2(45.78, 93.6);
	cout << cmpl2.max() << " is the Maximum of two float numbers" << endl;
	cout << cmpl2.min() << " is the Minimun of two float numbers" << endl<<endl;
	Compare<char> cmpl3('a', 'A');
	cout << cmpl3.max() << " is the Maximum of two characters" << endl;
	cout << cmpl3.min() << " is the Minimun of two characters" << endl << endl;

	system("pause");
	return 0;
}