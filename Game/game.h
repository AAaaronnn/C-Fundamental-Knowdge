
#include <stdio.h> // ͷ�ļ����� -> ���� game.c �ļ��оͲ���Ҫ����#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// ��������
#define ROW 3
#define COL 3

// ��������
// ��ʼ������
void InitBoard(char board[ROW][COL], int row, int col);

// ��ӡ����
void DisplayBoard(char borad[ROW][COL], int row, int col);

// �������
void PlayerMove(char board[][COL], int row, int col);

// ��������
void ComputerMove(char board[][COL], int row, int col);

// �ж���Ӯ�� ��� -> * ���� -> # ƽ�� -> Q ��Ϸ���� -> C
char IsWin(char board[ROW][COL], int row, int col); 