#pragma once
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#include<stdio.h>
#define EASY_COUNT 10
#include <stdlib.h>
#include <time.h>
//≥ı ºªØ∆Â≈Ã
void Initboard(char board[ROWS][COLS], int r, int c, char set);
//¥Ú”°∆Â≈Ã
void Displayboard(char board[ROW][COL], int r, int c);
//≤º÷√¿◊
void SetMine(char mine[ROW][COL], int r, int c);
//≈≈≤È¿◊
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int r, int c);