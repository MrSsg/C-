#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

//常量
//字面常量  const 修饰的常变量 #define定义的标识符常量 枚举常量
//int main()
//{
//	const int num = 4; //const ---常属性 此时num为常变量，本质仍为变量
//	printf("%d\n", num); //OK
//  int arr[num] = {0}
//  printf("%d\n",num); //ON
//	return 0;
//}

//int main()
//{
//#define MAX 10   //#define 定义的标识符常量 此时MAX就是10
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//	return 0;
//}

//#define 可以定义宏 （常量带参数）

//求两个数的较大值

//函数的实现
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
////宏的定义
//#define MAX(X,Y) (X>Y?X:Y)

//int main()
//{
//	//int a = MAX
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	//函数方式
//	max = Max(a, b);
//	printf("max= %d\n", max);
//	//宏的方式
//	max = MAX(a, b);
//	printf("max= %d\n", max);
//	return 0;
//}


////枚举常量 如：性别 星期 等有限的量
////枚举关键 -- enum
//
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	//enum sex s = FEMALE;
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	return 0;
//
//}
 

