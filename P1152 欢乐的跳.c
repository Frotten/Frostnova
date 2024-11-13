//#include <stdio.h>
//#include <stdlib.h>
//void InsertSort(int* arr, int n)
//{
//	for (int i = 0; i < n - 1; ++i)
//	{
//		int end = i;
//		int tem = arr[end + 1];
//		while (end >= 0)
//		{
//			if (tem < arr[end])
//			{
//				arr[end + 1] = arr[end];
//				end--;
//			}
//			else
//			{
//				break;
//			}
//		}
//		arr[end + 1] = tem;
//	}
//}
//int main()
//{
//	int count = 0;
//	int j = 0;
//	int N = 1;
//	int tag = 0;
//	int n;
//	scanf("%d", &n);
//	int* arr = (int*)malloc(sizeof(int) * n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int* arr1 = (int*)malloc(sizeof(int) * n + 1);
//	int* arr2 = (int*)malloc(sizeof(int) * n + 1);
//	for (int i = 0; i < n; i++)
//	{
//		arr1[i] = arr[i];
//	}
//	for (int i = 0; i < n-1; i++)
//	{
//		int tem = arr1[i] - arr1[i + 1];
//		if (tem < 0)
//		{
//			tem *= -1;
//		}
//		arr2[j] = tem;
//		if (arr2[j] == arr2[j - 1])
//		{
//			continue;
//		}
//		else
//		{
//			j++;
//		}
//	}
//	InsertSort(arr2, j);
//	for (n = 0; n < j; n++)
//	{
//		if (arr2[n] != N)
//		{
//			tag = 1;
//			printf("Not jolly");
//			break;
//		}
//		N++;
//	}
//	if (tag == 0)
//	{
//		printf("Jolly");
//	}
//	return 0;
//}