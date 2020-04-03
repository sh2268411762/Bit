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
//	printf("请输入要查找的数字：-->");
//	scanf("%d", key);
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
//	int ret = 0;
//	ret = binary_search(arr, key, 0, sz);
//	if (ret==-1)
//		printf("找不到\n");
//	else
//		printf("找到了\n7的下标是：%d\n",ret);
//	return 0;
//}