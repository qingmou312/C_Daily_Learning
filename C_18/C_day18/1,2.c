////1.ʹ��main�����Ĳ�����ʵ��һ��������������������Խ���������������һ�������� - a��ѡ��ִ�мӷ����� - s��ѡ��ִ�м������� - m��ѡ��ִ�г˷����� - d��ѡ��ִ�г�����������������Ϊ��������
////
////���磺�����в������룺test.exe - a 1 2
////ִ��1 + 2���3
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
//		printf("��������\n");
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
//		printf("��������%s", _argv[1]);
//		break;
//	}
//	printf("ret=%d\n", ret);
//	return 0;
//}
//2.дð����������������ַ�����
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
