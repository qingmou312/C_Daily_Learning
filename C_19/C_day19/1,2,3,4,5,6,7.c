////1.实现strcpy
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(int _argc,char *_argv[],char *_get_initial_narrow_environment[])
{
	int i = 0;
	for (i = 0; i < _argc; i++)
	{
		printf("%s\n",_argv[i]);
	}
	return 0;
}
//#include<assert.h>
//char*my_strcpy(char* dest, const char* src)
//{
//	char *ret = dest;
//	assert(dest&&src);
//	while(*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr[20] = { 0 };
//	my_strcpy(arr, "hellow world");
//	printf("%s\n", arr);
//	return 0;
//}
////2.实现strcat
//#include <stdio.h>
//#include <assert.h>
//char *my_strcat(char*dest, const char* src)
//{
//	char *ret = dest;
//	assert(dest&&src);
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
////3.实现strstr
#include <stdio.h>
#include <assert.h>
char *my_strstr(const char* str, const char* substr)
{
	const char *s1 = str;
	const char *s2 = substr;
	const char *cur = str;
	assert(str && substr);
	if (*substr == '\0')
			return (char*)str;
	while (*cur)
	{
		s1 = cur;
		s2 = substr;

		while (*s1 && *s2 && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
			return (char*)cur;		
		cur++;
	}
	return NULL;
}
int main()
{
	char *p1 = "abcdefabcdef";
	char *p2 = "bcd";
	printf("%s\n", my_strstr(p1, p2));
	return 0;
}
////4.实现strchr
#include <stdio.h>
#include <assert.h>
char *my_strchr(const char *p, char c)
{
    assert(p);
	while (*p)
	{
		if (*p == c)
		{
			return (char *)p;
		}
		*p++;
	}
	return NULL;
}
int main()
{
	char *p = "abcdefgrg";
	char b = 'f';
	char *ret = NULL;
	ret = my_strchr(p, b);
	printf("%s\n", ret);
	return 0;
}
////5.实现strcmp
#include <stdio.h>
#include <assert.h>
int my_strcmp(const char*p1, const char*p2)
{
	assert(p1&&p2);
	while (*p1 == *p2)
	{
		if (*p1 == '\0')
		{
			return 0;
		}
		p1++;
		p2++;
	}
	if (*p1 > *p2)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}
int main()
{
	char *p1 = "abcdef";
	char *p2 = "bbbbbbb";
	int ret = my_strcmp(p1,p2);
	printf("%d\n", ret);
	return 0;
}
////6.实现memcpy
#include <stdio.h>
#include <assert.h>
void *my_memcpy(void *dest, const void *src, size_t count)
{
	void *ret = dest;
	assert(dest && src);
	while (count--)
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
	return ret;	
}
int main()
{
	char arr1[10] = { 0 };
	char arr2[] = {1, 2, 3, 4, 5};
	my_memcpy(arr1, arr2, 20);
	return 0;
}
////7.实现memmove
#include <stdio.h>
#include <assert.h>
void *my_memmove(void *dest, const void *src, size_t count)
{
	void *ret = dest;
	assert(dest && src);
	if (dest <= src || (char*)src >= ((char*)src + count)) 
	{
		while (count--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else
	{
		dest = (char*)dest + count - 1;
		src = (char*)src + count - 1;
		while (count--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest - 1;
			src = (char*)src - 1;
		}

	}
	return ret;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	my_memmove(arr + 2, arr, 16);
	return 0;
}

////计数器方式
//int my_strlen(const char*str)
//{
//	int count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count:
//}
////不能创建临时变量
//int my_strlen(const char*str)
//{
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + my_strlen(str + 1);
//	}
//}
//指针-指针的方式
//int my_strlen(const char*str)
//{
//	char *p = s;
//	while (*p != '\0')
//	{
//		p++;
//	}
//	return p - s;
//}


