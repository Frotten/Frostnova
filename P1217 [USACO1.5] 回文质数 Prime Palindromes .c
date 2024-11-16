//#include <stdio.h>
//#include <math.h>
//int isHWS(int num) 
//{
//	int temp = num, ans = 0;
//	while (temp != 0) 
//	{
//		ans = ans * 10 + temp % 10;
//		temp /= 10;
//	}
//	if (ans == num)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int a, b,tag = 0;
//	scanf("%d %d", &a, &b);
//	for (int i = a; i <= ((b>11)?11:b); i++)
//	{
//		tag = 0;
//		if (i < 10)
//		{
//			if (i == 1||i == 0)
//			{
//				tag = 1;
//			}
//			for (int j = 2; j <= sqrt(i); j++)
//			{
//				if (i % j == 0)
//				{
//					tag = 1;
//					break;
//				}
//			}
//			if (tag == 0)
//			{
//				printf("%d\n", i);
//			}
//		}
//		else if (i >= 10 && i < 100)
//		{
//			if (i == 11)
//			{
//				printf("11\n");
//				break;
//			}
//		}
//	}
//	tag = 0;
//	for (int i = ((a>100)?a:101); i <= b; i += 2)
//	{
//		if (i % 2 == 0)
//		{
//			i += 1;
//		}
//		if (i >= 1000 & i < 10000)
//		{
//			i = 10000;
//		}
//		if (i >= 100000 && i < 1000000)
//		{
//			i = 1000000;
//		}
//		if (i >= 10000000 && i < 100000000)
//		{
//			i = 100000000;
//		}
//		if (isHWS(i))
//		{
//			tag = 0;
//			for (int j = 2; j <= sqrt(i); j++)
//			{
//				if (i % j == 0)
//				{
//					tag = 1;
//					break;
//				}
//			}
//			if (tag == 0)
//			{
//				printf("%d\n", i);
//			}
//		}
//	}
//	return 0;
//}