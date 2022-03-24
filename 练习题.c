#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//计算n的阶乘
//int main()
//{
//	int i = 1;
//	int x = 1;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		x = x * i;
//	}
//	printf("%d\n", x);
// return 0;
//}}

//计算1-10的阶乘的和
//int main()
//{
//	int i = 0;
//	int x = 1;
//	int n = 0;
//	int m = 0;
//	for(n=1;n<=10;n++)
//	{
//		for (i = 1,x=1; i <= n; i++)
//		{
//			x = x * i;
//		}
//		m = m + x;
//	}
//	printf("%d", m);
//}

//优化后
//int main()
//{
//	int x = 1;
//	int n = 0;
//	int m = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		x = x * n;
//		m = m + x;
//	}
//	printf("%d", m);
//}

//在arr有序数组中找到7
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (7 == arr[i])
//		{
//			printf("找到了，下标为%d", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("找不到");
//	return 0;
//}

//二分查找法
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;//左下标
//	int right = sz - 1;//右下标
//	
//
//	while (left <= right)
//	{
//		int mid = (right + left) / 2;
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
//			printf("找到了下标是%d", mid);
//	        break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到");
//	}
//	return 0;
//}

//编写代码，实现多字符从两端移动，向中间汇聚。

#include <string.h>

#include <windows.h>

#include <stdlib.h>

//int main()
//{
//	char arr1[] = "welcome to here!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	//int right = sizeof(arr1)/sizeof(arr1[0])-2;(-2是因为要考虑字符串里的\0)
//	int right = strlen(arr1)-1;//strlen到\0就会停止计算所以-1即可，具体看字符串部分
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//休息一秒
//		Sleep(1000);
//		system("cls");//执行系统命令的一个函数 -- cls --清空屏幕。
//		left++;
//		right--;
//	} ·	
//	printf("%s\n", arr2);
//	return 0;
//}

//输入密码，三次机会
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码\n");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)// ==不能判断两个字符串是否相等,所以引用库函数strcmp
//		{
//			printf("登录成功！\n");
//				break;
//		}
//	}
//	if (i == 3)
//		printf("错误次数过多，请稍后再试\n");
//		return 0;
//}

//计算1- 1/2 + 1/3 - 1/4 + ... -1/100 
// #include <math.h>
//int main()
//{
//	int a = 0;//方
//	int b = 0;//分母
//	double c = 0;//结果
//	double y = 0;
//	for (a = 2,b=1; b <= 100;a++,b++)
//	{
//		y = (1.0 / b) * pow(-1, a);//pow(a,b) -- 库函数表示a的b次方，两个数必须为浮点数。前面表达 几分之几也必须是浮点数
//	    c = c + y;
//	}
//	printf("%lf", c);
//	return 0;
//}

//找出数组中最大数
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];// int max = 0; 如果定义max=0 当数组全部元素小于0时，代码结果出现错误
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d", max);
//	return 0;
//} 

//打印乘法口诀表
//int main()
//{
//	int i = 0;//行
//	int j = 0;//列
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; i >= j; j++)
//		{
//			printf("%d*%d=%-2d  ", j, i, i*j);//%2d -- 当打印数据为一位时补齐一个空格使其右对齐，-2为左对齐
//		}
//		printf("\n\n");
//	}
//	return 0;
//}

//猜数字游戏
//1、电脑随机生成一个数字
//2、猜数字
//3、可以循环玩

//void menu()
//{
//	printf("##########################\n");
//	printf("###                    ###\n");
//	printf("###  1. paly   0.exit  ###\n");
//	printf("###                    ###\n");
//	printf("##########################\n");
//}
////RAND_MAX -- 32767
//#include <time.h>
//void game()
//{
//	//1.生成随机数字                                                    
//	int rad = 0;
//    rad = rand()%100+1;//生成1-100之间随机数 rand最大值是32767当它取模（%）100的时候为67，这样就会随机生成0—99的数字，再+1就是1—100
//	//rand()%30+1985__生成1985-2014之间的随机数
//	//2.猜数字
//	int guess = 0;
//	while (1)
//	{
//		printf("请猜数字\n");
//		scanf_s("%d", &guess);
//		if (guess > rad)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < rad)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你猜对了，结果是%d\n", rad);
//			break;
//		}
//	}
//}
//
//int main()
//{
//	//用时间戳生成随机数的随机起点
//	//时间戳 -- 当前计算机时间减去计算机起始时间（1970-01-01 00：00：00）= （xxxxx）秒
//	srand((unsigned int)time(NULL));//随机起点只需要设置一次即可，所以放在主函数这里
//	//(unsigned int)---将time函数强制类型转换，因为srand 要求数据为unsigned int 类型
//	//time函数返回值是time_t类型(实质是长整型) 需要的参数的类型是time_t*  time_t  time(time_t*timer)
//	//此处time函数不需要参数，所以直接给一个空指针 NULL
//	int input = 0;
//	do 
//	{
//		menu();
//		printf("请选择\n");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//猜数字游戏
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}