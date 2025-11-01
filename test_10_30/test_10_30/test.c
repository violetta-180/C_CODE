#define _CRT_SECURE_NO_WARNINGS

#include "game.h"
void menu()
{
	printf("**********************\n");
	printf("******  1.play  ******\n");
	printf("******  0.exit  ******\n");
	printf("**********************\n");
}
void game()
{
	char show[ROWS][COLS];//排查出雷的信息
	char mine[ROWS][COLS];//布置雷的数组
	//初始化棋盘
	Initboard(show, ROWS, COLS,'*');
	Initboard(mine, ROWS, COLS,'0');
	//打印棋盘
	Displayboard(show,ROW,COL);
	//Displayboard(mine, ROW, COL);
	//布置雷
	SetMine(mine,ROW,COL);
	//Displayboard(mine, ROW, COL);
	//排查雷
	FindMine(mine,show,ROW,COL);
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
	menu();
	printf("请选择:");
	scanf("%d", &input);
	switch (input)
	{
	case 1:
		game();
		break;
	case 0:
		printf("退出游戏");
		break;
	default:
		printf("选择错误,请重新选择!");
		break;
	}
	} while (input);
	

}
int main()
{
	test();
	return 0;
}