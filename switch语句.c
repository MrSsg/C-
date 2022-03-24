#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//switch语句
//switch(整型表达式）
//{
//语句项;
//}
//语句项是一些case语句

//例：
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//		switch (day)//day决定了从哪进，break决定从哪出。
////day的数据类型必须是整型
//		{
//		case 1://case后面必须是 整型 常量 表达式
//			printf("星期1\n");
//			break;//跳出语句
//		case 2:
//			printf("星期2\n");
//			break;
//		case 3:
//			printf("星期3\n");
//			break;
//		case 4:
//			printf("星期4\n");
//			break;
//		case 5:
//			printf("星期5\n");
//			break;
//		case 6:
//			printf("星期6\n");
//			break;
//		case 7:
//			printf("星期天\n");
//			break;
//		default://当输入数据超出上面case默认走这个。default没有需求时可以不写
//			//default可以放在任何位置，最好放在最后
//			printf("输入错误\n");
//			break;
//		}
//	return 0;
//}

//如果有几个输出结果相同可以这么写
//{
//case 1:
//case 2:
//case 3:
//	printf("xxx");
//	break;
//}

//每个case后面不一定要加break，但最后一个最好加上。

//switch允许嵌套使用：
//switch (n)
//{
//case 1:
//case 2:
//	switch (n)
//	{
//	case 1:
//	case 2:
//	case 3:
//	default:
//		break;
//	}
//case 3:
//	break;
//case 4:
//	break;
//}