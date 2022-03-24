#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//while语句
//语法结构
//while（表达式）
//     循环语句；

//int main()
//{
//	int i = 1;
//	while (10 >= i)
//	{
//		if (5 == i)
//		{
//			i++;
//			continue;//结束本次循环，返回while判断语句
//		}
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)//getchar 接收字符
//		//ch = getchar() 接收一个字符，赋值给 ch
//		//EOF --end of file --> -1
//	//输入EOF不能结束代码,应该输入 CTRL+Z
//	{
//		putchar(ch);//打印字符，与printf一样
//	}
//	return 0;
//}

//int main()
//{
//	char ch = 0;
//	while ((scanf("%c", &ch)) != EOF)
//	{
//		printf("%c", ch);
//	}
//	return 0;
//}

//int main()
//{
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("请输入密码\n");//123456
//	scanf("%s", password);//因为password是数组的首地址，所以此处不用加取地址符
//	// //解决方案：利用循环用getchar不断读取直到读到\n
//	int ch = 0;
//	while(( ch = getchar()) != '\n')
//	{
//		;//什么也不需要做
//	}
//
//	printf("请确认（Y/N）");
//	ret = getchar();//此时输入缓冲区还有‘\n’字符(回车键），会被此处的getcher获取，ret=\n 直接往下执行代码
//	//所以要想使代码按逻辑运行，必须在getchar之前把输入缓冲区清空。方法是让输入函数读一下，每读一次会清除一个字符
//	//当在scanf部分输入例如‘123456 abcde'的时候缓冲区会有三部分：123456、abcde、\n
//	if(ret == 'Y' || ret == 'y' )
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch >'9')//ASCII码值
//			continue;
//		putchar(ch);
//    }
//	return 0;
//}//打印0-9的字符