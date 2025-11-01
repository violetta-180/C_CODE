#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void Initboard(char board[ROWS][COLS], int r, int c, char set)
{
	int i = 0;
	for (i = 0; i < r; i++)
	{
		int j = 0;
		for (j = 0; j < c; j++)
		{
			board[i][j] = set;
		}
	}
}
void Displayboard(char board[ROWS][COLS], int r, int c)
{
	printf("----- 扫雷游戏 -----\n");
	int i = 0;
	//打印列
	for (i = 0; i <= c; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= r; i++)
	{
		printf("%d ", i);
		int j = 0;
		for (j = 1; j <= c; j++)
		{
			printf("%c ",board[i][j]);
		}
		printf("\n");
	}
}
void SetMine(char mine[ROWS][COLS], int r, int c)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % r + 1;
		int y = rand() % c + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}
static int GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] + mine[x - 1][y - 1] + mine[x][y - 1] + mine[x + 1][y - 1] +
		mine[x + 1][y] + mine[x + 1][y + 1] + mine[x][y + 1] + mine[x - 1][y + 1] - 8 * '0';
}
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int r, int c)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < r*c - EASY_COUNT)
	{
		printf("请输入坐标:");
		scanf("%d %d", &x, &y);
		//判断坐标的合法性
		if (x >= 1 && x <= r && y >= 1 && y <= c)
		{
			if (mine[x][y] == '1')
			{
				printf("很可惜,你被炸死了\n");
				Displayboard(mine, r, c);
				break;
			}
			else
			{
				//如果这个函数没有被排查过
				if (mine[x][y] = '*')
				{
					//统计周围雷的数量
					int count = GetMineCount(mine, x, y);
					show[x][y] = count + '0';
					Displayboard(show, r, c);	
					win++;
				}
				else
				{
					printf("该坐标已被排查过");
				}
			}
		}
		else
		{
			printf("坐标错误,请重新输入");
		}
	}
	if (win == r * c - EASY_COUNT)
	{
		printf("恭喜你排雷成功!");
		Displayboard(mine, r, c);
	}
}