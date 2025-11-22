#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//const修饰指针变量
//int main()
//{
//	const int a = 10;
//	const int* const pa = &a;//const可以放在*号两边
//	//const放在*号的左边，const限制的是*pa，但pa不受限制，指针变量可以改变指向
//	//const放在*号的右边，const限制的是pa，但*pa不受限制
//	printf("%d\n", a);
//	return 0;
//}
// 左边
//int main()
//{
//	const a = 10;
//	const int* pa = &a;
//	int b = 20;
//	pa = &b;
//	printf("%d\n", *pa);
//	return 0;
//}
//右边
//int main()
//{
//	const a = 10;
//	int * const pa = &a;
//	*pa = 20;
//	printf("%d\n", a);
//	return 0;
//}
//#define NDEBUG//关闭assert
//#include <assert.h>
//int main()
//{
//	int a = 10;
//	int* pa = NULL;
//	assert(pa != NULL);//如果条件为假就报错，否则就不发生
//	printf("%d\n", *pa);
//	return 0;
//}
//void Swap(int* pa,int* pb)
//{
//	int z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前:%d %d\n", a, b);
//	Swap(&a, &b);
//	printf("交换后:%d %d\n", a, b);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (int i = 0; i < sz; i++)
//	{
//		scanf("%d", p+i);
//		//p++;
//	}
//	//p = arr;
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p+i));
//		//p++;
//	}
//	return 0;
//}
void test(int* arr)
{
	int sz2= sizeof(arr) / sizeof(arr[0]);//在函数内部求参数部分的数组元素个数是错误的
	printf("sz2 = %d\n", sz2);
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz1 = sizeof(arr) / sizeof(arr[0]);
	printf("sz1 = %d\n", sz1);
	test(arr);
	return 0;
}