//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <assert.h>
////void my_strcpy(char *dest,char* src);
////char* mystrcpy(char* dest,const char* src);
//int  mystrlen(const char* dest)
//{
//	assert(dest != NULL);
//	int ret=0;
//	while (*dest != '\0')
//	{
//		ret++;
//		dest++;
//	}
//	return ret;
//}
//
//int main()
//{
//	int* prt = "abcdef";
//	int ret=mystrlen(prt);
//	printf("%d\n", ret);
//	return 0;
//}
//int main()
//{
//	const int a = 10;
//	int* p = &a;
//	//const int* p = &a;//������ַ
//	//int const* p = &a;//����ָ�����
//	*p = 20;
//	int n = 10;
//	int* const p = &n;//����p�ĵ�ַ
//	printf("a=%d\n", a);
//	return 0;
//}
//int main()
//{
//	//int a = 10;
//	const int a = 10;//const����a��ֵ����������ַ
//	int* p = &a;
//	*p = 20;
//	printf("a=%d\n", a);
//	return;
//}
//

//int main()
//{
//	char arr[20] = { 0 };
//	char* p = "hello";//p����h�ĵ�ַ
//	char* p1 = "bit";
//	my_strcpy(arr, p);//��p��ߵĵ�ַ��ָ����ַ���������arr
//	printf("%s\n", arr);
//	mystrcpy(arr, p1);
//	printf("%s\n", p1);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("HeHe!!!\n");
//		arr[i] = 0;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int sum = 0;//�������ս��
//	int n = 0;
//	int ret = 1;//����n�Ľ׳�
//	scanf("%d", &n);
//	for (j = 1; j <= n; j++)
//	{
//		ret *= j;
//		sum += ret;
//	}
//	/*for (j = 1; j <= n; j++)
//	{
//		ret = 1;
//		for (i = 1; i <= j; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}*/
//	printf("%d ", sum);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//		printf("hehe\n");
//	}
//	/*for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}*/
//	/*printf("%p\n", &i);
//	printf("%p\n", arr);*/
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}
//void my_strcpy(char* dest, char* src)
//{
//	while (*src!='\0')
//	{
//		*dest++ = *src++;
//	}//δ����  \0
//	*dest = *src;
//}
//char* mystrcpy(char* dest,const char* src)
//{
//	char* ret = dest;
//	assert(src != NULL);//����
//	assert(dest != NULL);
//	//��ָ���޷�������
//	while (*dest++ = *src++)
//	{
//
//	}//δ����  \0
//return ret;
//}
//Debug   ���԰汾������������Ϣ�����Ҳ����κ��Ż������ڳ���Ա���Գ���
//Release �����汾�������˸����Ż���ʹ�ó����ڴ����С�������ٶ��϶������ŵģ��Ա��û��ܺõ�ʹ��
//�����ϵ�  �����ϵ㣬�һ���ѡ������