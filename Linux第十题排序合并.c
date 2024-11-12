//#include <stdio.h>
//#include <stdlib.h>
//struct result
//{
//	int len;
//	int* arr;
//}result;
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
//void your_sort(int arr1[], int len1, int arr2[], int len2, struct result* res)
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	int* arr3 = (int*)malloc((len1 + len2 + 1) * sizeof(int));
//	if (arr3 == NULL) 
//	{
//		fprintf(stderr, "Memory allocation failed\n");
//		exit(1);
//	}
//	InsertSort(arr1, len1);
//	InsertSort(arr2, len2);
//	while (i < len1 && j < len2)
//	{
//		if (arr1[i] == arr2[j])
//		{
//			arr3[count] = arr1[j];
//			count++, j++, i++;
//			for (int I = 0; I != 1;)
//			{
//				if (arr1[i] == arr1[i - 1])
//				{
//					i++;
//					I = 1;
//				}
//			}
//			for (int I = 0; I != 1;)
//			{
//				if (arr2[j] == arr2[j - 1])
//				{
//					j++;
//					I = 1;
//				}
//			}
//		}
//		else
//		{
//			arr3[count] = ((arr1[i] > arr2[j]) ? arr1[i] : arr2[j]);
//			(arr1[i] > arr2[j]) ? i++ : j++;
//		}
//	}
//	if (i >= (len1 - 1) && j < (len2 - 1))
//	{
//		for (int f = 0; f < (len2 - 1 - j); count++,f++)
//		{
//			arr3[count] = arr2[j];
//		}
//	}
//	if (j >= (len2 - 1) && i < (len1 - 1))
//	{
//		for (int f = 0; f < (len1 - 1 - i); count++, f++)
//		{
//			arr3[count] = arr1[i];
//		}
//	}
//	InsertSort(arr3, count);
//	res->len = count;
//	res->arr = (int*)malloc(count * sizeof(int));
//	if (res->arr == NULL) 
//	{
//		fprintf(stderr, "Memory allocation failed\n");
//		free(arr3);
//		exit(1);
//	}
//	for (int k = 0; k < count; k++) 
//	{
//		res->arr[k] = arr3[k];
//	}
//	free(arr3);
//}
//
//int main()
//{
//    int arr1[] = { 2, 3, 1, 3, 2, 4, 6, 7, 9, 2, 10 };
//    int arr2[] = { 2, 1, 4, 3, 9, 6, 8 };
//    int len1 = sizeof(arr1) / sizeof(arr1[0]);
//    int len2 = sizeof(arr2) / sizeof(arr2[0]);
//
//	struct result result;//result为结构体
//    your_sort(arr1, len1, arr2, len2, &result);
//    for (int i = 0; i < result.len; i++) 
//    {
//        printf("%d ", result.arr[i]);
//    }
//    free(result.arr);
//    return 0;
//}