#include <stdio.h>
#include "game.h" // 引用头文件
void menu()
{
    printf("**********************************\n");
    printf("*********   1  play   ************\n");
    printf("*********   0  qiut   ************\n");
    printf("**********************************\n");
}
void game()
{
    char board[ROW][COL];
    // 初始化棋盘 -> 每个棋格都是空格
    InitBoard(board , ROW, COL);
    // 打印棋盘 -> 打印数组内容
    DisplayBoard(board, ROW, COL);
    // 开始下棋
    int ret = 0;
    while(1)
    {
        // 玩家下棋 
        PlayerMove(board, ROW, COL);
        DisplayBoard(board, ROW, COL);
        // 判断玩家是否赢得游戏
        char ret = IsWin(board, ROW, COL);
        if (ret != 'C') // 游戏继续
            break;
        // 电脑下棋
        ComputerMove(board, ROW, COL);
        DisplayBoard(board, ROW, COL);
        // 判断电脑是否赢得游戏
        char ret = IsWin(board, ROW, COL);
        if (ret != 'C')
            break;
    }
    if (ret == '*')
    {
        printf("玩家赢了\n");
        DisplayBoard(board, ROW, COL);
    }
    else if (ret == '#')
    {
        printf("电脑赢了\n");
        DisplayBoard(board, ROW, COL);
    }
    else
    {
        printf("平局\n");
    }

}
int main()
{
    int input = 0;
    srand((unsigned)time(NULL));
    do
    {
        menu();
        printf("请选择:");
        scanf("%d ", &input);
        switch(input)
        {
            case 1:
                printf("开始游戏\n");
                game();
                break;
            case 0:
                printf("退出游戏\n");
                break;
            default:
                printf("选择错误!\n");
                break;
        }
    } while (input);
    
    return 0;
}