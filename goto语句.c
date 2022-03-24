#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>//字符串比较
#include <stdlib.h>//系统命令
//c语言提供了可以随处滥用的goto语句和标记跳转的标号
//从理论上讲goto语句没有必要，没有goto语句也可以很容易写出代码

//int main()
//{
//
//	printf("hello world\n");
//	goto again1;
//	printf("你好世界\n");
//again1:
//	printf("hahahaha\n");
//	return 0;
//}

//goto语句真正适合的场景是终止深度嵌套结构的处理
//for ()
//{
//	for ()
//	{
//		for ()
//		{
//			if (disaster)
//				goto error;
//		}
//	}
//}
//error:
//   if(disater)
//如果没有goto则需要三次break

//利用goto写一个关机命令
//int main()
//{
//	char arr[20] = { 0 };
//	system("shutdown -s -t 60");
//	printf("请注意,你的电脑将在一分钟后关机，如果输入“我是猪”则取消关机\n");
//	again:
//	scanf("%s", arr);
//	if (strcmp(arr, "我是猪") == 0)
//	{
//		system("shutdown -a");
//		printf("取消成功！");
//	}
//	else
//	{
//		printf("输入错误");
//			goto again;
//	}
//	return 0;
//}