//u306218
#include <stdio.h>
void print_board(int board[3][3]); /* プロトタイプ宣言 */
void mark_board(int board[3][3], int turn);
int judge(int board[3][3]);
void print_message(int result);

int main(void)
{
    int board[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    int turn = 1;
    int result;

    while ((result = judge(board)) == 2)
    {
        mark_board(board, turn);
        print_board(board);
        turn *= -1;
    }

    print_message(result);

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
    while (1)
    {
        while (1)
        {
            printf("縦位置は？");
            scanf("%d", &col);

            printf("横位置は？");
            scanf("%d", &line);

            if ((col >= 3 || col < 0) || (line >= 3 || line < 0))

            {
                printf("そこには置けません\n");
            }
            if ((col < 3 && col >= 0) || (line < 3 && line >= 0))
            {
                break;
            }
        }
        if (board[col][line] != 0)
        {
            printf("そこには置けません\n");
        }
        if (board[col][line] == 0)
        {

            board[col][line] = turn;
            break;
        }
    }
}
int judge(int board[3][3])
{
    int x, y;

    for (x = 0; x < 3; x++)
    {
        if (board[0][x] != 0)
        {
            if (board[0][x] == board[1][x] && board[1][x] == board[2][x])
            {
                return board[0][x];
            }
        }
    }
    for (y = 0; y < 3; y++)
    {
        if (board[y][0] != 0)
        {
            if (board[y][0] == board[y][1] && board[y][1] == board[y][2])
            {
                return board[y][0];
            }
        }
    }
    if (board[1][1] != 0)
    {
        if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
        {
            return board[1][1];
        }
        if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
        {
            return board[1][1];
        }
    }

    for (x = 0; x < 3; x++)
    {
        for (y = 0; y < 3; y++)
        {
            if (board[y][x] == 0)
            {
                return 2;
            }
        }
    }
    return 0;
}

void print_message(int result)
{
    if (result == 1)
    {
        printf("oの勝ちです\n");
    }
    else if (result == -1)
    {
        printf("xの勝ちです\n");
    }
    else if (result == 0)
    {
        printf("引き分けです\n");
    }
}