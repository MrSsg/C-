#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//1.дһ������(������ʱ����)�������ַ�������

//����1
//int my_strlen(char* str)
//{
//	int count = 0;
//while(*str != '\0')
//{
//	count++;
//	str++;
//}
//return count;
//}

//����2
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str+1);
//	}
//	else
//		return 0;
//}

//int main()
//{
//	char arr[] = "bit"; 
//
//	//ģ��ʵ��strlen����
//	int len = my_strlen(arr);
//
//	printf("len=%d\n", len);
//	return 0;
//}

//�ݹ������

//2.��n�Ľ׳�
//int Fac1(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n;i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//
//int Fac2(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac2(n - 1);
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac2(n);//ѭ���ķ�ʽ
//	printf("%d\n", ret);
//	
//	return 0;
//}