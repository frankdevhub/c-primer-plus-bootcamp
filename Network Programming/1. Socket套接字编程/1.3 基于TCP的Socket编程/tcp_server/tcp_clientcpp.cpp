#include<iostream>
#include<stdio.h>
#include<windows.h>
#include<winsock2.h>
#pragma comment(lib,"WS2_32.lib") //显式函数连接套接字

int main()
{
	WSADATA data; //定义WSADATA 结构体对象
	WORD w = MAKEWORD(2, 0); //定义版本号
	char scztext[] = "server:welcome!\r\n";  //定义初始化发送到客户端的字符数组
	::WSAStartup(w, &data); //初始化套接字库
	SOCKET s, s1;//定义连接套接字和数据收发套接字句柄
	s = ::socket(AF_INET, SOCK_STREAM, 0);//创建TCP套接字
	sockaddr_in addr, addr2; //定义套接字地址结构
	int n = sizeof(addr2); //获取套接字地址结构大小
	addr.sin_family = AF_INET; //初始化套接字地址结构
	addr.sin_port = htons(8972);
	addr.sin_addr.S_un.S_addr = INADDR_ANY;

	::bind(s, (sockaddr*)&addr, sizeof(addr)); //绑定套接字
	::listen(s, 5); //监听套接字
	printf("服务器已启动\r\n");

	while (true)
	{
		s1 = ::accept(s, (sockaddr*)&addr2, &n); //接受连接请求
		if (s1 = NULL)
		{
			printf("%s客户端已连接上\r\n", inet_ntoa(addr2.sin_addr));
			::send(s1, scztext, sizeof(scztext), 0); //向客户端发送字符数组
		}
		::closesocket(s);
		::closesocket(s1);
		::WSACleanup(); //释放套接字库
		if (getchar()) //如果有输入，则关闭程序
		{
			return 0;
		}
		else
		{
			::Sleep(100);
		}
	}
}