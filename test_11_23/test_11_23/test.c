#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//冒泡排序
//void bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//假设已经有序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//			break;
//	}
//}
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[10] = { 9,3,6,7,5,4,8,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	print_arr(arr, sz);
//	return 0;
//}
//二级指针
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;
//	printf("%d\n", **ppa);
//	return 0;
//}
//指针数组
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* pa = &a;
//	int* pb = &b;
//	int* pc = &c;
//	int* arr[] = { pa,pb,pc };
//	return 0;
//}
//int main()
//{
//	int arr1[] = {1,2,3,4,5};
//	int arr2[] = {2,3,4,5,6};
//	int arr3[] = {3,4,5,6,7};
//	int* arr[] = {arr1,arr2,arr3};
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//字符指针变量
//int main()
//{
//	char a = 'w';
//	char* pa = &a;
//	char arr[] = "abcdef";
//	char* parr = arr;
//	const char* pc = "abcdef";//"abcdef"是字符串常量，不允许被修改
//	//pc中依然存放的是首元素a的地址
//	printf("%c\n", *pc);
//	printf("%s\n", pc);
//	return 0;
//}
//数组指针变量
//int main()
//{
//	int arr[10] = { 0 };
//	int (*p)[10] = &arr;//取出的是整个数组的地址
//	//p就是数组指针变量
//	//存放的是数组的地址
//	//p指向的是数组arr
//	return 0;
//}
//int main()
//{
//	/*char arr[5];
//	char (*p)[5] = &arr; 
//	char* arr[5];
//	char* (*p)[5] = &arr;*/
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*p)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*p)[i]);
//	}
//	return 0;
//}
//二维数组传参
//void test(int* p)
//{
//	int i = 0;
//	for (i = 0; i < 15; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	
//}
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	int (*p)[15] = &arr;
//	test(p);
//	return 0;
//}
void test(int(*arr)[5], int r, int c)
{
	int i = 0;
	for (i = 0; i < r; i++)
	{
		int j = 0;
		for (j = 0; j < c; j++)
		{
			printf("%d ", *(*(arr + i) + j));//等同于arr[i][j]
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
	test(arr, 3, 5);
	return 0;
}