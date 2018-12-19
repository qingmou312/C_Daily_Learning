//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int count_one_bits(unsigned int value)
//{
//	int i;
//	for  (i = 0;value!= 0;value = value >> 1 )
//	{
//		if (value % value != 2)
//		{
//             i++;
//		}
//	}
//	printf("该数字的2进制中有%d个'1'\n", i);
//	return 0;
//    // 返回 1的位数 
//}
//int main()
//{
//	int j = 0;
//	printf("请输入要计算的数字:");
//	scanf("%d", &j);
//	count_one_bits(j);
//	
//	return 0;
//}
//
//
//
//
//
//
//int main()
//{
//	int i = 0, j = 0, k = 0;
//	int arr[32];
//	printf("请输入一个十进制数:");
//	scanf("%d", &i);
//	for (j = 0; i != 0; j++)
//	{
//		arr[j] = i % 2;
//		i = i / 2;
//		k = j + 1;//获取二进制位的个数
//	}
//	for (; k < 32; k++)
//	{
//		arr[k] = 0;//剩下位数补零
//	}
//	printf("该数字的二进制奇数位为:");
//	for (j = 31; j >= 0; j -= 2)
//	{
//         printf("%d",arr[j]);
//	}
//	printf("\n");
//	printf("该数字的二进制偶数位为:");
//	for (j = 30; j >= 0; j -= 2)
//	{
//		printf("%d", arr[j]);
//	}
//	printf("\n");
//	return 0;
//}
//
//
//
//
//int main()
//{
//	int i = 0, j = 0, k = 0;
//	int arr[32];
//	printf("请输入一个十进制数:");
//	scanf("%d", &i);
//	printf("该数字的二进制为:");
//	for (j = 0; i != 0; j++)
//	{
//		arr[j] = i % 2;
//		i = i / 2;
//		k = j + 1;
//	}
//	for (; k <= 32; k++)
//	{
//		arr[k] = 0;
//	}
//	for ( j = 31;j >= 0; j--)
//	{
//         printf("%d", arr[j]);  
//	}
//	printf("\n");
//	return 0;
//}
//
//
//
//
//int main()
//{
//	int num1 = 0, num2 = 0;
//	int i = 0, count = 0;
//	printf("请输入两个数字:");
//	scanf("%d%d", &num1, &num2);
//	for (; i<32; i++)
//	{
//		if (num1 % 2 != num2 % 2)
//			count++;
//		num1 /= 2;
//		num2 /= 2;
//	}
//	printf("%d\n", count);
//	return 0;
//}
