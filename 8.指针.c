#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>

//内存
//int  main()
//{
//	int a = 10;//4个字节
//	int* p = &a;//取地址 //int* 指针类型
//	//有一种变量是用来存放地址的 - 指针变量
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	*p = 20;// * 解引用操作符 //找到p存放的地址指向的对象，并赋值20
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	char ch = 'a';
//	char* pc = &ch;
//	printf("%c\n", ch);
//	printf("%p\n", pc);
//	printf("%d\n", sizeof(pc));//32位平台指针大小 4个字节 64位平台8个字节
//	*pc = 'b';
//	printf("%c\n", ch);
//	return 0;
//}