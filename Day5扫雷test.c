#include"game.h"






//��������
void menu()
{
	printf("*********************\n");
	printf("***1.play   0.exit***\n");
	printf("*********************\n");
}

void game()
{
	//�����׵���Ϣ
	char mine[ROWS][COLS]={0};
	//�Ų��׵���Ϣ
	char show[ROWS][COLS]={0};
	//��ʼ��
	InitBoard(mine,ROWS,COLS,'0');
	InitBoard(show,ROWS,COLS,'*');
	//��ӡ����
	//Displayboard(mine,ROW,COL);
	Displayboard(show,ROW,COL);
	//������
	Setmine(mine,ROW,COL);
	Displayboard(mine,ROW,COL);
	//ɨ��
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
		printf("��ѡ��>\n");
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
				printf("�˳���Ϸ\n");
				break;
			}
			default:
			{
				printf("��������������\n");
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