//1.һ��������ֻ�����������ǳ���һ�Σ������������ֶ����������Ρ�
//�ҳ����������֣����ʵ�֡�
#include <stdio.h>
void find_diff_num(int arr[], int sz, int *px, int *py)
{
	//1.ȫ�����
	int num = 0;
	int i = 0;
	int pos = 0;
	for (i = 0; i < sz; i++)
	{
		num ^= arr[i];
	}	
	//2.�ҳ���������Ϊ1��λ
	for (i = 0; i < 32; i++)
	{
		if (((num >> i) & 1) == 1)
		{
			pos = i;
			break;
		}
	}
	//3.�������
	for (i = 0; i < sz; i++)
	{
		if (((arr[i] >> pos) & 1) == 1)
		{
			*px ^= arr[i];
		}
		else
		{
			*py ^= arr[i];
		}
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,2,3,4,1,6 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int n1 = 0;
	int n2 = 0;
	find_diff_num(arr, sz, &n1, &n2);
	printf("%d %d\n", n1, n2);
	return 0;
}
//2.����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֡�
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int money = 0;
	int total = 0;
	int empty = 0;
	scanf("%d", &money); 
	total = money;
	empty = money;
	while(empty > 1)
	{
		total += empty / 2;
		empty = empty / 2 + empty % 2;
	}
	printf("%d\n", total);
	return 0;
}
//3.ģ��ʵ��strcpy
#include <stdio.h>
#include <assert.h>
char* my_strcpy(char* dest, const char* src)
{
	char *ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	while(*dest++ = *src++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr[20] = {0};
	my_strcpy(arr, "hellow world");
	printf("%s\n", arr);
	return 0;
}
//4.ģ��ʵ��strcat
#include <stdio.h>
#include <assert.h>
char*my_strcat(char*dest, const char* src)
{
	char *ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	while(*dest != '\0')
	{
		dest++;
	}
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[20] = "hello ";
	char arr2[] = "world";
	my_strcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}