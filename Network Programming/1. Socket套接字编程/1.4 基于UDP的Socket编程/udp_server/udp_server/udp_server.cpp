#include<winsock2.h> //包含头文件
#include<windows.h> 
#include<stdio.h>   
#pragma comment (lib,"WS2_32.lib") //连接套接字库 

int main()
{
	WSADATA data; //定义结构体变量
	WORD w = MAKEWORD(2, 0); //定义套接字版本
	char sztext[] = "欢迎您\r\n";  //定义欢迎信息
	::WSAStartup(w, &data); //初始化套接字库
	SOCKET s; //定义套接字句柄
	s = ::socket(AF_INET, SOCK_DGRAM, 0); //创建UDP套接字
	sockaddr_in addr, addr2; //创建套接字地址结构变量
	int n = sizeof(addr2); //地址结构变量大小
	char buff[10] = { 0 }; //接受数据缓冲池
	addr.sin_family = AF_INET;
	addr.sin_port = htons(8972);
	addr.sin_addr.S_un.S_addr = INADDR_ANY;
	::bind(s, (sockaddr*)&addr, sizeof(addr)); //绑定套接字
	printf("UDP服务器已经启动\r\n"); //显示提示信息
	while (1)
	{
		//接受客户端信息
		if (::recvfrom(s, buff, 10, 0, (sockaddr*)&addr2, &n) != 0)
		{
			printf("%s已经连接上\r\n", inet_ntoa(addr2.sin_addr));
			printf("%s\r\n", buff);
			//发送数据到客户端
			::sendto(s, sztext, sizeof(sztext), 0, (sockaddr*)&addr2, n);
			break;
		}
	}
	::closesocket(s); //关闭套接字连接对象
	::WSACleanup(); //释放套接字
	if (getchar())
	{
		return 0;  //正常结束程序
	}
	else
	{
		::Sleep(100);  //应用程序休眠休0.1秒
	}

}