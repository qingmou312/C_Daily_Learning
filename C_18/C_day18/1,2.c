////1.使用main函数的参数，实现一个整数计算器，程序可以接受三个参数，第一个参数“ - a”选项执行加法，“ - s”选项执行减法，“ - m”选项执行乘法，“ - d”选项执行除法，后面两个参数为操作数。
////
////例如：命令行参数输入：test.exe - a 1 2
////执行1 + 2输出3
//#include <stdio.h>
//#include <stdlib.h>
//int  Add(int a, int b)
//{
//	return a + b;
//}
//int  Sub(int a, int b)
//{
//	return a - b;
//}
//int  Mul(int a, int b)
//{
//	return a * b;
//}
//int  Div(int a, int b)
//{
//	return a / b;
//}
//
//int main(int _argc,char *_argv[],char *_get_initial_narrow_environment[])
//{
//	int ret = 0;
//	if (_argc != 4)
//	{
//		printf("参数有误\n");
//	}
//	switch (*(_argv[1] + 1))
//	{
//	case 'a':
//		ret = Add(atoi(_argv[2]), atoi(_argv[3]));
//		break;
//	case 's':
//		ret = Sub(atoi(_argv[2]), atoi(_argv[3]));
//		break;
//	case 'm':
//		ret = Mul(atoi(_argv[2]), atoi(_argv[3]));
//		break;
//	case 'd':
//		ret = Div(atoi(_argv[2]), atoi(_argv[3]));
//		break;
//	default:
//		printf("参数有误：%s", _argv[1]);
//		break;
//	}
//	printf("ret=%d\n", ret);
//	return 0;
//}
//2.写冒泡排序可以排序多个字符串。
#include <stdio.h>
#include <string.h>
int cmp(const void*p1, const void*p2)
{
	return (*(int*)p1 > *(int*)p2);
}
void _swap(void*p1, void*p2,int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		char tmp = *((char*)p1 + i);
		*((char*)p1 + i) =*((char*)p2 + i);
		*((char*)p2 + i) = tmp;
	}
}
void bubble_sort(void *base, int count, int size, int(*cmp)(void*, void*))
{
	int i = 0;
	int j = 0;
	for (i = 0; i < count - 1; i++)
	{
		for (j = 0; j < count - i - 1; j++)
		{
			if (cmp((char*)base + j * size, (char*)base + (j + 1)*size) > 0)
			{
				_swap((char*)base + j * size, (char*)base + (j + 1)*size, size);
			}
		}
	}
}
int main()
{
	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
	int i = 0;
	bubble_sort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), cmp);
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}
