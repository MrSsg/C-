#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//while���
//�﷨�ṹ
//while�����ʽ��
//     ѭ����䣻

//int main()
//{
//	int i = 1;
//	while (10 >= i)
//	{
//		if (5 == i)
//		{
//			i++;
//			continue;//��������ѭ��������while�ж����
//		}
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)//getchar �����ַ�
//		//ch = getchar() ����һ���ַ�����ֵ�� ch
//		//EOF --end of file --> -1
//	//����EOF���ܽ�������,Ӧ������ CTRL+Z
//	{
//		putchar(ch);//��ӡ�ַ�����printfһ��
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
//	printf("����������\n");//123456
//	scanf("%s", password);//��Ϊpassword��������׵�ַ�����Դ˴����ü�ȡ��ַ��
//	// //�������������ѭ����getchar���϶�ȡֱ������\n
//	int ch = 0;
//	while(( ch = getchar()) != '\n')
//	{
//		;//ʲôҲ����Ҫ��
//	}
//
//	printf("��ȷ�ϣ�Y/N��");
//	ret = getchar();//��ʱ���뻺�������С�\n���ַ�(�س��������ᱻ�˴���getcher��ȡ��ret=\n ֱ������ִ�д���
//	//����Ҫ��ʹ���밴�߼����У�������getchar֮ǰ�����뻺������ա������������뺯����һ�£�ÿ��һ�λ����һ���ַ�
//	//����scanf�����������确123456 abcde'��ʱ�򻺳������������֣�123456��abcde��\n
//	if(ret == 'Y' || ret == 'y' )
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("����ȷ��\n");
//	}
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch >'9')//ASCII��ֵ
//			continue;
//		putchar(ch);
//    }
//	return 0;
//}//��ӡ0-9���ַ�