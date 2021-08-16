#ifndef __GEMA_
#define __GEMA_

#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

#define ROW 3
#define COL 3

void InitBoard(char board[ROW][COL],int row,int col);
void Displayboard(char board[ROW][COL],int row,int col);
void Player_move(char board[ROW][COL],int row,int col);
void Computer_move(char board[ROW][COL],int row,int col);
char Iswin(char board[ROW][COL],int row,int col);
int Isfull(char board[ROW][COL],int row,int col);


#endif