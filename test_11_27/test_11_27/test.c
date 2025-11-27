#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
//字符分类函数
//int main()
//{
//	int r = isdigit('3');
//	//printf("%d\n", r);
//	if (r)
//		printf("是10进制数字字符\n");
//	else
//	{
//		printf("不是10进制数字字符\n");
//	}
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcdEFG";
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (islower(arr[i]))
//		{
//			arr[i] -= 32;//arr[i] = toupper(arr[i]);
//		}
//	}
//	printf("%s\n", arr);
//	return 0;
//}
//字符转换函数
//int main()
//{
//	//int r = toupper('a');
//	//int r = tolower('a');
//	printf("%c\n", toupper('a'));
//	return 0;
//}
//strlen
//#include <string.h>
//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0)
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<=\n");
//	}
//	return 0;
//}
//size_t my_strlen(char* p)
//{
//	if (*p != '\0')
//		return 1 + my_strlen(p + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%zu\n",my_strlen(arr));
//	return 0;
//}
//strcpy   拷贝到'\0'
#include <string.h>
//int main()
//{
//	char arr1[] = "hello world";
//	char arr2[20] = { 0 };
//	printf("%s\n", strcpy(arr2, arr1));
//	return 0;
//}
#include <assert.h>
//char* my_strcpy(char* p2,const char* p1)
//{
//	char* ret = p2;
//	assert(p1 && p2);
//	while (*p2++ = *p1++)
//	{
//		;
//	}
//	return ret;//返回目标空间的起始地址
//}
//int main()
//{
//	char arr1[] = "hello world";
//	char arr2[20] = { 0 };
//	printf("%s\n", my_strcpy(arr2, arr1));
//	return 0;
//}
//strcat  拼接函数
//int main()
//{
//	char arr1[20] = "hello";
//	char arr2[] = " world";
//	strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//char* my_strcat(char* p1,const char* p2)
//{
//	char* ret = p1;
//	assert(p1 && p2);
//	while (*p1)
//	{
//		p1++;
//	}
//	while (*p1++ = *p2++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "hello";
//	char arr2[] = " world";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//strcmp   字符串比较函数
//int main()
//{
//	//char arr1[] = "abcdef";
//	//char arr2[] = "abq";
//	int r = strcmp("abcdef", "abc");
//	printf("%d\n", r);
//	return 0;
//}
//int my_strcmp(const char* p1,const char* p2)
//{
//	while (*p1 == *p2)
//	{
//		if(*p1=='\0')
//			return 0;
//		p1++;
//		p2++;
//	}
//	//if (*p1 > *p2)
//	//	return 1;
//	//else
//	//	return -1;
//	return *p1 - *p2;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abq";
//	int r = my_strcmp(arr1, arr2);
//	printf("%d\n", r);
//	return 0;
//}
//strncpy
//int main()
//{
//	char arr1[] = "hello world";
//	char arr2[20] = { 0 };
//	printf("%s\n", strncpy(arr2, arr1,7));
//	return 0;
//}
//char* my_strncpy(char* p2, const char* p1,size_t num)
//{
//	char* ret = p2;
//	assert(p1 && p2);
//	/*while (*p2++ = *p1++)
//	{
//		;
//	}*/
//	int i = 0;
//	for (i = 0; i < num; i++)
//	{
//		*p2 = *p1;
//		p1++;
//		p2++;
//	}
//	return ret;//返回目标空间的起始地址
//}
//int main()
//{
//	char arr1[] = "hello world";
//	char arr2[20] = { 0 };
//	size_t num = 0;
//	printf("请输入要拷贝的字符个数:");
//	scanf("%zu", &num);
//	printf("%s\n", my_strncpy(arr2, arr1,num));
//	return 0;
//}
//strncat
//int main()
//{
//	char arr1[20] = "hel\0lo";
//	char arr2[] = " world";
//	strncat(arr1, arr2,4);
//	printf("%s\n", arr1);
//	return 0;
//}
//strncmp
//int main()
//{
//	//char arr1[] = "abcdef";
//	//char arr2[] = "abq";
//	int r = strncmp("abcdef", "abc",3);
//	printf("%d\n", r);
//	return 0;
//}
//strstr   是在一个字符串中找到另一个字符串第一次出现的位置，如果找到了返回地址，找不到返回NULL
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = "efgabcabc";
//	char* r = strstr(arr2, arr1);
//	printf("%s\n", r);
//	return 0;
//}
char* my_strstr(const char* p2,const char* p1)
{
	//特殊场景的处理
	assert(p1 && p2);
	if (*p1 == '\0')
	{
		return (char*)p2;
	}
	const char* p = p2;
	const char* s1 = NULL;
	const char* s2 = NULL;
	while (*p)//枚举查找的次数
	{
		s2 = p;
		s1 = p1;
		//找一次的匹配过程
		while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s1 == '\0')
			 return (char*)p;
		p++;
	}
	return NULL;
}
int main()
{
	char arr1[] = "abc";//" "空字符串特殊场景
	char arr2[] = "afgabcabc";
	char* r = my_strstr(arr2, arr1);
	printf("%s\n", r);
	return 0;
}