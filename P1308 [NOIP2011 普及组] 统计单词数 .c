//#include <stdio.h>
//#include <string.h>
//#include <ctype.h>
//int main()
//{
//	int count = 0, tur = -1;
//	static char arr01[11] = { 0 };
//	gets(arr01);
//	static char arr02[1000001] = { 0 };
//	gets(arr02);
//	for (int i = 0; arr01[i] != '\0'; i++)
//	{
//		arr01[i] = tolower(arr01[i]);
//	}
//	for (int i = 0; arr02[i] != '\0'; i++)
//	{
//		arr02[i] = tolower(arr02[i]);
//	}
//	int size01 = strlen(arr01);
//	int size02 = strlen(arr02);
//	for (int i = 0 ,j = 0; i < size02; i++)
//	{
//		if (arr01[0] == arr02[i])
//		{
//			if (i == 0 && arr02[i + size01] == ' ')
//			{
//				int tag = 1;
//				for (j = 0; j < size01; j++, i++)
//				{
//					if (arr02[i] != arr01[j])
//					{
//						tag = 0;
//						break;
//					}
//				}
//				if (tag)
//				{
//					if (tur == -1)
//					{
//						tur = i - j;
//					}
//					count++;
//				}
//			}
//			else
//			{
//				if (arr02[i - 1] == ' ' && arr02[i + size01] == ' ')
//				{
//					int tag = 1;
//					for (j = 0; j < size01; j++, i++)
//					{
//						if (arr02[i] != arr01[j])
//						{
//							tag = 0;
//							break;
//						}
//					}
//					if (tag)
//					{
//						if (tur == -1)
//						{
//							tur = i - j;
//						}
//						count++;
//					}
//				}
//			}
//		}
//	}
//	if (count != 0)
//	{
//		printf("%d %d", count, tur);
//	}
//	else
//	{
//		printf("-1");
//	}
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#include <ctype.h>
//void search(char* aim, char* exa, int lenaim, int lenexa, int* count, int* location)
//{
//    *count = 0;
//    *location = -1;
//    char* p = exa;
//    while ((p = strstr(p, aim)) != NULL)
//    {
//        if ((p == exa || isspace(*(p - 1))) && (p + lenaim == exa + lenexa || isspace(*(p + lenaim))))
//        {
//            if (*count == 0)
//                *location = p - exa;
//            (*count)++;
//        }
//        p += lenaim;
//    }
//}
//int main()
//{
//    char aimword[100] = { 0 };
//    char example[5000000] = { 0 };
//    fgets(aimword, 20, stdin);
//    fgets(example, 5000, stdin);
//    aimword[strcspn(aimword, "\n")] = '\0';
//    example[strcspn(example, "\n")] = '\0';
//    int lenaim = strlen(aimword);
//    int lenexa = strlen(example);
//    for (int i = 0; i < lenaim; i++)
//    {
//        aimword[i] = tolower(aimword[i]);
//    }
//    for (int i = 0; i < lenexa; i++)
//    {
//        example[i] = tolower(example[i]);
//    }
//    int count = 0, location = -10;
//    search(aimword, example, lenaim, lenexa, &count, &location);
//    if (count == 0)
//        printf("-1");
//    else
//        printf("%d %d", count, location);
//    return 0;
//}