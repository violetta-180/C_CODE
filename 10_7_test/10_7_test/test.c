#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	//int arr1[3][4] = { 1,2,3,4,2,3,4,5,3,4, };
//	// int arr1[3][4] = { {1,2},{3,4},{5,6} };
//	//int arr2[][4] = { {1,2,3,4},{5,6} };
//	int arr[3][4] = { 1,2,3,4,2,3,4,5,3,4,5,6 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			//scanf("%d", &arr[i][j]);
//			printf("&arr[%d][%d] = %p\n", i,j,&arr[i][j]);	
//		}
//		//printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };//0~5
//	int i = 0;
//	for (i = 0; i < 10; i++)//0~9
//	{
//		printf("%d ", arr[i]);//数组越界
//	}
//	return 0;
//}
//二维数组越界
//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//	}
//	return 0;
//}
//数组传参的时候，有2种形式
//1.数组
//2.指针
//void bubble_sort(int arr[],int sz)//函数内部不能计算函数的个数，数组本质上是数组首元素的地址，地址应该用指针来接收
//{
//	//趟数
//	int i = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		//一趟冒泡排序
//		int j = 0;
//		//比较
//		for (j = 0; j <sz-1-i ; j++) {
//			if (arr[j] > arr[j + 1])
//			{
//				//交换
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//冒泡排序的算法，对数组进行排序
//	bubble_sort(arr,sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//数组名确实能表示首元素的地址
//但有2个意外
//1.sizeof(数组名)，这里的数组名表示整个数组，计算的是整个数组的大小，单位是字节
//2.&数组名，这里的数组名也表示整个数组，取出的是整个数组的地址
int main()
{
	int arr[10];
	printf("%p\n", arr);//arr就是首元素的地址
	printf("%p\n", arr+1);
	printf("------------------\n");
	printf("%p\n", &arr[0]);//首元素的地址
	printf("%p\n", &arr[0]+1);
	printf("------------------\n");
	printf("%p\n", &arr);//数组的地址
	printf("%p\n", &arr+1);
	//int n = sizeof(arr);//40
	//printf("%d\n", n);
	return 0;
}