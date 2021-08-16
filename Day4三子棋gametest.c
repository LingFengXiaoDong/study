


#include"game.h"


void menu()
{
	printf("*********************\n");
	printf("***1.play   0.exit***\n");
	printf("*********************\n");
}


void game()
{
	char ret=0;

	char board[ROW][COL]={0};//数组存放棋盘信息//全部空格
	
	InitBoard(board,ROW,COL);//初始化棋盘
	
	Displayboard(board,ROW,COL);//打印棋盘

	while(1)
	{
		Player_move(board,ROW,COL);//玩家下棋
		Displayboard(board,ROW,COL);//打印棋盘
		
		ret=Iswin(board,ROW,COL);//判断输赢
		if (ret!='c')
		{
			break;
		}
		Computer_move(board,ROW,COL);//电脑下棋
		Displayboard(board,ROW,COL);//打印棋盘
		ret=Iswin(board,ROW,COL);
		if (ret!='c')
		{
			break;
		}
		
	}if (ret=='*')
	{
		printf("玩家赢\n");
	}else if (ret=='#')
	{
		printf("电脑赢\n");
	}else
	{
		printf("平局\n");
	}

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
				printf("三子棋\n");
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
				printf("请重新选择\n");
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