//u306218
#include <stdio.h>
void print_board(int board[3][3]); /* プロトタイプ宣言 */
void mark_board(int board[3][3], int turn);

int main(void)
{
    int i, j;
    int turn = 1;
    int board[3][3]; /* 0で初期化 */

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            board[i][j] = 0;
        }
    }
    for (i = 1; i <= 9; i++)
    {
        mark_board(board, turn);
        print_board(board);
        if (turn == 1)
        {
            turn = -1;
        }
        else if (turn == -1)
        {
            turn = 1;
        }
    }
    return 0;
}

void print_board(int board[3][3])
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        printf("|");
        for (j = 0; j < 3; j++)
        {
            if (board[i][j] == 0)
            {
                printf(" |");
            }
            if (board[i][j] == 1)
            {
                printf("o|");
            }
            if (board[i][j] == -1)
            {
                printf("x|");
            }
        }
        printf("\n");
    }
}

void mark_board(int board[3][3], int turn)
{
    int i, j, col, line;

    if (turn == 1)
    {
        printf("oのターンです\n");
    }
    if (turn == -1)
    {
        printf("xのターンです\n");
    }
    printf("縦位置は？");
    scanf("%d", &col);

    printf("横位置は？");
    scanf("%d", &line);

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            board[col][line] = turn;
        }
    }
}
