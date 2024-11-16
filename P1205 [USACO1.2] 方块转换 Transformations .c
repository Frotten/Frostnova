//#include <stdio.h>
//int test_1(char arr1[10][10], char arr2[10][10], int n)//转90
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (arr1[i][j] != arr2[j][n - 1 - i])
//			{
//				return 0;
//			}
//		}
//	}
//	return 1;
//}
//int test_2(char arr1[10][10], char arr2[10][10], int n)//转180
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (arr1[i][j] != arr2[n - 1 - i][n - 1 - j])
//			{
//				return 0;
//			}
//		}
//	}
//	return 1;
//}
//int test_3(char arr1[10][10], char arr2[10][10], int n)//转270（逆时针90
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (arr1[i][j] != arr2[n - 1 - j][i])
//			{
//				return 0;
//			}
//		}
//	}
//	return 1;
//}
//int test_4(char arr1[10][10], char arr2[10][10], int n)//镜像
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (arr1[i][j] != arr2[i][n - 1 - j])
//			{
//				return 0;
//			}
//		}
//	}
//	return 1;
//}
//int test_5(char arr1[10][10], char arr2[10][10], int n)//镜像加其他旋转
//{
//	char arr3[10][10];
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			arr3[i][j] = arr1[i][n - j - 1];
//		}
//	}
//	if (test_1(arr3, arr2, n) == 1)
//	{
//		return 1;
//	}
//	if (test_2(arr3, arr2, n) == 1)
//	{
//		return 1;
//	}
//	if (test_3(arr3, arr2, n) == 1)
//	{
//		return 1;
//	}
//	return 0;
//}
//int test_6(char arr1[10][10], char arr2[10][10], int n)//不改变
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (arr1[i][j] != arr2[i][j])
//			{
//				return 0;
//			}
//		}
//	}
//	return 1;
//}
//int main()
//{
//	char arr1[10][10] = { 0 };
//	char arr2[10][10] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%s", arr1[i]);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%s", arr2[i]);
//	}
//	if ((test_1(arr1,arr2,n)))
//	{
//		printf("1");
//	}
//	else if (test_2(arr1, arr2, n))
//	{
//		printf("2");
//	}
//	else if (test_3(arr1, arr2, n))
//	{
//		printf("3");
//	}
//	else if (test_4(arr1, arr2, n))
//	{
//		printf("4");
//	}
//	else if (test_5(arr1, arr2, n))
//	{
//		printf("5");
//	}
//	else if (test_6(arr1, arr2, n))
//	{
//		printf("6");
//	}
//	else
//	{
//		printf("7");
//	}
//	return 0;
//}
///*
//-@
//
//*/