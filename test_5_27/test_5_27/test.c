#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//��ӡ1000-2000֮�������
//����������ǣ��ܱ�4���������ܱ�100�����������ܱ�400����
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

//дһ�����������ж�һ������Ƿ�������
int is_leap_year(int y)
{
    //�ж�year�Ƿ�������
    //����������ǣ��ܱ�4���������ܱ�100�����������ܱ�400����
    if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
    {
        return 1; //������
    }
    return 0; //��������
}
int main()
{
    int year = 0;
    for (year = 1000; year <= 2000; year++)
    {
        if (is_leap_year(year)) //�����ж�����ĺ���
        {
            printf("%d ", year);
        }
    }
    return 0;
}