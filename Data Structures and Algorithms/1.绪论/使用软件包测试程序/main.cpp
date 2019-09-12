#include<iostream>
#include<ctime>

#define NUM 280

//typedef long clock_t;
using namespace std; 


static bool UserSayYes()
{
	char ch;
	bool initialResponse = true;

	do
	{
		if (initialResponse) cout << "(y,n)?";
		else cout << "用 y 或 n 回答:";
		while ((ch = cin.get() == ' ' || ch == '\t' || ch == '\n'));
		while (cin.get() != '\n');

		initialResponse = false;

	} while (ch != 'y'&& ch != 'Y'&&ch != 'n'&&ch != 'N');

	if (ch == 'y' || ch == 'Y') return true;
	else return false;
};


class Timer
{
private:
	clock_t startTime;

public:
	Timer(){ startTime = clock(); }
	~Timer(){};
	double ElapsedTime()
	{
		clock_t endTime = clock();
		return(double)(endTime - startTime) / CLK_TCK;

	}

	void Rest()
	{
		startTime = clock();
	}
};

class Rand
{
public:
	static void SetRandSeed() { srand((unsigned)time(NULL)); }
	static int GetRand(int n) { return rand() % (n); }
	static int GetRand() { return rand(); }
};

int main(void)
{
	try
	{
		if (NUM > 280) throw "NUM值太大了!";

		int a[NUM + 1][NUM + 1], b[NUM + 1][NUM + 1], c[NUM + 1][NUM + 1];
		bool isContinue = true;
		Timer objTimer;
    
		while (isContinue)
		{
			int i, j, k;
			Rand::SetRandSeed();
			objTimer.Rest();

			for (i = 1; i <= NUM;i++)
			{
				for (j = 1; j <= NUM;j++)
				{
					a[i][j] = Rand::GetRand();
					b[i][j] = Rand::GetRand();
				}


			}

			for (i = 1; i <= NUM; i++)
			{
				for (j = 1; j <= NUM; j++)
				{
					c[i][j] = 0;
					for (k = 1; k <= NUM; k++)
						c[i][j] = c[i][j] + a[i][k] * b[k][j];
				}


			}
			
			cout << "用时:" << objTimer.ElapsedTime() << "秒." << endl;
			cout << "是否继续";
			isContinue = UserSayYes();
		}
	}
	catch (char * mess)
	{
		cout << mess << endl;
	}



	system("pause");
	return 0;

}