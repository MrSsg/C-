#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//C语言的三种结构
//1、顺序结构 2、选择结构 3、循环结构

//选择结构：分支语句 循环结构：循环语句
//重点：分支语句 - if、switch  循环语句 -  while、for、do while  goto语句
//语句：C语言中由一个分号隔开的就是一条语句。如： printf("haha"); 1+2;单独一个分号被称为空语句

//if 语句
// 
// 
//语法结构

// 1
//if(表达式)
//   语句；
//若表达式为真则执行语句否则不执行

//2
//if（表达式）
//    语句1；
//else
//    语句2；
//若表达式为真则执行1，否则执行2

//多分支
//if（表达式1）
//    语句1；
//else if(表达式2)
//    语句2；
//else
//    语句3；
//表达式1真则执行语句1否则判断表达式2，表达式2为真则执行语句2，否则执行语句3

//int main()
//{
//	int age = 10;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("未成年\n");
//	else
//		printf("成年\n");
//	return 0;
//}

//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 16)
//		printf("未成年\n");
//	else if (age >= 16 && age < 18)// &&逻辑与
////错误写法 （16<=age<18 ）
//        printf("青年\n");
//	else if (age >= 18 && age < 50)
//		printf("壮年\n");
//	else
//		printf("老年\n");
//	return 0;
//}

//也可以将所有else合并放在一个大括号内:
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 16)
//		printf("未成年\n");//如果此处需要同时执行多个语句需要用大括号括起来
//	else
//	{
//		if (age >= 16 && age < 18)
//			printf("青年\n");
//		else if (age >= 18 && age < 50)
//			printf("壮年\n");
//		else
//			printf("老年\n");
//	}
//	return 0;
//
//}

//悬浮else
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//	}
//	else
//			printf("haha\n");
////	else
////		printf("heihei\n");
//	return 0;
//}
//结论：else只会与离他最近的未匹配的if配对,如果想让else与第一个if匹配，需要给第二个if加大括号

//当判断一个变量和一个常量是否相等时，最好把常量放在左边，防止代码写错而程序不报错


//判断一个数是否是奇数
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	if (x%2 != 0)//取模
//		printf("此数为奇数");
//	else
//		printf("此数为偶数");
//	return 0;
//}