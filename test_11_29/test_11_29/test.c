#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//memmove
//int main()
//{
//	//内存不重叠
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[] = { 0 };
//	memmove(arr2, arr1, 20);
//	return 0;
//}
//int main()
//{
//	//内存重叠
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	memmove(arr+2, arr, 20);
//	return 0;
//}
#include <assert.h>
//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	//前->后
//	if (dest < src)
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	//后->前
//	else
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return ret;
//}
//int main()
//{
//	//内存重叠
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr + 2, arr, 20);
//	return 0;
//}
//memset 内存设置   以字节为单位
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr + 2, 'x', 5);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	memset(arr, 1, 40);//error
//	return 0;
//}
//memcmp   内存块比较
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7 };
//	int arr2[] = { 1,2,3,4,5,8 };
//	int r = memcmp(arr1, arr2, 21);
//	printf("%d\n", r);
//	return 0;
//}
//⼤端（存储）模式：
//是指数据的低位字节内容保存在内存的⾼地址处，⽽数据的⾼位字节内容，保存在内存的低地址处。
//⼩端（存储）模式：
//是指数据的低位字节内容保存在内存的低地址处，⽽数据的⾼位字节内容，保存在内存的⾼地址处。
//int check_sys()
//{
//	int a = 1;
//	//char* p = &a;
//	//if (*(char*)&a == 1)
//	//{
//	//	return 1;
//	//}
//	//else
//	//{
//	//	return 0;
//	//}
//	return *(char*)&a;
//}
//int main()
//{
//	if (check_sys() == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}
//int main()
//{
//	char a = -1;
//	//10000000 00000000 00000000 00000001-原码
//	//11111111 11111111 11111111 11111110
//	//11111111 11111111 11111111 11111111-补码
//	//11111111 - a
//	//11111111 11111111 11111111 11111111-补码
//	//10000000 00000000 00000000 00000000
//	//10000000 00000000 00000000 00000001-原码
//	signed char b = -1;
//	unsigned char c = -1;	
//	//10000000 00000000 00000000 00000001-原码
//	//01111111 11111111 11111111 11111110
//	//01111111 11111111 11111111 11111111-补码
//	//11111111 - c
//	//00000000 00000000 00000000 11111111-原码 
//	printf("a = %d, b = %d, c = %d", a, b, c);
//	//signed char 取值范围 -128~127
//	//unsigned char 取值范围 0~255
//	return 0;
//}
//int main()
//{
//	char a = -128;
//	//10000000 00000000 00000000 10000000
//	//11111111 11111111 11111111 01111111
//	//11111111 11111111 11111111 10000000
//	//10000000 - a
//	//11111111 11111111 11111111 10000000  
//	printf("%u\n", a);
//	//以十进制的形式打印无符号的整数
//	return 0;
//}
//int main()
//{
//	char a = 128;
//	//00000000 00000000 00000000 10000000
//	//10000000 - a
//	//11111111 11111111 11111111 10000000  
//	printf("%u\n", a);
//	return 0;
//}
//int main()
//{
//	char a[1000];//-128~127
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;//-1 -2 -3 ...
//	}
//	printf("%d", strlen(a));//求字符串中'\0'(0)之前的元素个数
//	return 0;
//}
//unsigned char i = 0;//0~255
//int main()
//{
//	//死循环
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}
//#include <windows.h>
//int main()
//{
//	unsigned int i;//>=0
//	//死循环
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(100);
//	}
//	return 0;
//}
//X86环境 小端字节序
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x, %x", ptr1[-1], *ptr2);
//	//是以十六进制的形式打印
//	return 0;
//}
//V = (−1)^S ∗ M ∗ 2^E
//M是科学计数法
//(−1)^S 表示符号位,当S = 0,V为正数;当S = 1,V为负数
//M 表示有效数字，M是大于等于1,小于2的
//2^E 表示指数位
//十进制的5.0,写成二进制是 101.0 ,相当于1.01 * 2^2
//那么,按照上面 V 的格式,可以得出S = 0,M = 1.01，E = 2。
//十进制的-5.0,写成二进制是 -101.0 ,相当于 -1.01 * 2^2 ;那么,S = 1，M = 1.01，E = 2
//int main()
//{
//	int n = 9;
//	float* pFloat = (float*)&n;
//	printf("n的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//	*pFloat = 9.0;
//	printf("n的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//	return 0;
//}
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    int d = 0;
//    printf("输入两个整数:\n");
//    scanf("%d %d", &a, &b);
//    if (a >= 1 && b <= 10 * 10 * 10 * 10)
//    {
//        c = a / b;
//        d = a % b;
//    }
//    printf("%d %d", c, d);
//    return 0;
//}
//int main()
//{
//	float a = 9.5f;
//	//1001.1
//	//1.0011*2^3
//	//(-1)^0 * 1.0011 * 2^3
//	//S - 0
//	//M - 1.0011
//	//E - 3 + 127 = 130
//	//01000001 00011000 00000000 00000000
//	//0x41     18       00       00
//	return 0;
//}






