#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//����n�Ľ׳�
//int main()
//{
//	int i = 1;
//	int x = 1;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		x = x * i;
//	}
//	printf("%d\n", x);
// return 0;
//}}

//����1-10�Ľ׳˵ĺ�
//int main()
//{
//	int i = 0;
//	int x = 1;
//	int n = 0;
//	int m = 0;
//	for(n=1;n<=10;n++)
//	{
//		for (i = 1,x=1; i <= n; i++)
//		{
//			x = x * i;
//		}
//		m = m + x;
//	}
//	printf("%d", m);
//}

//�Ż���
//int main()
//{
//	int x = 1;
//	int n = 0;
//	int m = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		x = x * n;
//		m = m + x;
//	}
//	printf("%d", m);
//}

//��arr�����������ҵ�7
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (7 == arr[i])
//		{
//			printf("�ҵ��ˣ��±�Ϊ%d", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("�Ҳ���");
//	return 0;
//}

//���ֲ��ҷ�
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;//���±�
//	int right = sz - 1;//���±�
//	
//
//	while (left <= right)
//	{
//		int mid = (right + left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ����±���%d", mid);
//	        break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���");
//	}
//	return 0;
//}

//��д���룬ʵ�ֶ��ַ��������ƶ������м��ۡ�

#include <string.h>

#include <windows.h>

#include <stdlib.h>

//int main()
//{
//	char arr1[] = "welcome to here!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	//int right = sizeof(arr1)/sizeof(arr1[0])-2;(-2����ΪҪ�����ַ������\0)
//	int right = strlen(arr1)-1;//strlen��\0�ͻ�ֹͣ��������-1���ɣ����忴�ַ�������
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//��Ϣһ��
//		Sleep(1000);
//		system("cls");//ִ��ϵͳ�����һ������ -- cls --�����Ļ��
//		left++;
//		right--;
//	} ��	
//	printf("%s\n", arr2);
//	return 0;
//}

//�������룬���λ���
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������\n");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)// ==�����ж������ַ����Ƿ����,�������ÿ⺯��strcmp
//		{
//			printf("��¼�ɹ���\n");
//				break;
//		}
//	}
//	if (i == 3)
//		printf("����������࣬���Ժ�����\n");
//		return 0;
//}

//����1- 1/2 + 1/3 - 1/4 + ... -1/100 
// #include <math.h>
//int main()
//{
//	int a = 0;//��
//	int b = 0;//��ĸ
//	double c = 0;//���
//	double y = 0;
//	for (a = 2,b=1; b <= 100;a++,b++)
//	{
//		y = (1.0 / b) * pow(-1, a);//pow(a,b) -- �⺯����ʾa��b�η�������������Ϊ��������ǰ���� ����֮��Ҳ�����Ǹ�����
//	    c = c + y;
//	}
//	printf("%lf", c);
//	return 0;
//}

//�ҳ������������
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];// int max = 0; �������max=0 ������ȫ��Ԫ��С��0ʱ�����������ִ���
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d", max);
//	return 0;
//} 

//��ӡ�˷��ھ���
//int main()
//{
//	int i = 0;//��
//	int j = 0;//��
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; i >= j; j++)
//		{
//			printf("%d*%d=%-2d  ", j, i, i*j);//%2d -- ����ӡ����Ϊһλʱ����һ���ո�ʹ���Ҷ��룬-2Ϊ�����
//		}
//		printf("\n\n");
//	}
//	return 0;
//}

//��������Ϸ
//1�������������һ������
//2��������
//3������ѭ����

//void menu()
//{
//	printf("##########################\n");
//	printf("###                    ###\n");
//	printf("###  1. paly   0.exit  ###\n");
//	printf("###                    ###\n");
//	printf("##########################\n");
//}
////RAND_MAX -- 32767
//#include <time.h>
//void game()
//{
//	//1.�����������                                                    
//	int rad = 0;
//    rad = rand()%100+1;//����1-100֮������� rand���ֵ��32767����ȡģ��%��100��ʱ��Ϊ67�������ͻ��������0��99�����֣���+1����1��100
//	//rand()%30+1985__����1985-2014֮��������
//	//2.������
//	int guess = 0;
//	while (1)
//	{
//		printf("�������\n");
//		scanf_s("%d", &guess);
//		if (guess > rad)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < rad)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ��¶��ˣ������%d\n", rad);
//			break;
//		}
//	}
//}
//
//int main()
//{
//	//��ʱ��������������������
//	//ʱ��� -- ��ǰ�����ʱ���ȥ�������ʼʱ�䣨1970-01-01 00��00��00��= ��xxxxx����
//	srand((unsigned int)time(NULL));//������ֻ��Ҫ����һ�μ��ɣ����Է�������������
//	//(unsigned int)---��time����ǿ������ת������Ϊsrand Ҫ������Ϊunsigned int ����
//	//time��������ֵ��time_t����(ʵ���ǳ�����) ��Ҫ�Ĳ�����������time_t*  time_t  time(time_t*timer)
//	//�˴�time��������Ҫ����������ֱ�Ӹ�һ����ָ�� NULL
//	int input = 0;
//	do 
//	{
//		menu();
//		printf("��ѡ��\n");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//��������Ϸ
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}