#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include "三子棋.h"

//分为三个部分，分别是三子棋的声明、定义、测试

//测试

void menu()
{
	printf("***********************************\n");
	printf("******  1、Play     0、Exit  ******\n");
	printf("***********************************\n");
}

//游戏的实现
void game()
{
	//创建数组__存放走出的棋盘信息
	char board[ROW][COL] = {0};//因为刚开始棋盘是空白的，所以我们希望数组内全是空格
	//初始化棋盘
	InitBoard(board, ROW, COL);
	//打印棋盘
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
			printf("输入错误，请重新输入！\n");
		}
		}
	} while (input);
}

int  main()
{
	test();
	return 0;
}