//#include <stdio.h>
//
//int main(void)
//{
//	int arr[10];
//	//arr;//��Ԫ�ص�ַ
//	//&arr[0];//��Ԫ�ص�ַ
//	//&arr;//����ĵ�ַ
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
//		//printf("%d\n",*p++);//��ʹ�ã���++
//	}
//	puts("");
//}
//int main(void)
//{
//	int arr[10] = { 0 };
//	int* p = arr;//����������Ԫ�ص�ַ
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		*(p + i)=5;//�����±�ΪiԪ�صĵ�ַ,������
//	}
//	print(arr,sz);
//	return 0;
//}   //�������ʼ��Ϊ5
//
//int main(void)
//{
//	int a = 10;
//	int* p = &a;
//	int** pp = &p;//ppָ��int*���ͣ��ڶ���*˵��pp�Ǹ�ָ�������int*  ˵��ppָ��int*�ı���
//	int ***ppp=&pp;//����ָ��  4�ֽ�,int**  ˵��pppָ��int**�ı���
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
//}//��������ʽ����
//void print2(char** arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s\n", arr[i]);
//		printf("%s\n", *(arr + i));
//	}
//}//��ָ����ʽ����
//int main(void)
//{
//	//int a[10];//��������[int][int]   ���� []
//	//char c[4];//�ַ�����[char][char][char][char]
//	//int* arr[5];//����ָ������[int*][int*][int*][int*][int*]
//	//char* arr1[6];//�ַ�����ָ������
//
//	char* arr2[3] = { "����","����","����" };
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