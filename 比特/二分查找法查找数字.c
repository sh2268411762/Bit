//#include <stdio.h>
//int binary_search(int arr[],int key,int left,int right)
//{
//	int mid;
//	while (left <= right)
//	{
//		mid = left + (right - left) / 2;
//		if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			break;
//		}
//	}
//	if (left <= right)
//	{
//		return mid;
//	}
//	else
//	{
//		return -1;
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key;
//	printf("������Ҫ���ҵ����֣�-->");
//	scanf("%d", key);
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
//	int ret = 0;
//	ret = binary_search(arr, key, 0, sz);
//	if (ret==-1)
//		printf("�Ҳ���\n");
//	else
//		printf("�ҵ���\n7���±��ǣ�%d\n",ret);
//	return 0;
//}