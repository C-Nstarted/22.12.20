#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//void test(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//}
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//	return 0;
//}

//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";
//	printf("%s\n", p);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//	if (p1==p2)
//	{
//		printf("hehe\n");
//	}
//	else
//		printf("haha\n");
//
//	//if (arr1 == arr2)
//	//{
//	//	printf("hehe\n");
//	//}
//	//else
//	//	printf("haha\n");
//	return 0;
//}

//ָ�����飬�����飬�������ָ���
//int main()
//{
//	int arr[10] = { 0 };//��������
//	char ch[5] = { 0 };//�ַ�����
//	int* parr[4];//�������ָ������� - ָ������
//	char* pch[5];//����ַ�ָ������� - ָ������
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a,&b,&c,&d };
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3};
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i]+j));
//		}
//		printf("\n");
//	}
//	return 0;
//}




//����ָ��
//int main()
//{
//	int* p = NULL;//p������ָ�� - ָ�����ε�ָ�� - ���Դ�����εĵ�ַ
//	char* pc = NULL;//pc���ַ�ָ�� - ָ���ַ���ָ�� - ���Դ���ַ��ĵ�ַ
//	//����ָ�� - ָ������ĵ�ַ - �������ĵ�ַ
//	int arr[10] = { 0 };
//	//arr - ��Ԫ�ص�ַ
//	//&arr[0] - ��Ԫ�ص�ַ
//	//&arr - ����ĵ�ַ
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;//����ĵ�ַҪ������
//	//����p��������ָ��
//}

//int main()
//{
//	char* arr[5];
//	char*( *pa)[5] = &arr;
//
//	int arr[10] = { 0 };
//	int(*pa)[10] = &arr;
//	return 0;
//} 

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*p)[i]);
//	}
//	return 0;
//}


//�������������ʽ
void print1(int arr[3][5], int x, int y)
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < y; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
//������ָ�����ʽ 
//void print2(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			//printf("%d ", *(*(p+i)+j));
//			printf("%d ", (*(p+i))[j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print1(arr, 3, 5);
//	print2(arr, 3, 5);
//	return 0;
//
//}


//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int(*pa)(int, int) = Add;
//	printf("%d\n", (*pa)(2,3));
//	return 0;
//}


//void Print(char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	void(*p)(char*) = Print;
//	(*p)("hello bit");
//	return 0;
//}

//
////������
////��������������˼
//void(*signal(int, void(*)(int)))(int);
////signal��һ����������
////signal�����Ĳ�����2������һ����int���ڶ����Ǻ���ָ�룬�ú���ָ��ĺ����Ĳ�����int������������void
////signal�����ķ�������Ҳ��һ������ָ�룺�ú���ָ��ĺ����Ĳ�����int������������void
//
////��
//typedef void(*punf_t)(int);
//punf_t signal(int, punf_t);



//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int* arr[5] = { 0 };
//	//int (*pa)(int x, int y) = Add;//Sub,Mul,Div
//	int (*parr[4])(int x, int y) = { Add,Sub,Mul,Div};
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));//5 -1 6 0
//	}
//	return 0;
//}


char* my_strcpy(char* dest, const char* src);
//1.дһ������ָ��pf���ܹ�ָ��my_strcpy
//2.дһ������ָ����pfArr���ܹ����4��my_strcpy�ĺ�����ַ