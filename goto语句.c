#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>//�ַ����Ƚ�
#include <stdlib.h>//ϵͳ����
//c�����ṩ�˿����洦���õ�goto���ͱ����ת�ı��
//�������Ͻ�goto���û�б�Ҫ��û��goto���Ҳ���Ժ�����д������

//int main()
//{
//
//	printf("hello world\n");
//	goto again1;
//	printf("�������\n");
//again1:
//	printf("hahahaha\n");
//	return 0;
//}

//goto��������ʺϵĳ�������ֹ���Ƕ�׽ṹ�Ĵ���
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
//���û��goto����Ҫ����break

//����gotoдһ���ػ�����
//int main()
//{
//	char arr[20] = { 0 };
//	system("shutdown -s -t 60");
//	printf("��ע��,��ĵ��Խ���һ���Ӻ�ػ���������롰��������ȡ���ػ�\n");
//	again:
//	scanf("%s", arr);
//	if (strcmp(arr, "������") == 0)
//	{
//		system("shutdown -a");
//		printf("ȡ���ɹ���");
//	}
//	else
//	{
//		printf("�������");
//			goto again;
//	}
//	return 0;
//}