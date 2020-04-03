//#include <stdio.h>
//
//int main(void)
//{
//	int arr[10];
//	//arr;//首元素地址
//	//&arr[0];//首元素地址
//	//&arr;//数组的地址
//	//printf("0x%p\n0x%p\n0x%p\n");
//
//	printf("%d\n",sizeof(arr));//40
//	printf("%d\n",sizeof(&arr));//4
//
//	return 0;
//}
//
//
//void  print(int*p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//		//printf("%d\n",*p++);//先使用，在++
//	}
//	puts("");
//}
//int main(void)
//{
//	int arr[10] = { 0 };
//	int* p = arr;//数组名，首元素地址
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		*(p + i)=5;//产生下标为i元素的地址,解引用
//	}
//	print(arr,sz);
//	return 0;
//}   //将数组初始化为5
//
//int main(void)
//{
//	int a = 10;
//	int* p = &a;
//	int** pp = &p;//pp指向int*类型，第二颗*说明pp是个指针变量，int*  说明pp指向int*的变量
//	int ***ppp=&pp;//三级指针  4字节,int**  说明ppp指向int**的变量
//	return 0;
//}
//
//
//void print1(char* arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s\n", arr[i]);
//	}
//}//以数组形式传入
//void print2(char** arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s\n", arr[i]);
//		printf("%s\n", *(arr + i));
//	}
//}//以指针形式传入
//int main(void)
//{
//	//int a[10];//整型数组[int][int]   …… []
//	//char c[4];//字符数组[char][char][char][char]
//	//int* arr[5];//整型指针数组[int*][int*][int*][int*][int*]
//	//char* arr1[6];//字符类型指针数组
//
//	char* arr2[3] = { "张三","李四","王五" };
//	int i = 0;
//	int sz = sizeof(arr2) / sizeof(arr2[0]);
//	print1(arr2, sz);
//	/*for (i = 0; i < sz; i++)
//	{
//		printf("%s\n", arr2[i]);
//	}*/
//	print2(arr2, sz);
//	return 0;
//}
//
//int main(void)
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 0,1,2,3,4 };
//	int arr4[] = { 1,1,1,1,1 };
//	int* arr[4] = { arr1,arr2,arr3,arr4 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		puts("");
//	}
//	return 0;
//}