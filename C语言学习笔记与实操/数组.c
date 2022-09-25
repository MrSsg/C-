#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//数组：相同类型元素的集合

//一维数组
//一维数组的创建和初始化

//数组的创建

//type_t arr_name [const_n]
//type_t 元素类型
//arr_name 数组名称
//const_n 常量表达式，指定数组的大小


//int arr[]
//char arr[]
//double arr[]


//int count = 10；
//int arr2[count];//数组不能被创建，[]内只能是常量表达式

//数组的初始化：在创建数组的同时给数组的内容一些合理初始值
//int main()
//{
//	int arr[10] = { 1,2,3 };//不完全初始化，因为只指定了部分元素的值，此时其他值默认为0
//	char arr2[5] = { 'a','b','c' };
//	char arr3[5] = "abc";//这种写法与上一行代码初始化效果一样，但这种写法的第四个元素的0来自\0，而不是默认的0
//	
//	char arr4[] = "abcdef";
//	char arr5[] = { 'a','b','c','d','e','f' };
//
//	printf("%d\n", sizeof(arr4));
//	printf("%d\n", strlen(arr4));
//	
//	printf("%d\n", sizeof(arr5));
//	printf("%d\n", strlen(arr5));//这里输出结果为随机值，因为strlen计算的是\0前的字符长度，这里没有\0，所以返回一个随机值
//	
//	return 0;
//}

//sizeof 和 strlen 没有关联
//strlen是计算\0之前字符串的长度，只能针对字符串求长度 - 库函数 - 需引用头文件
//sizeof 计算变量、数值、类型的大小 - 单位 字节- 操作符

//数组的调用：利用下标

//void main()
//{
//	char arr[] = "abcdef";
//	int i = 0;
//	for (i = 0; i < strlen(arr); i++)
//	{
//		printf("%c  ", arr[i]);//[]下标引用符
//	}
//}


//数组在内存中的存储

//void main()
//{
//	char arr[] = "abcdef";
//	int i = 0;
//	int len = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < len; i++)
//	{
//		printf("arr[%d]=%p\n", i, &arr[i]);
//	}
//}
//由此代码输出结果可知，一维数组在内存中是连续存放的


//二维数组

//创建
//int arr[][]//两个[]表示行列
// int arr[3][4]//创建了一个三行四列的二维数组
//在创建二维数组时，行可以空，列不可以空

//初始化
//int arr[3][4] = {1,2,3,4,5};//多出的5会顺延到下一行

//void main()
//{
//
//	int arr[3][3] = { {1,2},{4,5},{7,8} };//在大括号内嵌套的大括号内的元素为一行，该行代码使得最后一列默认为0
//
//}

//调用：二维数组调用依然使用下标
//二维数组的行也是从0开始的

//void main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//
//	int m, n = 0;
//	for (m = 0; m < 3; m++)
//	{
//		for (n = 0; n < 3; n++)
//		{
//			printf("%d", arr[m][n]);
//		}
//		printf("\n");
//	}
//}

//二维数组在内存中的存储
//void main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//
//	int m, n = 0;
//	for (m = 0; m < 3; m++)
//	{
//		for (n = 0; n < 3; n++)
//		{
//			printf("arr[%d][%d] = %p\n",m,n, &arr[m][n]);
//		}
//	}
//}

//由上代码输出结果可知，二维数组在内存中也是连续存储的

//二维数组也可以视为一个个一维数组组成的
