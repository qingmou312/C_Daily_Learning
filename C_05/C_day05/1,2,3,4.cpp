#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
//void menu()
//{
//	printf("*********************************************\n");
//	printf("***********      1,play       ***************\n");
//	printf("***********      0,exit       ***************\n");
//	printf("*********************************************\n");
//}
//void game()
//{
//	int num = rand() % 100 + 1;
//	int i = 0;
//	printf("请输入你所猜的数字:\n");
//	while (1)
//	{
//		scanf("%d", &i);//用户输入数字
//		if (i < num)
//		{
//			printf("猜小了,请重新输入:\n");
//		}
//		else if (i > num)
//		{
//			printf("猜大了,请重新输入:\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了!!!!\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int j;
//	do
//	{
//		menu();
//		printf("请选择:");
//		scanf("%d", &j);
//		switch (j)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("游戏退出\n");
//			break;
//		default:
//			printf("选择错误,请重新选择:\n");
//			break;
//		}
//	} while (j);
//	return 0;
//}
//
//
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] == k)
//			return mid;
//		if (arr[mid] < k)
//			left = mid + 1;
//		else
//			right = mid - 1;
//	}
//	return -1;
//}//定义一个函数int binary_search(int arr[], int k, int sz)用来进行查找数字
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int n = -7;
//	i = binary_search(arr, n, sz);
//	if (i == -1)
//	{
//		printf("找不到%d\n",i);
//	}
//	else
//	{
//		printf("找到了，下标是%d\n", i);
//	}
//	return 0;
//}
//
//
int main()
{
	int i;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码:");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)
		{
			printf("密码正确");
			break;
		}
		else
		{
			printf("密码错误,请重新输入(你还有%d次机会):",2-i);
		}
	}
	if (i == 3)
	{
		printf("机会用完\n");
	}
	return 0;
}
//
//
//
//
//
//int main()
//{
//	int ch;
//	printf("请输入字符:\n");
//	while ((ch = getchar()) != EOF)//获取字符串
//	{
//		if (ch >= 'a' && ch <= 'z')
//		{
//			putchar(ch - 32);
//		}
//		else if (ch >= 'A'&&ch <= 'Z')
//		{
//			putchar( ch + 32);
//		}	
//		else(ch >= 0 && ch <= 9);
//			putchar(NULL);
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i;
//	printf("请输入字符");
//	while ((i = getchar()) != EOF) //字符不为空就获取，取到结束标志就停止
//	{
//		if (i >= 'a'&&i <= 'z')
//			putchar(i - 32);
//		else if (i >= 'A'&&i <= 'Z')
//		{
//			putchar(i + 32);
//		}
//		else (i >= 0 && i <= 9)
//			putchar(NULL);
//		else {};
//	}
//	return 0;
//}
