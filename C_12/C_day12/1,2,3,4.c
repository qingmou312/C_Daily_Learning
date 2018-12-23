//1.
//#include <stdio.h>
//unsigned int reverse_bit(unsigned int n)
//{
//	unsigned int ret = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++);
//	{
//		ret <<= 1;
//		ret |= ((n >> i) & 1);
//	}
//	return ret;
//}
//int main()
//{
//	int num = 25;
//	unsigned int ret = reverse_bit(num);
//	printf("%u\n", ret);
//	return 0;
//}
//2.
//#include <stdio.h>
//int Average(int x, int y)
//{
//	int ret = 0;
//	ret = x + (y - x) / 2;
//	return ret;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	c = Average(a,b);
//	printf("%d\n", c);
//	return 0;
//}
//3.
//#include <stdio.h>
//int Find(int arr[], int a)
//{
//	int ret = 0;
//	int i = 0;
//	for (i = 0; i < a; i++)
//	{
//		ret ^= arr[i];
//	}
//	return ret;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,1,2,3,4,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = Find(arr, sz);
//	printf("%d\n", ret);
//	return 0;
//}
//4.
#include <stdio.h>
#include <assert.h>
void reverse(char *left, char*right)
{
	assert(left);
	assert(right);
	while(left<right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
int my_strlen(const char* str)
{
	int count = 0;
	assert(str);
	while (*str)
	{
		count++;
		str++;
	}
	return count;
}
void reverse_str(char arr[])
{
	char *start = arr;
	//ÄæĞòÕû¸ö×Ö·û´®
	reverse(arr, arr + my_strlen(arr) - 1);
	//ÄæĞòµ¥´Ê
	while (*start)
	{
		char *end = start;
		while ((*end != ' ') && (*end != '\0'))
		{
			end++;
		}
		reverse(start, end - 1);
		if (*end != '\0')
			start = end + 1;
		else
			start = end;
	}
}
int main()
{
	char arr[] = " student a am i";
	reverse_str(arr);
	printf("%s\n", arr);
	return 0;
}


