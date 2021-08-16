#include"game.h"


void InitBoard(char board[ROW][COL],int row,int col)//��ʼ������
{
	int i;
	int j;
	for (i=0;i<row;i++)
	{
		for (j=0;j<col;j++)
			board[i][j]=' ';
	}
}


void Displayboard(char board[ROW][COL],int row,int col)//��ӡ����
{
	int i;
	for (i=0;i<row;i++)
	{
		//������
		int j;
		for (j=0;j<col;j++)
		{
			printf(" %c ",board[i][j]);
			if (j<col-1)
			{
				printf("|");
			}
			
			
		}
		printf("\n");//����
		if (i<row-1)
		{
			//�ָ���
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
	printf("�������\n");
	while(1)
	{
		printf("������Ҫ�µ����꣺>");
		scanf("%d%d",&x,&y);
	
		if(x>=1&&x<=row&&y>=1&&y<=col)
		{
			if(board[x-1][y-1]==' ')
			{
				board[x-1][y-1]='*';
				break;
			}else
			{
				printf("��������!����������\n");
				
			}
			
		}else
		{
			printf("��������������\n");
			
		}
	}
}


void Computer_move(char board[ROW][COL],int row,int col)
{
	int x=0;
	int y=0;
	printf("��������\n");
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
	for(i=0;i<row;i++)//��3
	{
		if(board[i][0]==board[i][1]&&board[i][1]==board[i][2]&&board[i][1]!=' ')
		{
			return board[i][1];
		}
	}
	for(i=0;i<col;i++)//��3
	{
		if(board[0][i]==board[1][i]&&board[1][i]==board[2][i]&&board[1][i]!=' ')
		{
			return board[1][i];
		}
	}
	//б�Խ�
	if(board[0][0]==board[1][1]&&board[1][1]==board[2][2]&&board[1][1]!=' ')
		{
			return board[1][1];
		}
	if(board[2][0]==board[1][1]&&board[1][1]==board[0][2]&&board[1][1]!=' ')
		{
			return board[1][1];
		}
	if(1==Isfull(board,ROW,COL))//�Ƿ�ƽ��
	{
		return 'q';
	}else
	{
		return 'c';//��Ϸ����
	}
}

//1������
//0��û��
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
				return 0;//0��û��
			}
		}
	}
	return 1;//1������
}
