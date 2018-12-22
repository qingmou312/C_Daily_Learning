#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

#define Change(x) (((x&(0x55555555)) << 1)|((x >> 1)&(0x55555555)))
int main()
{
	int a = 10;//00000000 00000000 00000000 00001010
			   //01010101 01010101 01010101 01010101
			   //00000000 00000000 00000000 00000000
			   //00000000 00000000 00000000 00000101
			   //00000000 00000000 00000000 00000101
			   //00000000 00000000 00000000 00000101
	int b = Change(a);
	printf("%d\n", b);
	system("pause");
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
#define Max(x,y) x>y?x:y
int main()
{
	int a = 4;
	int b = 3;
	printf("a,b中最大的数为：%d\n",Max(a,b));
	system("pause");
	return 0;
}
