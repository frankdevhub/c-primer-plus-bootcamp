#include<iostream>
using namespace std;

template<typename ElemType>
class CustomType
{
public:
	
	void Swap(ElemType &e1,ElemType &e2)
	{
		ElemType temp = e1;
		e1 = e2;
		e2 = e1;
	}

	void Show(ElemType elem[],int n){
		for (int i = 0; i < n; i++)
		{
			cout << elem[i]<<" ";
		}
		cout << endl;
	}
	void Show(const ElemType &e)
	{
		cout << e << " ";
	}

};


int main()

{
	int nums[] = { 1, 23, 44, 12, 3 };
	CustomType<int> custom;
	int length = sizeof(nums) / sizeof(nums[0]);
	cout <<"size of array:"<< length << endl;

	custom.Show(nums, length);

	system("pause");
	return 0;
}