#define _CRT_SECURE_NO_WARINGS 1
#pragma warning(disable:4996)
//1.模拟实现strncpy
#include <stdio.h>
#include <string.h>
#include <assert.h>
char *my_strncpy(char *dest, const char *src, int n)
{
	assert(dest != NULL);
	assert(src != NULL);
	char *ret = dest;
	while (n)
	{
		*dest++ = *src++;
		n--;
	}
	if ((dest - 1) != '\0')
		*dest = '\0';
	return ret;
}
int main()
{
	char arr[20] = "hello ";
	my_strncpy(arr + 6, "world", 6);
	printf("%s\n", arr);
	return 0;
}
2.模拟实现strncat
#include <stdio.h>
#include <string.h>
#include <assert.h>
char *my_strncat(char *strDest, const char *strSource, size_t count)
{
	assert(strDest != NULL);
	assert(strSource != NULL);
	int len = strlen(strSource);
	char *ret = strDest;
	char *rat = strDest + len;
	while (count-- > 1)
	{
		*rat++ = *strSource++;
	}
	return ret;
}
int main()
{
	char arr1[20] = "hello ";
	char arr2[20] = " world";
	my_strncat(arr1, arr2, 7);
	printf("%s\n", arr1);
	return 0;
}
//3.模拟实现strncmp
#include <stdio.h>
#include <string.h>
#include <assert.h>
int my_strncmp (const char *str1, const char *str2, size_t count)
{
	assert(str1 != NULL);
	assert(str2 != NULL);
	while (count--)
	{
		if (*str1 == *str2)
		{
			str1++;
			str2++;
		}
		else
		{
			if ((*str1 - *str2)<0)
				return -1;
			else
				return 1;
		}
	}
	return 0;
}
int main()
{
	char arr1[] = "aaca";
	char arr2[] = "aada";
	int i = my_strncmp(arr1, arr2, 4);
	if (i > 0)
		printf("arr1 is greater than arr2\n");
	else if(i < 0)
		printf("arr1 is less than arr2\n");
	else
		printf("arr1 is eq arr2\n");
	return 0;
}
