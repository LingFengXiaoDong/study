#include"game.h"






//函数声明
void menu()
{
	printf("*********************\n");
	printf("***1.play   0.exit***\n");
	printf("*********************\n");
}

void game()
{
	//布置雷的信息
	char mine[ROWS][COLS]={0};
	//排查雷的信息
	char show[ROWS][COLS]={0};
	//初始化
	InitBoard(mine,ROWS,COLS,'0');
	InitBoard(show,ROWS,COLS,'*');
	//打印棋盘
	//Displayboard(mine,ROW,COL);
	Displayboard(show,ROW,COL);
	//布置雷
	Setmine(mine,ROW,COL);
	Displayboard(mine,ROW,COL);
	//扫雷
	Findmine(mine,show,ROW,COL);
	//
	
}

void test()
{
	int input=0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：>\n");
		scanf("%d",&input);
		switch(input)
		{
			case 1:
			{
				game();
				break;
			}
			case 0:
			{
				printf("退出游戏\n");
				break;
			}
			default:
			{
				printf("错误请重新输入\n");
				break;
			}
		}
		
	}while(input);
}


int main()
{
	test();
	return 0;
}