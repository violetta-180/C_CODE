#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//struct//匿名结构体类型基本上只能使用一次
//{
//	int a;
//	char b;
//	float c;
//}x,y,z;
//struct
//{
//	int a;
//	char b;
//	float c;
//}*ps;
//int main()
//{
//
//	return 0;
//}
//对齐规则
//#pragma pack(1)//修改默认对齐数为1，设置的一般都是2的次方数
//struct s1
//{
//	char c1;
//	int n;
//	char c2;
//}; 
//#pragma pack()//把修改的改回来 
//struct s2
//{
//	char c1;
//	char c2;
//	int n;
//};
//int main()
//{
//	printf("%zu\n", sizeof(struct s1));//12    修改后为6
//	printf("%zu\n", sizeof(struct s2));//8
//	return 0;
//}
//struct S
//{
//	int data[1000];
//	int num;
//};
//struct S s = { {1,2,3,4}, 1000 };
////结构体传参
//void print1(struct S s)
//{
//	printf("%d\n", s.num);
//}
////结构体地址传参
//void print2(struct S* ps)
//{
//	printf("%d\n", ps->num);
//}
//int main()
//{
//	print1(s);  //传结构体
//		print2(&s); //传地址
//		return 0;
//}
//位段
//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//	return 0;
//}
//联合体        每个成员公用一个空间
//联合的⼤⼩⾄少是最⼤成员的⼤⼩。
//当最⼤成员⼤⼩不是最⼤对⻬数的整数倍的时候，就要对⻬到最⼤对⻬数的整数倍。
//union un
//{
//	char c[5];
//	int i;
//};
//union Un2
//{
//	short c[7];
//	int i;
//};
//int main()
//{
//	printf("%zu\n", sizeof(union un));
//	printf("%zu\n", sizeof(union Un2));
//	return 0;
//}
//struct gift_list
//{
//    int stock_number;//库存量
//    double price; //定价
//    int item_type;//商品类型
//        union {
//            struct
//            {
//                char title[20];//书名
//                    char author[20];//作者
//                    int num_pages;//⻚数
//            }book;
//            struct
//            {
//                char design[30];//设计
//            }mug;
//            struct
//            {
//                char design[30];//设计
//                    int colors;//颜⾊
//                    int sizes;//尺⼨
//            }shirt;
//        }item;
//};
//判断大小端字节序
//int check_sys()
//{
//	int a = 1;
//	//return *(char*)&a;
//	union Un 
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;
//}
//int main()
//{
//	printf("%d\n",check_sys());
//	return 0;
//}
#include <string.h>
int main()
{
    unsigned char puc[4];
    struct tagPIM
    {
        unsigned char ucPim1;
        unsigned char ucData0 : 1;
        unsigned char ucData1 : 2;
        unsigned char ucData2 : 3;
    }*pstPimData;
    pstPimData = (struct tagPIM*)puc;
    memset(puc, 0, 4);
    pstPimData->ucPim1 = 2;
    pstPimData->ucData0 = 3;
    pstPimData->ucData1 = 4;
    pstPimData->ucData2 = 5;
    printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);
    return 0;
}