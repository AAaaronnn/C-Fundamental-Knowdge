#include <stdio.h>
#include "game.h" // ����ͷ�ļ�
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
    // ��ʼ������ -> ÿ������ǿո�
    InitBoard(board , ROW, COL);
    // ��ӡ���� -> ��ӡ��������
    DisplayBoard(board, ROW, COL);
    // ��ʼ����
    int ret = 0;
    while(1)
    {
        // ������� 
        PlayerMove(board, ROW, COL);
        DisplayBoard(board, ROW, COL);
        // �ж�����Ƿ�Ӯ����Ϸ
        char ret = IsWin(board, ROW, COL);
        if (ret != 'C') // ��Ϸ����
            break;
        // ��������
        ComputerMove(board, ROW, COL);
        DisplayBoard(board, ROW, COL);
        // �жϵ����Ƿ�Ӯ����Ϸ
        char ret = IsWin(board, ROW, COL);
        if (ret != 'C')
            break;
    }
    if (ret == '*')
    {
        printf("���Ӯ��\n");
        DisplayBoard(board, ROW, COL);
    }
    else if (ret == '#')
    {
        printf("����Ӯ��\n");
        DisplayBoard(board, ROW, COL);
    }
    else
    {
        printf("ƽ��\n");
    }

}
int main()
{
    int input = 0;
    srand((unsigned)time(NULL));
    do
    {
        menu();
        printf("��ѡ��:");
        scanf("%d ", &input);
        switch(input)
        {
            case 1:
                printf("��ʼ��Ϸ\n");
                game();
                break;
            case 0:
                printf("�˳���Ϸ\n");
                break;
            default:
                printf("ѡ�����!\n");
                break;
        }
    } while (input);
    
    return 0;
}