#include<winsock2.h> //����ͷ�ļ�
#include<windows.h> 
#include<stdio.h>   
#pragma comment (lib,"WS2_32.lib") //�����׽��ֿ� 

int main()
{
	WSADATA data; //����ṹ�����
	WORD w = MAKEWORD(2, 0); //�����׽��ְ汾
	char sztext[] = "��ӭ��\r\n";  //���延ӭ��Ϣ
	::WSAStartup(w, &data); //��ʼ���׽��ֿ�
	SOCKET s; //�����׽��־��
	s = ::socket(AF_INET, SOCK_DGRAM, 0); //����UDP�׽���
	sockaddr_in addr, addr2; //�����׽��ֵ�ַ�ṹ����
	int n = sizeof(addr2); //��ַ�ṹ������С
	char buff[10] = { 0 }; //�������ݻ����
	addr.sin_family = AF_INET;
	addr.sin_port = htons(8972);
	addr.sin_addr.S_un.S_addr = INADDR_ANY;
	::bind(s, (sockaddr*)&addr, sizeof(addr)); //���׽���
	printf("UDP�������Ѿ�����\r\n"); //��ʾ��ʾ��Ϣ
	while (1)
	{
		//���ܿͻ�����Ϣ
		if (::recvfrom(s, buff, 10, 0, (sockaddr*)&addr2, &n) != 0)
		{
			printf("%s�Ѿ�������\r\n", inet_ntoa(addr2.sin_addr));
			printf("%s\r\n", buff);
			//�������ݵ��ͻ���
			::sendto(s, sztext, sizeof(sztext), 0, (sockaddr*)&addr2, n);
			break;
		}
	}
	::closesocket(s); //�ر��׽������Ӷ���
	::WSACleanup(); //�ͷ��׽���
	if (getchar())
	{
		return 0;  //������������
	}
	else
	{
		::Sleep(100);  //Ӧ�ó���������0.1��
	}

}