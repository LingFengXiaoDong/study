#include"game.h"

void InitBoard(char board[ROWS][COLS],int rows,int cols,char set)
{
	int i;
	int j;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			board[i][j]=set;
		}
	}
}


void Displayboard(char board[ROWS][COLS],int row,int col)
{
	int i;
	int j;
	for(i=0;i<=col;i++)//�к�
	{
		printf("%d ",i);
	}
	printf("\n");
	for(i=1;i<=row;i++)
	{ 
		printf("%d ",i);
		for(j=1;j<=col;j++)
		{
			printf("%c ",board[i][j]);
		}
		printf("\n");
	}
}

void Setmine(char board[ROWS][COLS],int row,int col)
{
	int count=EASY_COUNT;
	while(count)
	{
		int x=rand()%row+1;//ģ9=0~8����+1=0~9
		int y=rand()%col+1;
		if (board[x][y]=='0')
		{
			board[x][y]='1';
			count--;
		}
	}
	
}	

void Findmine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col)
{
	int x=0;
	int y=0;
	int win=0;

	while(win<row*col-EASY_COUNT)
	{
		printf("��������������->\n");
		scanf("%d%d",&x,&y);
		if(x>=1&&x<=row&&y>=1&&y<=col)
		{
			if(mine[x][y]=='1')//��
			{
				printf("�����ˣ���û��\n");
				Displayboard(mine,row,col);
				break;
			}else//����
			{
				//������Χ����
				int count = get_mine_count(mine,x,y);
				
				show[x][y]=count+'0';
				Displayboard(show,row,col);
				win++;
			}
			
		}else
		{
			printf("����������\n");
		}
	}
	if(win==col*row-EASY_COUNT)
	{
		printf("��ϲ�����׳ɹ�\n");
		Displayboard(mine,row,col);//չʾ��
	}
}

int get_mine_count(char mine[ROWS][COLS],int x,int y)
{
	return 
		   mine[x-1][y]+
		   mine[x-1][y-1]+
		   mine[x][y-1]+
		   mine[x+1][y-1]+
		   mine[x+1][y]+
		   mine[x+1][y+1]+
		   mine[x-1][y+1]+
		   mine[x][y+1]-8*'0';
}






