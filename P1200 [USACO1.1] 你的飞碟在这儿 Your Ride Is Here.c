//#include <stdio.h>
//int main()
//{
//	char name_Team[7], name_UFO[7];
//	int sum = 1;
//	int sum1 = 1;
//	scanf("%s", name_UFO);
//	scanf("%s", name_Team);
//	for (int j = 0; j < 7; j++)
//	{
//		for (int i = 1; i <= 26; i++)
//		{
//			if (name_Team[j] - 'A' + 1 == i)
//			{
//				sum *= i;
//			}
//		}
//	}
//	for (int j = 0; j < 7; j++)
//	{
//		for (int i = 1; i <= 26; i++)
//		{
//			if (name_UFO[j] - 'A' + 1 == i)
//			{
//				sum1 *= i;
//			}
//		}
//	}
//	if ((sum % 47) == (sum1 % 47))
//	{
//		printf("GO");
//	}
//	else
//	{
//		printf("STAY");
//	}
//	return 0;
//}