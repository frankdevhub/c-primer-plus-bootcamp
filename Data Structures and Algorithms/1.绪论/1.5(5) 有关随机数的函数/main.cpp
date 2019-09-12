#include<iostream>
#include<stdio.h>
#include <time.h>
#include <cstdlib>

using namespace std;

class Rand
{
public:
	static void SetRandSeed(){ srand((unsigned)time(NULL)); }
	static int GetRand(int n){ return rand() % (n); }
	static int GetRand(){ return rand(); }

};


int main()
{
	Rand randon;
	for (int i = 0; i < 10; i++)
	{
		cout << randon.GetRand()<<endl;
	}
	system("pause");
	return 0;
}