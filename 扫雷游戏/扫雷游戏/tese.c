#include"game.h"
void game()
{
	char mine[ROWS][COLS] = { 0 };//����������
	char show[ROWS][COLS] = { 0 };//�Ų�������
	Init_Board(mine, ROWS, COLS,'0');//��ʼ�����顮0��
	Init_Board(show, ROWS, COLS,'*');//��ʼ�����顮*��
	Set_Mine(mine, ROW, COL);//������
	//Print_Board(mine, ROW, COL);
	Print_Board(show, ROW, COL);
	Find_Mine(mine, show, ROW, COL);//�Ų���

}
void menu()
{
	printf("**************************************\n");
	printf("*************   1.play   *************\n");
	printf("*************   0.exit   *************\n");
	printf("**************************************\n");

}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}
