#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//复杂对象 -- 结构体 --我们自己创造出来的一种类型

//描述一本书
//struct Book
//{
//	char name[20];//20定义书名字符长度
//	short price;
//};
//#include <string.h>
//int main()
//{
//	//利用结构体类型创建一个该类型的结构体变量
//	//"." 结构体变量.成员
//	//"->" 结构体指针->成员
//	struct Book b1 = { "C语言" ,55};//创建一本书，名为c语言,价格55。b1是结构体的变量名;
//	printf("书名：%s\n", b1.name);
//	printf("价格：%d元\n", b1.price);
//	//改价格
//	b1.price = 50;
//	printf("修改后价格：%d元\n", b1.price);
//	//利用地址打印出书的名字和价格
//  struct Book* pb = &b1;//b1的地址
//	printf("%s\n", (*pb).name );
//	printf("%d\n", (*pb).price);
//	//另一种写法
//	printf("%s\n", pb->name);
//	//改书名(不是本节内容) 因为书名是字符串不是变量，所以方法与改价格不一样
//	//strcpy是库函数，所以要引用头文件<string.h>
//	strcpy(b1.name, "C++");//逗号前是操作对象，逗号后是要改的字符串
//	printf("%s\n", b1.name);
//	return 0;
//}