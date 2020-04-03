////有三根杆(编号A、B、C)，在A杆自下而上、由大到小按顺序放置64个
////金盘(如下图)。游戏的目标：把A杆上的金盘全部移到C杆上，并仍保持
////原有顺序叠好。操作规则：每次只能移动一个盘子，并且在移动过程中
////三根杆上都始终保持大盘在下，小盘在上，操作过程中盘子可以置于
////A、B、C任一杆上
//
////(1)以C盘为中介，从A杆将1至n-1号盘移至B杆；
////(2)将A杆中剩下的第n号盘移至C杆；
////(3)以A杆为中介；从B杆将1至n-1号盘移至C杆
//
//#include <stdio.h>
//#include <string.h>
//
//void Move(char x, char y)
//{
//	printf("由%c-->%c ", x, y);
//}
//void HanoiT(int n, char A, char B, char C)
//{
//	if (n == 1)Move(A, C);       //	/*递归出口*/
//	else
//	{
//		HanoiT(n - 1, A, C, B);      //		/*将n-1个盘子从A通过C移动到B*/
//		Move(A, C);          //		/*将最大的盘子也就是n-（n-1）=1个盘子移动到C*/
//		HanoiT(n - 1, B, A, C);   //		将n-1个盘子从B通过A移动到C
//	}
//}
//int  main()
//{
//	int n;
//	printf("请输入你的圆盘数：");
//	scanf("%d", &n);
//	HanoiT(n, 'A', 'B', 'C');
//	return 0;
//}