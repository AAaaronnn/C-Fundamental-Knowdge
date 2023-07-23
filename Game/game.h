
#include <stdio.h> // 头文件包含 -> 即在 game.c 文件中就不需要引用#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// 符号声明
#define ROW 3
#define COL 3

// 函数声明
// 初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col);

// 打印棋盘
void DisplayBoard(char borad[ROW][COL], int row, int col);

// 玩家下棋
void PlayerMove(char board[][COL], int row, int col);

// 电脑下棋
void ComputerMove(char board[][COL], int row, int col);

// 判断输赢： 玩家 -> * 电脑 -> # 平局 -> Q 游戏继续 -> C
char IsWin(char board[ROW][COL], int row, int col); 