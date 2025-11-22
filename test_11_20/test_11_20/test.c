#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	//char* pb = &a;
//	*pa = 0;
//	//*pb = 0;
//		
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char* pc = &a;
//	printf("pa  =%p\n", pa);
//	printf("pa+1=%p\n", pa+1);
//	printf("pc  =%p\n", pc);
//	printf("pc+1=%p\n", pc+1);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	/*for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}*/
//	int* p = &arr[0];
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d ", *p);
//	//	p++;
//	//}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}
//int main()
//{
//	char arr[] = "hello world";
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	char* p = &arr[0];
//	for (i = 0; i < sz; i++)
//	{
//		printf("%c", *p);
//		p++;
//		if (*p == '\0')
//			break;
//	}
//	return 0;
//}
//|指针-指针| = 两个指针之间的元素个数
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%lld\n", &arr[9] - &arr[0]);
//	printf("%lld\n", &arr[0] - &arr[9]);
//	return 0;
//}
//想一个函数，求字符串的长度
//size_t strlen_s(char* p)
//{
//	size_t len = 0;
//	while (*p)
//	{
//		len++;
//		p++;		
//	}
//	return len;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%zu\n", strlen_s(arr));
//	return 0;
//}
//size_t strlen_s(char* p)
//{
//	char* start = p;
//	while (*p)//使用p找到'\0'
//	{
//		p++;
//	}
//	return p - start;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%zu\n", strlen_s(arr));
//	return 0;
//}
//指针的关系运算
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int* p = arr;
	while (p < arr + sz)
	{
		printf("%d ", *p);
		p++;
	}
	return 0;
}