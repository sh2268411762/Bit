//#include <stdio.h>
//int binary_search(int arr[],int key,int left,int right)//���岢����һ�����ֲ��Һ���
//{
//	int mid;
//	while (left <= right)
//	{
//		mid = left + (right - left) / 2;
//		if (arr[mid] < key)//��arr[mid]С��Ҫ���ҵ���ʱ
//		{
//			left = mid + 1;//����1
//		}
//		else if (arr[mid] > key)//��zrr[mid]����Ҫ���ҵ���ʱ
//		{
//			right = mid - 1;//�Ҳ��һ
//		}
//		else//��left����rightʱ
//		{
//			break;//����whileѭ��
//		}
//	}
//	if (left <= right)//����ѭ����left����right�������ʱleftС�ڵ���right��Ϊ�ҵ�
//	{
//		return mid;
//	}
//	else
//	{
//		return -1;//����Ϊ������û�и�����
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key;
//	printf("������Ҫ���ҵ����֣�-->");
//	scanf("%d", &key);//����keyΪҪ���ҵ�����
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
//	int ret = 0;
//	ret = binary_search(arr, key, 0, sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ�����������û��%d�����\n",key);
//	}
//	else
//	{
//		printf("�ҵ���\n%d���±��ǣ�%d\n",key, ret);
//	}
//	return 0;
//}