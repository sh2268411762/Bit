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
//	//�����������������
//	int num = 0;
//	int ret = rand()%100+1;
//	//printf("%d\n", ret);
//		while (1)
//		{
//			printf("�������:>");
//			scanf("%d", &num);
//			if (num == ret)
//			{
//				printf("����\n");
//				break;
//			}
//			else if(num > ret)
//			{
//				printf("����\n");
//			}
//			else
//			{
//				printf("С��\n");
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
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//		case 0:
//			break;
//		default:
//			printf("�������󣡣�\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}