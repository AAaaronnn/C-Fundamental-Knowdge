// 游戏相关函数的实现
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

// 弊处 : 只适用于 3*3 的棋盘
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

// 修改
void DisplayBoard(char board[ROW][COL], int row, int col)
{
    int i = 0;
    for (i = 0; i < row; i++)
    {
        for (int j =  0; j < col; j++)
        {    // 打印空格 + 竖线
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
            {   // 打印横线 + 竖线
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
    printf("玩家走\n");
    printf("输入下棋的坐标：\n");
    scanf("%d %d ", &x, &y);
    // 判断坐标的合法性
    if (x >= 1 && x <= row && y >= 1 && y <= col)
    {
        // 下棋
        // 判断坐标是否被占用
        if (board[x-1][y-1] == ' ')
        {
            board[x-1][y-1] == '*';
        }
        else
        {
            printf("坐标被占用,请重新输入");
        }
    }
    else
    {
        printf("坐标非法,重新输入");
    }
}

void ComputerMove(char board[][COL], int row, int col)
{
    printf("电脑走:");
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
                rteurn 0; //棋盘未满
            }
        }
    }
    return 1;
}
char IsWin(char board[ROW][COL], int row, int col);
{
    int i = 0;
    // 判断三行
    for (i = 0; i < row; i++)
    {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
        {
            return board[i][0];
        }
    }
    // 判断三列
    for (i = 0; i < col; i++)
    {
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
        {
            return board[1][i];
        }
    }
    // 判断对角线
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
    {
        return board[1][1];
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
    {
        return board[1][1];
    }
    // 判断平局
    int ret = IsFull(board, row, col);
    if (ret == 1)
    {
        return 'Q';
    }
    // 继续
    return 'C';
}