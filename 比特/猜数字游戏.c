//#include <stdio.h>
//#include <time.h>
//void menu()
//{
//	printf("*****************************\n");
//	printf("*******   1.play  ***********\n");
//	printf("*******   0.exit  ***********\n");
//	printf("*****************************\n");
//}
//void game()
//{
//	//生成随机数，猜数字
//	int num = 0;
//	int ret = rand()%100+1;
//	//printf("%d\n", ret);
//		while (1)
//		{
//			printf("请猜数字:>");
//			scanf("%d", &num);
//			if (num == ret)
//			{
//				printf("对了\n");
//				break;
//			}
//			else if(num > ret)
//			{
//				printf("大了\n");
//			}
//			else
//			{
//				printf("小了\n");
//			}
//		}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//		case 0:
//			break;
//		default:
//			printf("输入有误！！\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}