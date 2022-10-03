#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//数组作为函数参数

//void bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//假设本趟排序的数据已经符合要求(加入flag变量对代码运行效率优化)
//		//每趟冒泡排序
//		int j = 0;
//		for (j = 0; j <sz-1-i ; j++)//j：要比较的对数
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//本趟排序的数据没有符合要求
//			}
//		}
//		if (flag == 1)
//		{
//			break;//break不能用于if语句，但此处break是为了跳出for循环，是用于for循环的
//		}
//	}
//
//}
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	//确定元素个数
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	//将数组进行升序排列
//	//对数组进行传参时传递的是数组首元素的地址&arr[0]，因此不能在函数内计算元素个数
//	bubble_sort(arr,sz);//冒泡排序函数(相邻两个元素依次比较，不满足排序条件则调换元素位置，具体见资源文件)
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4 };
// printf("%p",arr);//首元素地址
// printf("%p",&arr[0]);//首元素地址
// printf("%p",&arr);//数组的地址（虽然值和首元素地址一样，但意义不一样）
//	printf("%d", *arr);
//	return 0;
//}
//通常，数组名是数组首元素的地址，但有两个例外
//1、sizeof(数组名)
//2、&（数组名），数组名代表整个数组，取出的是整个数组的地址
