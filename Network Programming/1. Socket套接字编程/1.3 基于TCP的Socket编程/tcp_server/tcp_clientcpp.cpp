#include<iostream>
#include<stdio.h>
#include<windows.h>
#include<winsock2.h>
#pragma comment(lib,"WS2_32.lib") //��ʽ���������׽���

int main()
{
	WSADATA data; //����WSADATA �ṹ�����
	WORD w = MAKEWORD(2, 0); //����汾��
	char scztext[] = "server:welcome!\r\n";  //�����ʼ�����͵��ͻ��˵��ַ�����
	::WSAStartup(w, &data); //��ʼ���׽��ֿ�
	SOCKET s, s1;//���������׽��ֺ������շ��׽��־��
	s = ::socket(AF_INET, SOCK_STREAM, 0);//����TCP�׽���
	sockaddr_in addr, addr2; //�����׽��ֵ�ַ�ṹ
	int n = sizeof(addr2); //��ȡ�׽��ֵ�ַ�ṹ��С
	addr.sin_family = AF_INET; //��ʼ���׽��ֵ�ַ�ṹ
	addr.sin_port = htons(8972);
	addr.sin_addr.S_un.S_addr = INADDR_ANY;

	::bind(s, (sockaddr*)&addr, sizeof(addr)); //���׽���
	::listen(s, 5); //�����׽���
	printf("������������\r\n");

	while (true)
	{
		s1 = ::accept(s, (sockaddr*)&addr2, &n); //������������
		if (s1 = NULL)
		{
			printf("%s�ͻ�����������\r\n", inet_ntoa(addr2.sin_addr));
			::send(s1, scztext, sizeof(scztext), 0); //��ͻ��˷����ַ�����
		}
		::closesocket(s);
		::closesocket(s1);
		::WSACleanup(); //�ͷ��׽��ֿ�
		if (getchar()) //��������룬��رճ���
		{
			return 0;
		}
		else
		{
			::Sleep(100);
		}
	}
}