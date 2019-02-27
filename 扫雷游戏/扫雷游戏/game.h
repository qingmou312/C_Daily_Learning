#ifndef __GAME_H__
#define __GAME_H__

#define EASY_COUNT 10

#define ROW 9
#define COL 9

#define _CRT_SECURE_NO_WARNINGS 1
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ROWS ROW+2
#define COLS COL+2

void Init_Board(char board[ROWS][COLS], int rows, int cols,char set);
void Set_Mine(char board[ROWS][COLS],int row,int col);
void Print_Board(char board[ROWS][COLS], int row,int col);
void Get_Around_Mine_Count(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y);
void Find_Mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
void Get_Mine_Count(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y);



#endif //__GAME_H__
