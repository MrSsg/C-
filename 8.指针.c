#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>

//�ڴ�
//int  main()
//{
//	int a = 10;//4���ֽ�
//	int* p = &a;//ȡ��ַ //int* ָ������
//	//��һ�ֱ�����������ŵ�ַ�� - ָ�����
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	*p = 20;// * �����ò����� //�ҵ�p��ŵĵ�ַָ��Ķ��󣬲���ֵ20
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	char ch = 'a';
//	char* pc = &ch;
//	printf("%c\n", ch);
//	printf("%p\n", pc);
//	printf("%d\n", sizeof(pc));//32λƽָ̨���С 4���ֽ� 64λƽ̨8���ֽ�
//	*pc = 'b';
//	printf("%c\n", ch);
//	return 0;
//}