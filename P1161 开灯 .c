//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[2000000] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		double a;
//		int b;
//		scanf("%lf %d", &a, &b);
//		for (int I = 1; I <= b; I++)
//		{
//			long long tem = (long long)(a * I);
//			arr[tem] ^= 1;
//		}
//	}
//	for (int i = 0; i <= 2000000; i++)
//	{
//		if (arr[i])
//		{
//			printf("%d", i);
//			return 0;
//		}
//	}
//}