//#include <stdio.h>
//
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	if (arr[i] > arr[i + 1])
//	{
//		for (i = 0; i < sz - 1; i++)
//		{
//			int j = 0;
//			for (j = 0; j < sz - 1 - i; j++)
//			{
//				if (arr[j] > arr[j + 1])
//				{
//					int temp = arr[j];
//					arr[j] = arr[j + 1];
//					arr[j + 1] = temp;
//				}
//			}
//		}
//	}
//}
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	puts("");
//}
//int main()
//{//ð���������ڵ�����Ԫ�ؽ��бȽ�
//	int arr[] = {1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print_arr(arr, sz);
//	bubble_sort(arr, sz);
//	print_arr(arr,sz);
//	return 0;
//}