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
//	//const int* p = &a;//保护地址
//	//int const* p = &a;//保护指针变量
//	*p = 20;
//	int n = 10;
//	int* const p = &n;//保护p的地址
//	printf("a=%d\n", a);
//	return 0;
//}
//int main()
//{
//	//int a = 10;
//	const int a = 10;//const保护a的值，不保护地址
//	int* p = &a;
//	*p = 20;
//	printf("a=%d\n", a);
//	return;
//}
//

//int main()
//{
//	char arr[20] = { 0 };
//	char* p = "hello";//p里存放h的地址
//	char* p1 = "bit";
//	my_strcpy(arr, p);//将p里边的地址所指向的字符串拷贝给arr
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
//	int sum = 0;//保存最终结果
//	int n = 0;
//	int ret = 1;//保存n的阶乘
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
//	}//未拷贝  \0
//	*dest = *src;
//}
//char* mystrcpy(char* dest,const char* src)
//{
//	char* ret = dest;
//	assert(src != NULL);//断言
//	assert(dest != NULL);
//	//空指针无法解引用
//	while (*dest++ = *src++)
//	{
//
//	}//未拷贝  \0
//return ret;
//}
//Debug   调试版本，包含调试信息，并且不做任何优化，便于程序员调试程序
//Release 发布版本，进行了各种优化，使得程序在代码大小和运行速度上都是最优的，以便用户很好地使用
//条件断点  创建断点，右击，选择条件