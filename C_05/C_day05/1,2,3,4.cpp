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
//	printf("�����������µ�����:\n");
//	while (1)
//	{
//		scanf("%d", &i);//�û���������
//		if (i < num)
//		{
//			printf("��С��,����������:\n");
//		}
//		else if (i > num)
//		{
//			printf("�´���,����������:\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���!!!!\n");
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
//		printf("��ѡ��:");
//		scanf("%d", &j);
//		switch (j)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("��Ϸ�˳�\n");
//			break;
//		default:
//			printf("ѡ�����,������ѡ��:\n");
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
//}//����һ������int binary_search(int arr[], int k, int sz)�������в�������
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int n = -7;
//	i = binary_search(arr, n, sz);
//	if (i == -1)
//	{
//		printf("�Ҳ���%d\n",i);
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���%d\n", i);
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
		printf("����������:");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)
		{
			printf("������ȷ");
			break;
		}
		else
		{
			printf("�������,����������(�㻹��%d�λ���):",2-i);
		}
	}
	if (i == 3)
	{
		printf("��������\n");
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
//	printf("�������ַ�:\n");
//	while ((ch = getchar()) != EOF)//��ȡ�ַ���
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
//	printf("�������ַ�");
//	while ((i = getchar()) != EOF) //�ַ���Ϊ�վͻ�ȡ��ȡ��������־��ֹͣ
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
