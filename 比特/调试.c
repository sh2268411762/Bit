#include <stdio.h>

int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
		printf("hehe\n");
	}
	/*for (i = 0; i < 10; i++)
	{
		arr[i] = 0;
		printf("hehe\n");
	}*/
	/*printf("%p\n", &i);
	printf("%p\n", arr);*/
	return 0;
}

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}
//Debug   ���԰汾������������Ϣ�����Ҳ����κ��Ż������ڳ���Ա���Գ���
//Release �����汾�������˸����Ż���ʹ�ó����ڴ����С�������ٶ��϶������ŵģ��Ա��û��ܺõ�ʹ��
//�����ϵ�  �����ϵ㣬�һ���ѡ������