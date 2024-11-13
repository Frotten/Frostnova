//#include <stdio.h>
//int main()
//{
//	int k = 0;
//	scanf("%d", &k);
//	int sub1,sub2,sub3,tag;
//	tag = 0;
//	for (int i = 10000; i <= 30000; i++)
//	{
//		sub1 = i / 100;
//		sub2 = (i / 10) % 1000;
//		sub3 = i % 1000;
//		if ((sub1 % k == 0) && (sub2 % k == 0) && (sub3 % k == 0))
//		{
//			tag = 1;
//			printf("%d\n", i);
//		}
//	}
//	if (tag==0)
//	{
//		printf("No");
//	}
//	return 0;
//}