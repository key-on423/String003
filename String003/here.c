#include <stdio.h>
char* arr(char arr1[30], char arr2);
int main()
{
	int i = 0;
	char arr1[] = "helloworld";
	char arr2 = 'i';
	char* stt;
	printf("������һ���ַ��Ҳ���һ��������û��(no q)\n");
	while (arr2 != 'q')
	{
		while ((arr2 = getchar()) == '\n')
			continue;//ȥ������Ŀ���
		if (arr2 == 'q')
			break;
		if ((stt = arr(arr1, arr2)) != NULL)
			printf("�ҵ����ַ�%c��λ����%p  (����q����)\n", *stt, stt);
		else
			printf("û�ҵ�,���Ա��(����q����)\n");
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
////��Ʋ���һ��������������һ���������β�ָ�����ַ������������в��ҵڶ����������β�ָ�����ַ��״γ��ֵ�λ�á�����ɹ����ú�������ָ����ַ���ָ��
////������ַ�����δ�ҵ�ָ���ַ����򷵻���ָ�롣��һ�������ĺ����в��Ըú�����ʹ��һ��ѭ���������ṩ����ֵ
//char* arr(char* st, char arr2);//Ҳ����д������char* arr(char st[30], char arr2)
//int main()
//{
//
//	char arr1[30];
//	char arr2 = ' ';
//	char* position;
//	printf("������һ���ַ���\n");
//	fgets(arr1, 30, stdin);
//	while (arr2 != EOF)
//	{
//		printf("����һ���ַ�ȥ���ң�EOF�˳���\n");
//		while ((arr2 = getchar()) == '\n')
//			continue;//ȥ���������Ļ��з�
//		if ((position = arr(arr1, arr2)) != NULL)
//			printf("�ҵ����ַ�%c��%p\n", *position, position);
//		else
//			printf("�ַ�%cû���ҵ����Ա��\n", arr2);
//	}
//	return 0;
//
//}
//char* arr(char* st, char arr2)//ͬ��Ҳ����д������char* arr(char st[30], char arr2)
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