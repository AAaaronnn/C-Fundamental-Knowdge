// ��Ϸ��غ�����ʵ��
#include "game.h"
void InitBoard(char board[ROW][COL], int row, int col)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            board[i][j] = ' ';
        }
    }
}

// �״� : ֻ������ 3*3 ������
// void DisplayBoard(char board[ROW][COL], int row, int col)
// {
//     int i = 0;
//     for (i = 0; i < row; i++)
//     {
//         printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
//         if (i<row-1)
//             printf("---|---|---\n");
//     }
// }

// �޸�
void DisplayBoard(char board[ROW][COL], int row, int col)
{
    int i = 0;
    for (i = 0; i < row; i++)
    {
        for (int j =  0; j < col; j++)
        {    // ��ӡ�ո� + ����
            printf(" %c ", board[i][j]);
            if (j < col-1)
            {
                printf("|");
            }
        }
        printf("\n");
        if (i < row-1)
        {
            for (int j = 0; j < col; j++)
            {   // ��ӡ���� + ����
                printf("---");
                if (j < col-1)
                {
                    printf("|");
                }
            }
            printf("\n");
        }
    }
}


void PlayerMove(char board[][COL], int row, int col)
{
    int x = 0;
    int y = 0;
    printf("�����\n");
    printf("������������꣺\n");
    scanf("%d %d ", &x, &y);
    // �ж�����ĺϷ���
    if (x >= 1 && x <= row && y >= 1 && y <= col)
    {
        // ����
        // �ж������Ƿ�ռ��
        if (board[x-1][y-1] == ' ')
        {
            board[x-1][y-1] == '*';
        }
        else
        {
            printf("���걻ռ��,����������");
        }
    }
    else
    {
        printf("����Ƿ�,��������");
    }
}

void ComputerMove(char board[][COL], int row, int col)
{
    printf("������:");
    int x = rand()%row;
    int y = rand()%col;
    while(1)
    {
        if (board[x][y] == ' ')
        {
        board = '#';
        }
    }
}

int IsFull(char board[ROW][COL], int row, int col)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col ; j++)
        {
            if (board[i][j] == ' ')
            {
                rteurn 0; //����δ��
            }
        }
    }
    return 1;
}
char IsWin(char board[ROW][COL], int row, int col);
{
    int i = 0;
    // �ж�����
    for (i = 0; i < row; i++)
    {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
        {
            return board[i][0];
        }
    }
    // �ж�����
    for (i = 0; i < col; i++)
    {
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
        {
            return board[1][i];
        }
    }
    // �ж϶Խ���
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
    {
        return board[1][1];
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
    {
        return board[1][1];
    }
    // �ж�ƽ��
    int ret = IsFull(board, row, col);
    if (ret == 1)
    {
        return 'Q';
    }
    // ����
    return 'C';
}