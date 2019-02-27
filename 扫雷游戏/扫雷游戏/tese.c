#include"game.h"
void game()
{
	char mine[ROWS][COLS] = { 0 };//布置雷数组
	char show[ROWS][COLS] = { 0 };//排查雷数组
	Init_Board(mine, ROWS, COLS,'0');//初始化数组‘0’
	Init_Board(show, ROWS, COLS,'*');//初始化数组‘*’
	Set_Mine(mine, ROW, COL);//布置雷
	//Print_Board(mine, ROW, COL);
	Print_Board(show, ROW, COL);
	Find_Mine(mine, show, ROW, COL);//排查雷

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
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}
