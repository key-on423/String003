#include <stdio.h>
char* arr(char arr1[30], char arr2);
int main()
{
	int i = 0;
	char arr1[] = "helloworld";
	char arr2 = 'i';
	char* stt;
	printf("请输入一个字符我查找一下我这有没有(no q)\n");
	while (arr2 != 'q')
	{
		while ((arr2 = getchar()) == '\n')
			continue;//去除多余的空行
		if (arr2 == 'q')
			break;
		if ((stt = arr(arr1, arr2)) != NULL)
			printf("找到了字符%c的位置是%p  (输入q结束)\n", *stt, stt);
		else
			printf("没找到,试试别的(输入q结束)\n");
	}
	printf("DONE!\n");
	return 0;
	
}
char* arr(char arr1[30],char arr2)
{
	int i = 0;
	while (arr1[i] != '\0')
	{
		
		if (arr1[i] == arr2)
		{
			return arr1;
		}
		i++;
	}
	return NULL;
}
//#include <stdio.h>
////设计测试一个函数，搜索第一个函数中形参指定的字符串，并在其中查找第二个函数的形参指定的字符首次出现的位置。如果成功，该函数饭后指向该字符的指针
////如果在字符串中未找到指定字符，则返还空指针。在一个完整的函数中测试该函数，使用一个循环给函数提供输入值
//char* arr(char* st, char arr2);//也可以写成类似char* arr(char st[30], char arr2)
//int main()
//{
//
//	char arr1[30];
//	char arr2 = ' ';
//	char* position;
//	printf("请输入一段字符串\n");
//	fgets(arr1, 30, stdin);
//	while (arr2 != EOF)
//	{
//		printf("输入一个字符去查找（EOF退出）\n");
//		while ((arr2 = getchar()) == '\n')
//			continue;//去除输入多余的换行符
//		if ((position = arr(arr1, arr2)) != NULL)
//			printf("找到了字符%c在%p\n", *position, position);
//		else
//			printf("字符%c没有找到试试别的\n", arr2);
//	}
//	return 0;
//
//}
//char* arr(char* st, char arr2)//同上也可以写成类似char* arr(char st[30], char arr2)
//{
//
//	while (*st != '\0')
//	{
//		if (*st == arr2)
//			return st;
//		else
//			st++;
//	}
//	return NULL;
//}