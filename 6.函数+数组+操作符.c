#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//int Add(int x, int y) //自定义名为Add的函数
//{
//	int z = x + y;
//	return z;
//}

//int main()
//{
//	int sum = 0;
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	sum = Add(a,b);
//	printf("%d\n", sum);
//	return 0;
//}

//比较任意两个整数大小的两种方法：

//1

//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf_s("%d%d", &x, &y);
//	if (x > y)
//		printf("%d大于%d\n", x,y);
//	else
//		printf("%d大于%d\n", y,x);
//	return 0;
//}

//2 利用自定义函数实现

//int MAX(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf_s("%d%d", &num1, &num2);
//	printf("较大值是%d\n", MAX(num1, num2));
//	return 0;
//}

//数组 -- 一组相同元素的集合

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 }; //定义一个可以存放10个整数的数组 名称为arr。[]内为数组的大小，{}内为数组的内容。
//	           下标 0,1 2 3 4 5 6 7 8 9
//	//printf("%d\n", arr[4]);//打印下标为4的元素-->5

//数组必须在大括号内，字符串必须有引号

//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	return 0; //通过while循环打印数组内所有元素
//}

//{
//char password[20] = { 0 };
//scanf("%s",password)//不需要取地址符，因为数组的名称就是数组的首地址
//}

//算数操作符
// % -- 取模（余数）
//!= --不相等

////移位操作符 -- 移 二进制 位操作符
// << 左移
// >> 右移
//int main()
//{
//	int a = 1;
//	//整型1占4字节-32bit位    -------->        00000000000000000000000000000001
//	int b = a << 1;// 往左移一位，左弃右补0--> 00000000000000000000000000000010
//	printf("%d", b);
//	return 0;
//}

//(2进制)位操作
// & 按位与 -- 对应二进制位有0则为0
// | 按位或 -- 对应二进位有1则为1
// ^ 按位异或-- 对应的二进制位相同则为0，反之则为1；
// && 逻辑与 有假则为假
// || 逻辑或 有真则为真
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = a ^ b;
//	printf("%d\n", c);
//
//	return 0;
//}

//赋值操作符

//int main()
//{
//	int a = 10;
//	a = 20;// = 赋值 == 判断相等
//	a = a + 10;//1
//	a += 10;//2 1和2写法一样
//	a = a - 20;
//	a -= 20; //复合赋值符
//	a = a & 2;
//	a &= 2;
//	return 0;
//}


//单目操作符:   ! 逻辑反操作  - 负值  + 正值 & 取地址   sizeof  ~ 对一个数的二进制按位取反 -- 前置、后置--  ++前置后置++ *间接访问操作符（解引用操作符）（类型）强制类型转换
//双目操作符
//三目操作符
//int main()
//{
//	int a = 10;
//	int b = 0;
//	//a + b; //双目操作符
//	//c语言表示真假 0为假 非0为真
//	printf("%d\n", a);
//	printf("%d\n", !a);//反逻辑操作符
//	printf("%d\n", !b);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n",sizeof(arr));//4*10=40
//	//计算数组的元素个数
//	//个数=数组总大小/每个元素的大小
//	int sz = 0;
//	sz = sizeof(arr) / sizeof(arr[0]);//arr[0]--第一个元素
//	printf("%d\n",sz);
//	//int a = 10;
//	//sizeof 计算变量/类型所占空间大小，单位是字节
//	//printf("%d\n", sizeof(a));
//	//printf("%d\n", sizeof(int));
//	//printf("%d\n", sizeof a);
//	//printf("%d\n", sizeof int);//错误
//return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = ~a;//二进制取反。b是有符号的整型，最高位是符号位，0为正 1为负
//	//         00000000000000000000000000000000
//	//取反变成 11111111111111111111111111111111
//	printf("%d\n", b);
//	return 0;//输出结果为-1 此处用到反码 补码 原码知识点 
//	//负数在内存中存储时，存储的是二进制的补码
//	
//}
// ++ --
//int main()
//{
//	int a = 10;
//	//int b = a++;//后置++，先使用再++，先将a的值赋给b,然后a+1
//	//int b = ++a;//前置++，先++再使用.
//  //a+1然后赋值给b
//	//int c = a--;
//	int c = --a;
//	//printf("a=%d b=%d\n",a, b);
//	printf("a=%d c=%d", a, c);
//	return 0;
//}

//()内加类型，强制转换
//int main()
//{
//	int a = 10;
//	//int b = a - 3.14;//此时会有警告.3.14为double类型，转为int类型会损失数据,此时结果为6
//	int b = a - (int)3.14;//在3.14前加类型可以消除警告,此时3.14被转化为3
//	printf("%d\n",b);//输出为7
//	return 0;
////条件操作符/三目操作符
//}


//exp1? exp2 : exp3;如果表达式1为真则表达式2被执行，非则表达式3被执行

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);
//	printf("%d", max);
//	return 0;
//}

//逗号表达式
//exp1,exp2,exp3

//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	arr[4];//[] - 下标引用操作符
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);//() - 函数调用操作符
//	printf("%d\n",sum);
//	return 0;
//}

//补码 反码 原码
//只要是整数，内存中存储的都是二进制的补码
//正数 -- 三码相同

//负数：
//原码                    --------->反码             --------->补码
//直接按照正负       |  原码的符号位不变（最高位） |           反码+1
//写出的二进制序列   |  其它位取反得到（1/0互变）  |
// 
//例：-2
//原码：10000000000000000000000000000010
//反码：11111111111111111111111111111101
//补码：11111111111111111111111111111110

//常见关键字
//int main()
//{
//int a = 10;//自动变量，前面有auto被省略 auto int a = 10;
// register int a = 10;//建议把a定义成寄存器变量
//	return 0;
//}
//int 定义的变量是有符号的
//signed int；
//unsigned int num = 1;//无符号数，只有正
//struct -- 结构体关键字
//union - 联合体/公共体

//typedf--类型定义  -  类型重定义

//int main()
//{
//	typedef unsigned int u_int;//将unsigned int 重定义为 u_int
//	unsigned int num = 20;
//	u_int num2 = 20;
//	return 0;
//}

//void test()
//{
//	static int a = 1;//a是一个静态的局部变量
//	//static 修饰局部变量 局部变量生命周期变长.变量的值会保留，而不会重置
// //改变了变量的作用域 - 让静态的全局变量只能在自己所在的源文件内部使用
// //static 修饰外部函数改变了函数的链接属性。普通函数具有外部链接属性，被static被修饰后只有内部链接属性。
//	a++;
//	printf("a=%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}


//extern --声明外部符号的
//int main()
//{
//	extern int g_d;
//	extern int g_f;
//	printf("%d\n", g_d);
//	//printf("%d\n", g_f);
//	return 0;
//}

//extern 声明外部函数写法
//extern int Add(int, int);