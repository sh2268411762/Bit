//#include <stdio.h>
//#include <math.h>
//#include <stdlib.h>
//#include <time.h>
//#include <Windows.h>


////结构体传参
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
//	struct S s = { "张三",100 };
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
//}//传地址较好


//struct Point
//{
//	int x;
//	int y;
//};
//struct Node
//{
//	int date;
//	struct Point p;
//	struct Node* next;//结构体指针
//}n2 = { 56,{6,8},NULL };
//struct Stu    //结构体命名   结构体标签
//{
//	char name[20];
//	int age;
//	char sex[20];
//}S1,S2,S3;//内部为成员列表
//int main(void)
//{
//	struct Stu S = {"张三",27,"男"};//S局部变量，S1，S2，S3为全局变量
//	printf("%s  %d  %s\n", S.name, S.age, S.sex);
//
//	struct Node n1 = { 20,{5,6},NULL };
//	printf("%d %d\n", n1.p.x, n1.p.y);//寻找x和y
//	printf("%d %d\n", n2.p.x, n2.p.y);//寻找x和y
//
//	return 0;
//}