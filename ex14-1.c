//u306218
#include <stdio.h>
void print_board(int board[3][3]); /* プロトタイプ宣言 */

int main(void)
{
    int board[3][3] = { {0, 0, 0},
                        {0, 0, 0},
                        {0, 0, 0} } /* 0で初期化 */

    board[0][1] = 1;
    board[0][2] = 1;
    board[1][2] = -1;
    board[1][1] = -1;

    print_board();
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
    }
}