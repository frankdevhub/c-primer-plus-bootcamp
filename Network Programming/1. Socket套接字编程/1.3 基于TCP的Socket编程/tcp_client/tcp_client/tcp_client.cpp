#include<iostream>
#include<stdio.h>
#include<windows.h>
#include<winsock2.h>

#define _WINSOCK_DEPRECATED_NO_WARNINGS
#pragma comment(lib,"WS2_32.lib") //显示连接套子库

int main()
{

	WSADATA data; //定义WSDATA结构体对象
	WORD w = MAKEWORD(2, 0); //定义版本号
	::WSAStartup(w, &data); //初始化套接字库
	SOCKET s; //定义连接套接字句柄
	char sztext[10] = { 0 };

	s = ::socket(AF_INET, SOCK_STREAM, 0); //初始化套接字
	sockaddr_in addr;  //定义套接字地址结构
	addr.sin_family = AF_INET; //初始化套接字地址结构
	addr.sin_port = htons(8972);
	addr.sin_addr.S_un.S_addr = inet_addr("127.0.0.1");

	printf_s("客户端已启动\r\n");

	::connect(s, (sockaddr*)&addr, sizeof(addr));
	::recv(s, sztext, sizeof(sztext), 0);
	printf_s("%\s\r\n", sztext);

	::closesocket(s); //关闭套接字句柄
	::WSACleanup(); //释放套接字句柄
	if (getchar()) //如果有输入，则关闭程序
	{
		return 0;
	}
	else
	{
		::Sleep(100);
	}
}