//#define _CRT_SECURE_NO_WARNINGS 1
//#include<string.h>
//#include <stdio.h>
//1,
//void Mul_table(int n)
//{
//	int i , j;
//	for (i = 1; i <= n ; i++)
//	{
//		for (j = 1;j <= n; j++)
//		{
//			printf("%d*%d=%-4d", j, i, i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int k = 0;
//	printf("请输入要计算的数字:");
//	scanf("%d", &k);
//	Mul_table(k);
//	return 0;
//}
//
//
//
//2,
//void exchange(int *pn, int *pm)
//{
//	 *pn = *pn^*pm;
//	 *pm = *pn^*pm;
//	 *pn = *pn^*pm;
//}
//int main()
//{
//	int i = 10, j = 20;
//	printf("i=%d  j=%d\n", i, j);
//	exchange(&i, &j);
//	printf("i=%d  j=%d\n", i, j);
//	return 0;
//}
//
//
//
//3,
//int leap_year(int n)
//{
//	if (n % 4 == 0 && n % 100 != 0 || n % 100 == 0)
//	{
//		printf ("是闰年\n");
//	}
//	else
//	{
//		printf("不是闰年\n");
//	}
//	return 0;
//}
//int main()
//{
//	int y;
//	printf("请输入要判断的年份：");
//	scanf("%d", &y);
//	leap_year(y);
//	return 0;
//}
//
//
//4,
//void init(int arr[],int s)//初始化数组
//{
//	int i;
//	for (i = 0; i < s; i++)
//	{
//		arr[i]=i;
//		printf("%d ",arr[i]);
//	}
//}
//void empty(int arr[],int sz)//清空数组
//{
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//		printf("%d ", arr[i]);
//	}
//}
//void reverse(int a[], int n)//逆置数组
//{
//	int j;
//	for (j = n - 1; j >= 0; j--)
//	{
//		printf("%d ", a[j]);
//	}
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("初始化数组:");
//	init(arr, sz);
//	printf("\n");
//	printf("清空数组:");
//	empty(arr, sz);
//	printf("\n");
//	printf("数组逆置:");
//	reverse(arr, sz);
//	printf("\n");
//	return 0;
//}
//
//
//
//
//5,
//int prime_num(int i)
//{
//	int j;
//	for (j = 2; j < i; j++)
//	{
//		if (i%j == 0)
//		{
//			return 0;
//		}
//		return 1;
//	}
//}
//int main()
//{
//	int y;
//	printf("请输入要判断的数字：");
//	scanf("%d", &y);
//	int ret=prime_num(y);
//	if (ret)
//	{
//		printf("是素数\n");
//	}
//	else
//	{
//		printf("不是素数\n");
//	}
//	return 0;
//}
