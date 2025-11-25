#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//函数指针
//int Add(int x, int y)
//{
//	return x + y;
//}
////int* test(int n, char* p)
////{
////
////}
//int main()
//{
//	int (*pf)(int, int) = &Add;
//	int s = (*pf)(10, 20);
//	int s = pf(10, 20);//和上面一样
//	printf("%d\n", s);
//	//int* (*pt)(int, char*) = &test;
//	return 0;
//}
//int main()
//{
//	(*(void(*)())0)();
//	//1.void(*)()是函数指针类型，这个函数指针没有参数，返回类型为void
//	//2.(void(*)())0是对0强制转换成函数指针类型，意味着0地址处有这个函数
//	//3.(*(void(*)())0)()是对0地址处的函数进行调用	
//	return 0;
//}
//typedef类型重命名
//typedef unsigned int uint;
//typedef int* pint;	
//typedef int (*pparr)[5];
//typedef int (*ppAdd)(int, int);
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	unsigned int num = 0;
//	uint num1 = 0;
//	int* p1,p2;//p2不是指针变量	
//	pint p3,p4;
//	int arr[5] = { 0 };
//	int (*parr)[5] = &arr;
//	pparr p = &arr;
//	int (*pAdd)(int, int) = &Add;
//	ppAdd p1 = &Add;
//	return 0;
//}
//函数指针数组
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
//	int (*p[4])(int, int) = {&Add,&Sub,&Mul,&Div};
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n",p[i](9, 3));
//	}
//	return 0;
//}
//计算器
//void menu()
//{
//	printf("*************************\n");
//	printf("*****  1.add 2.sub ******\n");
//	printf("*****  3.mul 4.div ******\n");
//	printf("*****  0.exit      ******\n");
//	printf("*************************\n");
//}
//int add(int x,int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int (*p[4])(int, int) = { add,sub,mul,div };
//	do {
//		menu();
//		printf("请输入:");
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("退出计算器\n");
//		}
//		else if (input >= 0 && input < 5)
//		{
//			printf("请输入两个数:");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", p[input - 1](x, y));
//		}
//		else
//		{
//			printf("输入错误，请重新选择!\n");
//		}
//		
//		/*switch (input)
//		{
//		case 1:
//			printf("请输入两个数:");
//			scanf("%d %d", &x, &y);
//			printf("%d\n",p[input - 1](x, y));
//			break;
//		case 2:
//			printf("请输入两个数:");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", p[input - 1](x, y));
//			break;
//		case 3:
//			printf("请输入两个数:");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", p[input - 1](x, y));
//			break;
//		case 4:
//			printf("请输入两个数:");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", p[input - 1](x, y));
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default :
//			printf("输入错误，请重新输入!");
//			break;
//		}*/
//	} while (input);
//	return 0;
//}
//回调函数
//int Add(int x, int y)
//{
//	return x + y;
//}
//void test(int (*pf)(int,int))
//{
//	int r = pf(10, 20);
//	printf("%d\n", r);
//}
//int main()
//{
//	test(Add);
//	return 0;
//}
//void menu()
//{
//	printf("*************************\n");
//	printf("*****  1.add 2.sub ******\n");
//	printf("*****  3.mul 4.div ******\n");
//	printf("*****  0.exit      ******\n");
//	printf("*************************\n");
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//void p_s(int (*p)(int,int))//函数的参数是函数指针，可以接收不同函数的地址，接收的地址不同，调用的函数就不同
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个数:");
//	scanf("%d %d", &x, &y);
//	printf("%d\n", (*p)(x,y));
//}
//int main()
//{
//	int input = 0;
//	
//	//int (*p[4])(int, int) = { add,sub,mul,div };
//	do {
//		menu();
//		printf("请输入:");
//		scanf("%d", &input);
//		//if (input == 0)
//		//{
//		//	printf("退出计算器\n");
//		//}
//		//else if (input >= 0 && input < 5)
//		//{
//		//	printf("请输入两个数:");
//		//	scanf("%d %d", &x, &y);
//		//	printf("%d\n", p[input - 1](x, y));
//		//}
//		//else
//		//{
//		//	printf("输入错误，请重新选择!\n");
//		//}
//		switch (input)
//		{
//		case 1:
//			p_s(add);
//			break;
//		case 2:
//			p_s(sub);
//			break;
//		case 3:
//			p_s(mul);
//			break;
//		case 4:
//			p_s(div);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("输入错误，请重新输入!");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//qsort函数       可以排序任意类型的数据
//void qsort (void* base, //是指针，指向了被排序数组的第一个元素
//			  size_t num, //base指向的被排序数组的元素个数
//			  size_t size,//base指向的被排序数组的元素的大小(长度)，单位是字节
//            int (*compar)(const void*, const void*)//函数指针，指针指向的函数用来比较被排序数组中的两个元素
//            );
#include <stdlib.h>
void bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;//假设已经有序
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
		}
		if (flag == 1)
			break;
	}
}
void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
//默认是升序，倒叙的话return相反
//int cmp_int(const void* p1,const void* p2)//void*不能直接解引用，cmp_int函数是用来比较两个整型数据的大小的，p1,p2都是整型
//{
//	if (*(int*)p1 > *(int*)p2)
//	{
//		return -1;
//	}
//	else if (*(int*)p1 == *(int*)p2)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//整型可以简化
//升序
int cmp_int(const void* p1, const void* p2)
{
	return (*(int*)p1 - *(int*)p2);//降序(*(int*)p2 - *(int*)p1)
}
//void test()
//{
//	int arr[10] = { 9,3,6,7,5,4,8,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print_arr(arr, sz);
//	//排序
//	qsort(arr,sz,sizeof(arr[0]), cmp_int);
//	print_arr(arr, sz);
//}
struct Stu
{
	char name[30];
	int age;
}; 
//void test(struct Stu* ps)
//{
//	printf("%s:%d\n", ps->name, ps->age);//结构体成员访问操作符:->     结构体指针->成员名    针对结构体指针
//	printf("%s:%d\n", (*ps).name, (*ps).age);
//}
//int main()
//{
//	struct Stu s = { "zhangsan",18 };
//	test(&s);
//	return 0;
//}
//int cmp_Stu(const void* p1, const void* p2)
//{
//	return (*(struct Stu*)p1).age - (*(struct Stu*)p2).age;
//}
//int cmp_Stu_age(const void* p1, const void* p2)
//{
//	return ((struct Stu*)p1)->age - ((struct Stu*)p2)->age;
//}
#include <string.h>
int cmp_Stu_name(const void* p1, const void* p2)
{
	//字符串比较大小用strcmp
	//字符串比较大小不是比长度，二是比较对应位置上的字符的ASCII码值的大小
	return strcmp(((struct Stu*)p1)->name,((struct Stu*)p2)->name);
}
void print_Stu(struct Stu arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%s:%d\n", arr[i].name, arr[i].age);
	}
}
//测试qsort函数排序结构体数据
void test1()
{
	struct Stu arr[] = { {"zhangsan",18},{"lisi",20},{"wangwu",30} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//qsort(arr, sz, sizeof(arr[0]), cmp_Stu_age);
	qsort(arr, sz, sizeof(arr[0]), cmp_Stu_name);
	print_Stu(arr,sz);
}
void Swap(char* buf1,char* buf2,size_t width)
{
	int i = 0;
	char tmp = 0;
	for (i = 0; i < width; i++)
	{
		tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
void bubble_sort2(void* base, size_t sz,size_t width,int (*cmp)(const void* p1,const void* p2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//int flag = 1;//假设已经有序
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//if (arr[j] > arr[j + 1])
			if(cmp((char*)base+ j * width,(char*)base + (j + 1) * width)>0)
			{
				Swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
				/*int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;*/
				//flag = 0;
			}
		}
		/*if (flag == 1)
			break;*/
	}
}
void test2()
{
	int arr[10] = { 9,3,6,7,5,4,8,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print_arr(arr, sz);
	//排序
	bubble_sort2(arr, sz, sizeof(arr[0]), cmp_int);
	print_arr(arr, sz);
}
void test3()
{
	struct Stu arr[] = { {"zhangsan",18},{"lisi",20},{"wangwu",30} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//qsort(arr, sz, sizeof(arr[0]), cmp_Stu_age);
	bubble_sort2(arr, sz, sizeof(arr[0]), cmp_Stu_name);
	print_Stu(arr, sz);
}
int main()
{
	//test();
	//test1();
	//test2();
	test3();
	return 0;
}