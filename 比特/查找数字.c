//#include <stdio.h>
//int BinarySearch(int arr[], int key, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left<=right)
//	{
//		int mid = left + (right - left) / 2;
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
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	int ret = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	ret = BinarySearch(arr, key, sz);
//	if (ret == -1)
//		printf("找不到\n");
//	else
//		printf("找到了:%d\n",ret);
//	return 0;
//}