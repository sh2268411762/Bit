//#include <stdio.h>
//#include <math.h>
//#include <stdlib.h>
//#include <time.h>
//#include <Windows.h>


////�ṹ�崫��
//struct S
//{
//	char data[1000];
//	int n;
//};
//
//void Print1(struct S s_)
//{
//	printf("%s %d\n", s_.data, s_.n);
//}
//
//void Print2(struct S* ps)
//{
//	printf("%s %d\n", ps->data, ps->n);
//}
//int main(void)
//{
//	struct S s = { "����",100 };
//	int time1 = 0;
//	int time2 = 0;
//	int start = 0;
//	int end = 0;
//	int i = 0;
//	start = GetTickCount();
//	for (i = 0; i < 10000; i++)	
//	{
//		Print1(s);
//	}
//	end = GetTickCount();
//	time1 = end - start;
//	start = GetTickCount();
//	for (i = 0; i < 10000; i++)	
//	{
//		Print2(&s);
//	}
//	end = GetTickCount();
//	time2 = end - start;
//	printf("time1=%d  time2=%d\n", time1, time2);
//	return 0;
//}//����ַ�Ϻ�


//struct Point
//{
//	int x;
//	int y;
//};
//struct Node
//{
//	int date;
//	struct Point p;
//	struct Node* next;//�ṹ��ָ��
//}n2 = { 56,{6,8},NULL };
//struct Stu    //�ṹ������   �ṹ���ǩ
//{
//	char name[20];
//	int age;
//	char sex[20];
//}S1,S2,S3;//�ڲ�Ϊ��Ա�б�
//int main(void)
//{
//	struct Stu S = {"����",27,"��"};//S�ֲ�������S1��S2��S3Ϊȫ�ֱ���
//	printf("%s  %d  %s\n", S.name, S.age, S.sex);
//
//	struct Node n1 = { 20,{5,6},NULL };
//	printf("%d %d\n", n1.p.x, n1.p.y);//Ѱ��x��y
//	printf("%d %d\n", n2.p.x, n2.p.y);//Ѱ��x��y
//
//	return 0;
//}