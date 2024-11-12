//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	char s[101] = { 0 };
//	int arr[26] = { 0 };
//	scanf("%s", s);
//	int max = 0;
//	int min = 20;
//	int psa;
//	int tag = 0;//0非质数，1为质
//	for (int i = 0; s[i] > 0; i++)
//	{
//		arr[s[i] - 'a']++;
//	}
//	for (int i = 0; i < 26; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		if (arr[i] < min && arr[i] != 0)
//		{
//			min = arr[i];
//		}
//	}
//	psa = max - min;
//	if (psa == 0 || psa == 1)
//	{
//		tag = 1;
//	}
//	else
//	{
//		for (int i = 2; i <= sqrt(psa); i++)
//		{
//			if (psa % i == 0)
//			{
//				tag = 1;
//			}
//		}
//	}
//	if (tag)
//	{
//		printf("No Answer\n");
//		printf("0\n");
//	}
//	else
//	{
//		printf("Lucky Word\n");
//		printf("%d\n", psa);
//	}
//	return 0;
//}