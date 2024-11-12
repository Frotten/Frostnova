//#include <stdio.h>
//int main()
//{
//	//输入getchar的值不正常（并不是一个无符号字符）时会输出EOF（end of fail）
//	char password[20] = {0};
//	printf("请输入密码：");
//	scanf("%s", password);//数组本身就是地址，不需要取地址符
//	//由于输入的scanf后会自动跟随\n，getchar会读取到\n，所以需要用循环将无关字符清除
//	int clear = 0;
//	while ((clear = getchar()) != '\n')
//	{
//		;
//	}
//	printf("密码是否正确（T/F）");
//	int ret = getchar();
//	if ('T' == ret)
//	{
//		printf("True");
//	}
//	else
//	{
//		printf("False");
//	}
//
//	return 0;
//}