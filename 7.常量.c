#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

//����
//���泣��  const ���εĳ����� #define����ı�ʶ������ ö�ٳ���
//int main()
//{
//	const int num = 4; //const ---������ ��ʱnumΪ��������������Ϊ����
//	printf("%d\n", num); //OK
//  int arr[num] = {0}
//  printf("%d\n",num); //ON
//	return 0;
//}

//int main()
//{
//#define MAX 10   //#define ����ı�ʶ������ ��ʱMAX����10
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//	return 0;
//}

//#define ���Զ���� ��������������

//���������Ľϴ�ֵ

//������ʵ��
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
////��Ķ���
//#define MAX(X,Y) (X>Y?X:Y)

//int main()
//{
//	//int a = MAX
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	//������ʽ
//	max = Max(a, b);
//	printf("max= %d\n", max);
//	//��ķ�ʽ
//	max = MAX(a, b);
//	printf("max= %d\n", max);
//	return 0;
//}


////ö�ٳ��� �磺�Ա� ���� �����޵���
////ö�ٹؼ� -- enum
//
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	//enum sex s = FEMALE;
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	return 0;
//
//}
 

