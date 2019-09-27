#include<iostream>
#include<winsock2.h>
using namespace std;

struct in_addr
{
	union
	{
		struct
		{
			unsigned char s_b1, s_b2, s_b3, s_b4;
		} S_un_b;
		struct
		{
			unsigned short s_w1, s_w2;
		} S_un_w;
		unsigned long S_addr;
	} S_un;
	
};

struct scokaddr_in
{
	short			sin_family;
	unsigned short  sin_port;
	struct in_addr  sin_addr;
	char			sin_zero[8];

};


int main()
{
	scokaddr_in addr;
	addr.sin_addr.S_un.S_addr = inet_addr("218.6.132.5");
}