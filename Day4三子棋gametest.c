


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

	char board[ROW][COL]={0};//������������Ϣ//ȫ���ո�
	
	InitBoard(board,ROW,COL);//��ʼ������
	
	Displayboard(board,ROW,COL);//��ӡ����

	while(1)
	{
		Player_move(board,ROW,COL);//�������
		Displayboard(board,ROW,COL);//��ӡ����
		
		ret=Iswin(board,ROW,COL);//�ж���Ӯ
		if (ret!='c')
		{
			break;
		}
		Computer_move(board,ROW,COL);//��������
		Displayboard(board,ROW,COL);//��ӡ����
		ret=Iswin(board,ROW,COL);
		if (ret!='c')
		{
			break;
		}
		
	}if (ret=='*')
	{
		printf("���Ӯ\n");
	}else if (ret=='#')
	{
		printf("����Ӯ\n");
	}else
	{
		printf("ƽ��\n");
	}

}


void test()
{
	int input=0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>\n");
		scanf("%d",&input);
		switch(input)
		{
			case 1:
			{
				printf("������\n");
				game();
				break;
			}
			case 0:
			{
				printf("�˳���Ϸ\n");
				
				break;
			}
			default:
			{
				printf("������ѡ��\n");
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