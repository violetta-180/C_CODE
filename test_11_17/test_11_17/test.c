#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int count_bit1_of_n(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//			count++;
//		n = n / 2;//n/=2;
//	}
//	return count;
//}
//int count_bit1_of_n(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((n >> i) & 1 == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int count_bit1_of_n(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);//二进制中有几个1就循环几次
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int r = count_bit1_of_n(n);
//	printf("%d\n", r);
//	return 0;
//}
//int main()
//{
//	int a = 13;
//	a |= (1 << (5 - 1));
//	printf("%d\n", a);
//	a &= ~(1 << (5 - 1));
//	printf("%d\n", a);
//	return 0;
//}
//结构体
//struct Peo
//{
//	char name[20];
//	int age;
//	char tele[12];
//};
//struct Ebook
//{
//	struct Peo data[100];//存放100个人的信息
//	int count;//当前存放的个数
//};
//int main()
//{
//	struct Peo p1 = { "zhangsan",20,"15769553318" };
//	struct Ebook eb = { {{"lisi",19,"13761893750"}},0 };
//	printf("%s %d %s\n", p1.name, p1.age, p1.tele);
//	printf("%s\n", eb.data[0].name);//. 操作符是结构成员访问操作符
//	return 0;
//}
int main()
{
	 char a = 20;
	 char b = 120;
	 char c = a + b;
	printf("%d\n", c);
	return 0;
}