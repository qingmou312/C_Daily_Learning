//1.�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲���������
#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//�ǵݹ�
int Fib(int m)
{
	int i = 0;
	int j = 1;
	int k = 1;
	int p = 0;
	if (m <= 2)
		return 1;
	else
	{
		for (i = 2; i < m; i++)
		{
			p = j + k;
			j = k;
			k = p;


		}
	}
	return p;
}
//�ݹ�
int Fib(int m)
{
	if (m <= 2)
	{
		return 1;
	}
	else
	{
		return Fib(m-1) + Fib(m - 2);
	}
}
int main()
{
	int n = 0;
	printf("������Ҫ��ĵڼ���쳲���������");
	scanf("%d", &n);
	int ret=Fib(n);
	printf("%d\n", ret);
	return 0;
}
//2.��дһ������ʵ��n^k��ʹ�õݹ�ʵ��
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int pow(int n, int m)
{
	if (m < 1)
		return 1;
	return n * pow(n,m - 1);
}
int main()
{
	int n = 0;
	int m = 0;
	scanf("%d%d", &n, &m);
	int ret = pow(n, m);
	printf("%d\n", ret);
}
//3. дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ�
���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
#include <stdio.h>
int DigitSum(int i)
{
	if (i <= 9)
		return i;
	else
	{
		return i % 10 + DigitSum(i / 10);
	}
}
int main()
{
	int i = 1729;
	int ret = DigitSum(i);
	printf("%d\n", ret);
	return 0;
}
//4. ��дһ������reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C��������
//���ַ�������������
#include <stdio.h>
#include <assert.h>
int my_strlen(const char*str)
{
	int count = 0;
	assert(str);
	while(*str++!='\0')
	{
		count++;
	}
	return count;
}
void reverse_string(char*str)
{
	char tmp;
	int len = my_strlen(str);
	assert(str);
	tmp = *str;
	*str = *(str + len - 1);
	*(str + len - 1) = '\0';
	if(my_strlen(str+1)>1)
	    reverse_string(str + 1);
	*(str + len - 1) = tmp;
}
int main()
{
	char  arr[] = "abcdef";
	reverse_string(arr);
	printf("%s\n", arr);
	return 0;
}


//5.�ݹ�ͷǵݹ�ֱ�ʵ��strlen

#include <stdio.h>
#include <assert.h>
//�ǵݹ�
int my_strlen(const char*str)
{
	int count = 0;
	assert(str);
	while (*str++ != '\0')
	{
		count++;
	}
	return count;
}
//�ݹ�
int my_strlen(const char*str)
{
	assert(str);
	int count = 0;
	if (*str == '\0')
	{
		return 0;
	}
	else
	{
		return my_strlen(++str) + 1;
	}
}
int main()
{
	char arr[] = "abcdef";
	int ret = my_strlen(arr);
	printf("%d\n", ret);
	return 0;
}
//6.�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�

#include <stdio.h>
//�ݹ�
int fac(int num)
{
	if (num == 1)
	{
		return 1;
	}
	else
	{
		return num * fac(num - 1);
	}
}
//�ǵݹ�
int fac(int num)
{
	if (num == 1)
	{
		return 1;
	}
	else
	{
		int i= 0;
	    int k = 1;
		for (i = 1; i <= num; i++)
		{
			k *= i;
		}
		return k;	
	}
	
}
int main()
{
	int num = 4;
	int ret = fac(num);
	printf("%d\n", ret);
}
//7.�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
#include <stdio.h>
void print(int num)
{
	if (num > 9)
	{
		print(num / 10);	          
	}
	printf("%d ", num%10);
}
int main()
{
	int num = 1234;
	print(num);
	return 0;
}