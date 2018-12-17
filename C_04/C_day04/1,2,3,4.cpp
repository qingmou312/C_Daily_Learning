//#include <stdio.h>
//int main ()
//{
//    int i = 0;
//	int j = 0;
//    for(i = 0;i<7;i++)
//	{
//		for(j = 0;j<i*2+1;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	 }
//	for(i = 0;i<6;i++)
//	{
//		for(j = 0;j<2*(6-i)-1;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//    return 0;
//
//}

//
//int main ()
//{
//	int i,a,b,c;
//	for (i = 100;i<1000;i++) 
//	{
//		a = i/100;
//		b = i/10%10;
//		c = i%10;
//		if (i == a*a*a+b*b*b+c*c*c)
//			printf("水仙花数：%d\t\n",i);
//	}
//	return 0;
//}




//int main()  
//{  
//    int a,i;  
//    int j = 0;  
//    int Sn = 0;
//	  printf ("请输入要计算的数字:");  
//    scanf("%d",&a); 
//    for(i=0;i<5;i++)  
//    {  
//        j=a+j*10; 
//        Sn=Sn+j;  
//    }  
//    printf("%d\n",Sn);  
//    return 0;    
//}




//int main ()
//{
//	int ch;
//	int count = 0;
//	while((ch = getchar()) !=EOF)
//	{
//		if(ch == '}'&&count == 0)
//		{
//			printf("不匹配\n");
//		}
//		if(ch == '{')
//		{
//			count++;
//		}
//		if(ch == '}'&&count != 0)
//		{
//			count--;
//		}
//	}
//	if(count == 0)
//	{
//		printf ("匹配\n");
//	}
//	else
//	{
//		printf ("不匹配\n");	
//	}
//	return 0;
//}