#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//���Ӷ��� -- �ṹ�� --�����Լ����������һ������

//����һ����
//struct Book
//{
//	char name[20];//20���������ַ�����
//	short price;
//};
//#include <string.h>
//int main()
//{
//	//���ýṹ�����ʹ���һ�������͵Ľṹ�����
//	//"." �ṹ�����.��Ա
//	//"->" �ṹ��ָ��->��Ա
//	struct Book b1 = { "C����" ,55};//����һ���飬��Ϊc����,�۸�55��b1�ǽṹ��ı�����;
//	printf("������%s\n", b1.name);
//	printf("�۸�%dԪ\n", b1.price);
//	//�ļ۸�
//	b1.price = 50;
//	printf("�޸ĺ�۸�%dԪ\n", b1.price);
//	//���õ�ַ��ӡ��������ֺͼ۸�
//  struct Book* pb = &b1;//b1�ĵ�ַ
//	printf("%s\n", (*pb).name );
//	printf("%d\n", (*pb).price);
//	//��һ��д��
//	printf("%s\n", pb->name);
//	//������(���Ǳ�������) ��Ϊ�������ַ������Ǳ��������Է�����ļ۸�һ��
//	//strcpy�ǿ⺯��������Ҫ����ͷ�ļ�<string.h>
//	strcpy(b1.name, "C++");//����ǰ�ǲ������󣬶��ź���Ҫ�ĵ��ַ���
//	printf("%s\n", b1.name);
//	return 0;
//}