#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include "������.h"

//��Ϊ�������֣��ֱ�������������������塢����

//����

void menu()
{
	printf("***********************************\n");
	printf("******  1��Play     0��Exit  ******\n");
	printf("***********************************\n");
}

//��Ϸ��ʵ��
void game()
{
	//��������__����߳���������Ϣ
	char board[ROW][COL] = {0};//��Ϊ�տ�ʼ�����ǿհ׵ģ���������ϣ��������ȫ�ǿո�
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);
}

void test()
{
	int input = 0;
	do
	{
		
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			{
			game();
				break;
			}
		case 0:
			break;
		default :
		{
			printf("����������������룡\n");
		}
		}
	} while (input);
}

int  main()
{
	test();
	return 0;
}