#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//函数：库函数（C语言提供的）、自定义函数（用户定义的）

//库函数查阅 cplusplus.com 

//自定义函数
//ret_type fun_name(paral, *)        int Add(int a, int b)
//{                                  {
//		statement;                        int z = a + b;
//	}                                     return z;
//ret_type 返回类型                    }
//fun_name 函数名
//paral 函数参数

//定义函数
//int get_max(x, y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);//函数的使用
//	printf("max = %d", max);
//	return 0;
//}

//实例：交换两个数

//函数1 x,y 与 a,b 没有关系了所以虽然交换了x,y的值但a,b的值没有变

//void Swap1(int x, int y)//void -- 函数没有返回值
//{
//   int p = x;
//	x = y;
//	y = p;
//}
//
////函数2 利用指针使两组数据建立关联
//
//void Swap2(int* px , int* py)
//{
//	int pp = 0;
//	pp = *px;
//	*px = *py;
//	*py = pp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	
//	printf("a=%d b=%d\n", a, b);
//	//直接交换
//    //int tmp = 0;
//	//tmp = a;
//    //a = b;
//	//b = tmp;
//	//printf("a=%d b=%d\n", a, b);
// //函数
//	Swap1(a, b);
//	printf("a=%d b=%d\n", a, b);
//	Swap2(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//}

//实参:真实传递给函数的参数。可以是：常量、变量、表达式、函数等。
// 无论实参是何种类型的量，在进行函数调用时，他们必须有确定的值，以便把这些值传递给形参

//形参：指函数名后括号中的变量，因为形式参数只有在函数被调用过程中才会实例化（分配内存单元），所以叫形式参数。
//形参在函数调用完后就被自动销毁了。因此形参只在函数中有效。

//上面Swap1和Swap2函数中的参数x, y, px, py都是形式参数。在main函数中传给Swap1的a,b和传给Swap2函数的&a, &b是实际参数。

//上面Swap1中 形参是实参的一份临时拷贝，函数只交换了形参的值没有交换实参的值

//函数的调用：
//1、传值调用:函数形参和实参分别占有不同的内存块，对形参的修改不会影响实参；例如Swap1
//2、传址调用：把函数外部创建变量的内存地址传递给函数参数的一种调用函数的方式
//这种传参方式可以让函数和函数外边的变量建立起真正的联系，也就是函数内部可以直接操作函数外部的变量


//利用自定义函数实现找到100-200的素数

//素数返回1，不是返回0
//int is_prime1(int n)
//{
//	int a = 0;
//	for (a = 2; a < n; a++)
//	{
//		if(n%a ==  0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
////开平方法
#include<math.h>
//int is_prime2(int m)
//{
//	int a = 0;
//	for (a = 2; a <= sqrt(m); a++)
//	{
//		if (m % a == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	int x = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime2(i) == 1)
//		{
//			x++;
//			printf("%d、%d\n",x, i);
//		}
//	}
//	return 0;
//}

//利用自定义函数找出1000-2000年中的闰年
//int is_leap_year(int x)
//{
//	if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int i = 0;
//	for(i=1000;i<=2000;i++)
//	{
//		if (is_leap_year(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//利用自定义函数实现二分法查找 -- 重点
//int binary_search(int arr[], int k,int sz )//传递过来的是arr首元素的地址 所以arr[]是一个指针。解决方法：在主函数计算数组元素个数
//{
//	int left = 0;//左下标
//	
//	int right = sz - 1;//右下标
//	while (left <= right)
//	{
//		int mid = (left + right)/2;//中间标
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
//			return mid;
//		}
//	}
//	if (left > right)
//	{
//		return -1;
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//查找目标
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("找不到指定数字\n");
//	}
//	else
//	{
//		printf("找到了，下标为%d\n", ret);
//	}
//}


//每调用一次num值加一
//void add(int* p)
//{
//	(*p)++;//++的优先级很高，如果不加括号则为p++然后*
//}
//int main()
//{
//	int num = 0;
//	add(&num);
//	printf("%d\n", num);
//	add(&num);
//	printf("%d\n", num);
//	add(&num);
//	printf("%d\n", num);
//	return 0;
//}

//链式访问：把一个函数的返回值作为另一个函数的参数

//int main()
//{
//	int len = 0;
//	len = strlen("abc");
//	printf("%d\n", len);
//	printf("%d\n", strlen("abc"));//链式
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d",43)));//printf返回值是打印字符的个数
//	return 0;
//}

//函数的声明和定义

////函数的声明
//int Add(int x, int y);
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	//函数的调用
//	sum = Add(a, b);
//	printf("%d", sum);
//	return 0;
//}
////函数的定义
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}//实际中不能这么用

//实际使用中，函数的声明和函数的定义分别应放在新建的头文件和源码文件里

//例：Add函数声明在“Add.h”,定义在“Add.c”
//#include "Add.h"//自定义函数引用
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	//函数的调用
//	sum = Add(a, b);
//	printf("sum=%d", sum);
//	return 0;
//}
