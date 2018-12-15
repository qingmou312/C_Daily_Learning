#include <stdio.h>
//int main()
//{
//	int i, j = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j < i; j++)
//		{ 
//			if (i%j == 0 && i != j)
//				break;
//		}
//		if (i == j)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int count = 0;//素数的个数  
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)//i可以整除j，看是否能被2到i的数整除  
//				break;
//		}
//		if (j == i)//i只能被自身整除  
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n count=%d \n", count);
//	system("pause");
//	return 0;
//}







int main()
{
	int i, j;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d\t", i,j,i*j);
		}
		printf("\n");
	}
	return 0;
}




//int main()
//{
//	int i;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0)
//		{
//			printf("%d\t", i);
//		}
//		if (i % 400 == 0)
//		{
//			printf("%d\t",i);
//		}
//	}
//	return 0;
//}

