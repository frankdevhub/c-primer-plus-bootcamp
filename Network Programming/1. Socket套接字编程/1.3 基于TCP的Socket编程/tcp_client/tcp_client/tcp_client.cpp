#include<iostream>
#include<stdio.h>
#include<windows.h>
#include<winsock2.h>

#define _WINSOCK_DEPRECATED_NO_WARNINGS
#pragma comment(lib,"WS2_32.lib") //��ʾ�������ӿ�

int main()
{

	WSADATA data; //����WSDATA�ṹ�����
	WORD w = MAKEWORD(2, 0); //����汾��
	::WSAStartup(w, &data); //��ʼ���׽��ֿ�
	SOCKET s; //���������׽��־��
	char sztext[10] = { 0 };

	s = ::socket(AF_INET, SOCK_STREAM, 0); //��ʼ���׽���
	sockaddr_in addr;  //�����׽��ֵ�ַ�ṹ
	addr.sin_family = AF_INET; //��ʼ���׽��ֵ�ַ�ṹ
	addr.sin_port = htons(8972);
	addr.sin_addr.S_un.S_addr = inet_addr("127.0.0.1");

	printf_s("�ͻ���������\r\n");

	::connect(s, (sockaddr*)&addr, sizeof(addr));
	::recv(s, sztext, sizeof(sztext), 0);
	printf_s("%\s\r\n", sztext);

	::closesocket(s); //�ر��׽��־��
	::WSACleanup(); //�ͷ��׽��־��
	if (getchar()) //��������룬��رճ���
	{
		return 0;
	}
	else
	{
		::Sleep(100);
	}
}