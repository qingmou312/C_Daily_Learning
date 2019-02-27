#include"game.h"
void Init_Board(char board[ROWS][COLS], int rows, int cols, char set)
{
	memset(board, set, rows*cols*sizeof(board[0][0]));
}

void Print_Board(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= col; i++)
	{
		printf(" %d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf(" %d ", i);
		for (j = 1; j <= col; j++)
		{
			printf(" %c ", board[i][j]);
		}
		printf("\n");
	}
	
}

void Set_Mine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
void Find_Mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int step = 0;
	int i = 0;
	int j = 0;
	int win = 0;
	while (win<ROW*COL-EASY_COUNT)
	{
		printf("请输入排查坐标:");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("你被炸死了\n");
				Print_Board(mine, row, col);
				break;
			}
			else
			{
				Get_Around_Mine_Count(mine, show, x, y);
				win++;
				Print_Board(show, row, col);
			}
		}
		else
		{
			printf("该坐标无效\n");
		}
	}step++;
	if (win == ROW*COL - EASY_COUNT) 
	{
		printf("恭喜你，排雷成功！\n");
		Print_Board(mine, row, col);
	}
}

void Get_Mine_Count(char mine[ROWS][COLS],char show[ROWS][COLS], int x, int y)
{
	int count = 0;
	count=mine[x - 1][y] + mine[x - 1][y - 1] + mine[x][y - 1] + mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] + mine[x][y + 1] + mine[x - 1][y + 1] - 8 * '0';
	show[x][y] = count+'0';
}

void Get_Around_Mine_Count(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	Get_Mine_Count(mine, show, x, y);
	if (mine[x - 1][y] == '0')
		Get_Mine_Count(mine,show, x - 1, y);
	if (mine[x - 1][y - 1] == '0')
		Get_Mine_Count(mine,show, x - 1, y-1);
	if (mine[x][y - 1] == '0')
		Get_Mine_Count(mine, show, x, y - 1);
	if (mine[x + 1][y - 1] == '0')
		Get_Mine_Count(mine, show, x + 1, y - 1);
	if (mine[x + 1][y] == '0')
		Get_Mine_Count(mine, show, x+ 1, y );
	if (mine[x + 1][y + 1] == '0')
		Get_Mine_Count(mine, show, x + 1, y + 1);
	if (mine[x][y + 1] == '0')
		Get_Mine_Count(mine, show, x, y + 1);
	if (mine[x - 1][y + 1] == '0')
		Get_Mine_Count(mine, show, x - 1, y + 1);
}
