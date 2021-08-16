#include"game.h"


void InitBoard(char board[ROW][COL],int row,int col)//初始化棋盘
{
	int i;
	int j;
	for (i=0;i<row;i++)
	{
		for (j=0;j<col;j++)
			board[i][j]=' ';
	}
}


void Displayboard(char board[ROW][COL],int row,int col)//打印棋盘
{
	int i;
	for (i=0;i<row;i++)
	{
		//数据行
		int j;
		for (j=0;j<col;j++)
		{
			printf(" %c ",board[i][j]);
			if (j<col-1)
			{
				printf("|");
			}
			
			
		}
		printf("\n");//换行
		if (i<row-1)
		{
			//分割行
			int j;
			for (j=0;j<col;j++)
			{
				printf("---");
				if (j<col-1)
				{
					printf("|");
				}
			}
		}
		printf("\n");
	}
	
}


void Player_move(char board[ROW][COL],int row,int col)
{
	int x=0;
	int y=0;
	printf("玩家先走\n");
	while(1)
	{
		printf("请输入要下的坐标：>");
		scanf("%d%d",&x,&y);
	
		if(x>=1&&x<=row&&y>=1&&y<=col)
		{
			if(board[x-1][y-1]==' ')
			{
				board[x-1][y-1]='*';
				break;
			}else
			{
				printf("已有落子!请重新输入\n");
				
			}
			
		}else
		{
			printf("错误！请重新输入\n");
			
		}
	}
}


void Computer_move(char board[ROW][COL],int row,int col)
{
	int x=0;
	int y=0;
	printf("电脑先走\n");
	while(1)
	{
		x=rand()%row;
		y=rand()%col;
		if(board[x][y]==' ')
		{
			board[x][y]='#';
			break;
		}
	}
}



char Iswin(char board[ROW][COL],int row,int col)
{
	int i=0;
	int j=0;
	for(i=0;i<row;i++)//横3
	{
		if(board[i][0]==board[i][1]&&board[i][1]==board[i][2]&&board[i][1]!=' ')
		{
			return board[i][1];
		}
	}
	for(i=0;i<col;i++)//竖3
	{
		if(board[0][i]==board[1][i]&&board[1][i]==board[2][i]&&board[1][i]!=' ')
		{
			return board[1][i];
		}
	}
	//斜对角
	if(board[0][0]==board[1][1]&&board[1][1]==board[2][2]&&board[1][1]!=' ')
		{
			return board[1][1];
		}
	if(board[2][0]==board[1][1]&&board[1][1]==board[0][2]&&board[1][1]!=' ')
		{
			return board[1][1];
		}
	if(1==Isfull(board,ROW,COL))//是否平局
	{
		return 'q';
	}else
	{
		return 'c';//游戏继续
	}
}

//1，满了
//0，没满
int Isfull(char board[ROW][COL],int row,int col)
{
	int i;
	int j;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(board[i][j]==' ')
			{
				return 0;//0，没满
			}
		}
	}
	return 1;//1，满了
}
