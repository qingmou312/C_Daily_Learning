//1.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void Move(char *dest, int sz, int k)
//{
//	int m = 0;
//	int n = 0;
//	for (n = 0; n < k; n++)//n=0    n=1
//	{
//		char tmp = dest[0];
//		for (m = 0; m < sz-1; m++)
//		{
//			dest[m] = dest[m + 1];
//		}
//		dest[m - 1] = tmp;
//	}
//}
//int main()
//{
//	char arr[] = "abcd";
//	int i = 0;
//	int sz = (sizeof(arr) / sizeof(arr[0]));
//	printf("请输入要旋转的字符个数:");
//	scanf("%d", &i);
//	Move(arr, sz, i);
//	printf("%s", arr);
//	printf("\n");
//}
//2.
//#include <stdio.h>
//#include <string.h>
//int Is_Move(char s1[], char s2[],int sz,int k)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < k; i++)
//	{
//		char tmp = s1[0];
//		for (j = 0; j< sz - 1; j++)
//		{
//			s1[j] = s1[j + 1];
//		}
//		s1[j - 1] = tmp;
//	}
//	if (0 == strcmp(s1, s2))
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	char s1[] = "abcd";
//	char s2[] = "cdab";
//	int k = 2;
//	int sz = sizeof(s1) / sizeof(s1[0]);
//	int ret = Is_Move(s1, s2, sz, k);
//	printf("%d\n", ret);
//	return 0;
//}
//
//#include <stdio.h>
//#include <string.h>
//int Judge(char s1[], char s2[])
//{
//	int i = 0;
//	int j = 0;
//	int len = strlen(s2);
//	int m = 0;
//	for (i = 0; i < len; i++)
//	{
//	    char p = s2[0];
//		for (j = 0; j < len - 1; j++)
//		{
//
//			s2[j] = s2[j + 1];
//		}
//		s2[j - 1] = p;
//	}
//	if (0 == strcmp(s1, s2))
//	{
//		return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	int ret = 0;
//	char s1[] = "AABCD";
//	char s2[] = "BCDAA";
//	ret = Judge(s1, s2);
//	/*if(ret==0)
//	printf("s2是s1旋转得到的\n");
//	else   printf("s2不是s1旋转得到的\n");*/
//	printf("%d\n", ret);
//	return 0;
//}

#include <stdio.h>
int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int a = 10;
	int b = 20;
	int ret = Add(a, b);
	printf("ret=%d\n", ret);
	return 0;
}
