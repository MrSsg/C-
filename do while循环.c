#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//do语句的语法：
//do
//   循环语句;
//while（表达式）;

//int main()
//{
//	int i = 0;
//	do//do后面如果执行两句及以上语句必须用{}括起来
//	{
//		if (i == 5)
//		{
//			i++;
//			continue;
//		}
//		//	break;
//		
//		printf("%d\n",i);
//		i++;
//	} 
//	while (i <= 10);//while可以跟在大括号后面，也可以另起一行
//		return 0;
//}

//int main()
//{
//	int i = 1;
//	do
//		i++; while (i < 5);
//	printf("%d\n", i);
//	return 0;
//}//该实例说明do后面若只执行一句代码可以不加大括号

//int main(){int i = 1;for (; i < 5; i++)printf("%d\n", i);return 0;}