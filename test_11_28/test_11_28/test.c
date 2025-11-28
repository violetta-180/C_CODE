#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//strtok   首次调用传入字符串，后续调用传空指针
//int main()
//{
//	char arr[] = "2194447307@qq.com";
//	char sep[] = "@.";
//	char buf[20] = { 0 };
//	strcpy(buf, arr);
//	char* p = NULL;
//	for (p = strtok(buf, sep); p != NULL; p = strtok(NULL, sep))
//	{
//		printf("%s\n", p);
//	}
//	return 0;
//}
//strerror    perror=printf+strerror	
//#include <errno.h>
//int main()
//{
//	//打开文件失败把错误码放在errno，同时返回NULL
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		//printf("%s\n", strerror(errno));
//		perror("test");
//		//test: 错误信息
//		return 1;
//	}
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
// memcpy   拷贝内存中的数据，不管是什么类型
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//	memcpy(arr2, arr1, 40);
//	return 0;
//}
//#include <assert.h>
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(src && dest);
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		src = (char*)src + 1;
//		dest = (char*)dest + 1;
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//	my_memcpy(arr2, arr1, 40);
//	return 0;
//}
