#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//字符串 --由“”引起的字符

//int main()
//{
//	char arr1[] = "abc\0";//[]里规定字符串最大值，当不规定时编译器会根据字符串实际大小赋值
//	char arr2[] = {'a', 'b', 'c'};//arr1的写法\0在c后面，而arr2则不是所以会乱码
//  //arr2的写法是字符的集合
//	printf("%s\n", arr1);  //打印字符串用 %s
//	printf("%s\n", arr2);//输出的是随机值,需要加上",0"
//	printf("%d\n", strlen(arr1));//strlen -string length -计算字符长度的
//	printf("%d\n", strlen(arr2));//输出的是随机值
//
//	return 0;
//}
//"abc"---'a' 'b' 'c' '\0' -- \0 字符串的结束标志,在计算字符串长度的时候\0是结束标志，不算做字符串内容

//int main()
//{
//	char arr[] = "hellow world";
//	printf("%s", arr);
//	return 0;
//}

////转义字符 \
//int main()
//
// {	//printf("abc\n");// \n 换行
	// \? --- 书写多个问号时防止他们被解析成三字母词
	//三字母词  ？？加一个符号组成三字母词 例如  "？？（"  -----> "["
	// \t 水平制表符
	// \\ 用于表示一个反斜杠，防止它被解释为一个转义序列字符
	//要打印引号 " 可以在引号前加反斜杠 表示为 "\""

	//printf("%d\n", strlen("c:\test\32\test.c"));//13
	//printf("%c\n",'\x61'); 61十六进制转十进制： 6*16^1 + 1*16^0 = 97 输出97对应的ASCII码值 a
	// \ddd --  ddd表示1~3个八进制的数字，如： \130   \32就是八进制的32  就是十进制的 3*8^1 + 2*8^0 = 26 输出26对应的ASCII码对应的字符
    // \xdd --  dd表示2个十六进制的数字，如： \x30 
	
//	int input = 0;
//	printf("你要好好学习吗？（1/0）>:");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("人生巅峰\n");
//	else
//		printf("种地瓜\n");
//	return 0;
//}