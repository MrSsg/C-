#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//�������⺯����C�����ṩ�ģ����Զ��庯�����û�����ģ�

//�⺯������ cplusplus.com 

//�Զ��庯��
//ret_type fun_name(paral, *)        int Add(int a, int b)
//{                                  {
//		statement;                        int z = a + b;
//	}                                     return z;
//ret_type ��������                    }
//fun_name ������
//paral ��������

//���庯��
//int get_max(x, y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);//������ʹ��
//	printf("max = %d", max);
//	return 0;
//}

//ʵ��������������

//����1 x,y �� a,b û�й�ϵ��������Ȼ������x,y��ֵ��a,b��ֵû�б�

//void Swap1(int x, int y)//void -- ����û�з���ֵ
//{
//   int p = x;
//	x = y;
//	y = p;
//}
//
////����2 ����ָ��ʹ�������ݽ�������
//
//void Swap2(int* px , int* py)
//{
//	int pp = 0;
//	pp = *px;
//	*px = *py;
//	*py = pp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	
//	printf("a=%d b=%d\n", a, b);
//	//ֱ�ӽ���
//    //int tmp = 0;
//	//tmp = a;
//    //a = b;
//	//b = tmp;
//	//printf("a=%d b=%d\n", a, b);
// //����
//	Swap1(a, b);
//	printf("a=%d b=%d\n", a, b);
//	Swap2(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//}

//ʵ��:��ʵ���ݸ������Ĳ����������ǣ����������������ʽ�������ȡ�
// ����ʵ���Ǻ������͵������ڽ��к�������ʱ�����Ǳ�����ȷ����ֵ���Ա����Щֵ���ݸ��β�

//�βΣ�ָ�������������еı�������Ϊ��ʽ����ֻ���ں��������ù����вŻ�ʵ�����������ڴ浥Ԫ�������Խ���ʽ������
//�β��ں����������ͱ��Զ������ˡ�����β�ֻ�ں�������Ч��

//����Swap1��Swap2�����еĲ���x, y, px, py������ʽ��������main�����д���Swap1��a,b�ʹ���Swap2������&a, &b��ʵ�ʲ�����

//����Swap1�� �β���ʵ�ε�һ����ʱ����������ֻ�������βε�ֵû�н���ʵ�ε�ֵ

//�����ĵ��ã�
//1����ֵ����:�����βκ�ʵ�ηֱ�ռ�в�ͬ���ڴ�飬���βε��޸Ĳ���Ӱ��ʵ�Σ�����Swap1
//2����ַ���ã��Ѻ����ⲿ�����������ڴ��ַ���ݸ�����������һ�ֵ��ú����ķ�ʽ
//���ִ��η�ʽ�����ú����ͺ�����ߵı�����������������ϵ��Ҳ���Ǻ����ڲ�����ֱ�Ӳ��������ⲿ�ı���


//�����Զ��庯��ʵ���ҵ�100-200������

//��������1�����Ƿ���0
//int is_prime1(int n)
//{
//	int a = 0;
//	for (a = 2; a < n; a++)
//	{
//		if(n%a ==  0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
////��ƽ����
#include<math.h>
//int is_prime2(int m)
//{
//	int a = 0;
//	for (a = 2; a <= sqrt(m); a++)
//	{
//		if (m % a == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	int x = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime2(i) == 1)
//		{
//			x++;
//			printf("%d��%d\n",x, i);
//		}
//	}
//	return 0;
//}

//�����Զ��庯���ҳ�1000-2000���е�����
//int is_leap_year(int x)
//{
//	if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int i = 0;
//	for(i=1000;i<=2000;i++)
//	{
//		if (is_leap_year(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//�����Զ��庯��ʵ�ֶ��ַ����� -- �ص�
//int binary_search(int arr[], int k,int sz )//���ݹ�������arr��Ԫ�صĵ�ַ ����arr[]��һ��ָ�롣�������������������������Ԫ�ظ���
//{
//	int left = 0;//���±�
//	
//	int right = sz - 1;//���±�
//	while (left <= right)
//	{
//		int mid = (left + right)/2;//�м��
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
//			return mid;
//		}
//	}
//	if (left > right)
//	{
//		return -1;
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//����Ŀ��
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���ָ������\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±�Ϊ%d\n", ret);
//	}
//}


//ÿ����һ��numֵ��һ
//void add(int* p)
//{
//	(*p)++;//++�����ȼ��ܸߣ��������������Ϊp++Ȼ��*
//}
//int main()
//{
//	int num = 0;
//	add(&num);
//	printf("%d\n", num);
//	add(&num);
//	printf("%d\n", num);
//	add(&num);
//	printf("%d\n", num);
//	return 0;
//}

//��ʽ���ʣ���һ�������ķ���ֵ��Ϊ��һ�������Ĳ���

//int main()
//{
//	int len = 0;
//	len = strlen("abc");
//	printf("%d\n", len);
//	printf("%d\n", strlen("abc"));//��ʽ
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d",43)));//printf����ֵ�Ǵ�ӡ�ַ��ĸ���
//	return 0;
//}

//�����������Ͷ���

////����������
//int Add(int x, int y);
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	//�����ĵ���
//	sum = Add(a, b);
//	printf("%d", sum);
//	return 0;
//}
////�����Ķ���
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}//ʵ���в�����ô��

//ʵ��ʹ���У������������ͺ����Ķ���ֱ�Ӧ�����½���ͷ�ļ���Դ���ļ���

//����Add���������ڡ�Add.h��,�����ڡ�Add.c��
//#include "Add.h"//�Զ��庯������
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	//�����ĵ���
//	sum = Add(a, b);
//	printf("sum=%d", sum);
//	return 0;
//}
