////2.ʹ�ÿɱ������ʵ�ֺ���������������ƽ��ֵ��
//#include <stdio.h>
//#include <stdarg.h>
//int Average(int n, ...)
//{
//	va_list arg;
//	int i = 0;
//	int sum = 0;
//	va_start(arg, n);//��ʼ��argΪδ֪�����б�ĵ�һ�������ĵ�ַ
//	for (i = 0; i < n; i++)
//	{
//		sum += va_arg(arg, int);
//	}
//	return sum / n;
//	va_end(arg);
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int avg1 = Average(2, a, b);
//	int avg2 = Average(3, a, b, c);
//	printf("%d\n", avg1);
//	printf("%d\n", avg2);
//	return 0;
//}
////3.ʹ�ÿɱ������ʵ�ֺ������������������ֵ��
//#include <stdio.h>
//#include <stdarg.h>
//int Max(int n, ...)
//{
//	int max = 0;
//	int i = 0;	
//	va_list arg;
//	va_start(arg, n);
//	max = va_arg(arg, int);
//	for (i = 1;i < n; i++)
//	{
//		int tmp = va_arg(arg,int );
//		if (tmp > max)
//		{
//			max = tmp;
//		}
//	}
//	va_end(arg);
//	return max;
//}
//int main()
//{
//	int max1 = Max(2, 1, 4);
//	int max2 = Max(3, 3, -1, -2);
//	printf("%d\n", max1);
//	printf("%d\n", max2);
//	return 0;
//}
//
//4.1.ģ��ʵ��printf���������������Ĺ���
#include<stdio.h>
#include<stdarg.h>
#include<assert.h>
void show(int n)
{//������͵�ÿһλ
	if (n>9)
	{
		show(n / 10);
	}
	putchar(n % 10 + '0');
}
void  print(const char *format,...)
{
	va_list arg;
	va_start(arg, format);
	while(*format)
	{
		switch (*format)
		{
			case 's'://�ַ���
			{
				char *ret = va_arg(arg, char*);
				while (*ret)
				{
					putchar(*ret);
						ret++;
				}
			}
				break;
			case 'c'://�ַ�
			{
				int  ch = va_arg(arg, char);
				while (ch)
				{
					putchar(ch);
					ch++;
				}
			}
				break;
			case'd'://������
			{
				int ret = va_arg(arg, int);
				show(ret);
			}
			    break;
			default:
				putchar(*format);
				break;
		}
		format++;
	}
}
int main()
{
	print("s c d\n", "hello", 'b',100);
	return 0;
}
//void show(int n)
//{
//	if (n>9)
//	{
//		show(n / 10);
//	}
//	putchar(n % 10 + '0');
//}
//
//void print(const char *format, ...)
//{
//	va_list arg;
//	va_start(arg, format);
//	while (*format)
//	{
//		switch (*format)
//		{
//		case 's':
//		{
//			char *ret = va_arg(arg, char*);
//			while (*ret)
//			{
//				putchar(*ret);
//				ret++;
//			}
//		}
//		break;
//		case 'd':
//		{
//			int ret = va_arg(arg, int);
//			show(ret);
//		}
//		break;
//		case 'c':
//		{
//			int ch = va_arg(arg, char);
//			putchar(ch);
//		}
//		break;
//		default:
//			putchar(*format);
//			break;
//		}
//		format++;
//	}
//}
//
//int main()
//{
//	print("d s c\n", 100, "hehe", 'w');
//	return 0;
//}

// 
//��������溯���ĵ��á� 
//print("s ccc d.\n","hello",'b','i','t'��100); 
//����ԭ�ͣ� 
//print(char *format, ...) 
// 
