#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//函数递归
//程序调用自身的编程技巧称为递归 
// 递归的主要思考方式在于：把大事化小

//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}//栈溢出（stack overflow）;递归常见错误

//内存被分为：栈区、堆区、静态区
//栈区：局部变量、函数形参
//堆区：动态开辟的内存 malloc  calloc
//静态区：全局变量、static修饰的变量

//练习

//接收一个整型值，按照顺序打印它的每一位
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n/10);
//	}
//	printf("%d\n", n % 10);
//
//}

//int main()
//{
//	unsigned int num = 0;
//	scanf_s("%d", &num); //1234
//	//递归
//	print(num);
//	return 0;
//}

//递归的两个必要条件：
//1.存在限制条件，当满足这个限制条件的时候，递归便不再继续
//2.每次递归调用之后越来越接近这个限制条件