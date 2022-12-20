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

//指针数组，是数组，用来存放指针的
//int main()
//{
//	int arr[10] = { 0 };//整形数组
//	char ch[5] = { 0 };//字符数组
//	int* parr[4];//存放整形指针的数组 - 指针数组
//	char* pch[5];//存放字符指针的数组 - 指针数组
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




//数组指针
//int main()
//{
//	int* p = NULL;//p是整形指针 - 指向整形的指针 - 可以存放整形的地址
//	char* pc = NULL;//pc是字符指针 - 指向字符的指针 - 可以存放字符的地址
//	//数组指针 - 指向数组的地址 - 存放数组的地址
//	int arr[10] = { 0 };
//	//arr - 首元素地址
//	//&arr[0] - 首元素地址
//	//&arr - 数组的地址
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;//数组的地址要存起来
//	//上面p就是数组指针
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


//参数是数组的形式
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
//参数是指针的形式 
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
////面试题
////讲解下面代码的意思
//void(*signal(int, void(*)(int)))(int);
////signal是一个函数声明
////signal函数的参数有2个，第一个是int。第二个是函数指针，该函数指向的函数的参数是int，返回类型是void
////signal函数的返回类型也是一个函数指针：该函数指向的函数的参数是int，返回类型是void
//
////简化
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
//1.写一个函数指针pf，能够指向my_strcpy
//2.写一个函数指针逐pfArr，能够存放4个my_strcpy的函数地址