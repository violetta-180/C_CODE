#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//打印1000-2000之间的闰年
//闰年的条件是：能被4整除但不能被100整除，或者能被400整除
// int main()
// {
//     int year = 0;
//     for(year = 1000;year <= 2000;year++)
//     {
//         if(year % 4 ==0 && year % 100 != 0 || year % 400 == 0)
//         {
//             printf("%d ", year);
//         }
//     }
//     return 0;
// }

//写一个函数可以判断一个年份是否是闰年
int is_leap_year(int y)
{
    //判断year是否是闰年
    //闰年的条件是：能被4整除但不能被100整除，或者能被400整除
    if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
    {
        return 1; //是闰年
    }
    return 0; //不是闰年
}
int main()
{
    int year = 0;
    for (year = 1000; year <= 2000; year++)
    {
        if (is_leap_year(year)) //调用判断闰年的函数
        {
            printf("%d ", year);
        }
    }
    return 0;
}