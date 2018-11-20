//306218
#include <stdio.h>
#define NSIZE 3
#define MSIZE 4

int main(void)
{
    int i, j;
    int score[NSIZE][MSIZE];
    printf("住人の年齢を入力して下さい\n");
    for (i = 0; i < NSIZE; i++)
    {
        printf("<< %d階 >>\n", i + 1);
        for (j = 0; j < MSIZE; j++)
        {
            printf("%d号室:", j + 1);
            scanf("%d", &score[i][j]);
        }
    }
    printf("\n<< 年齢見取図 >>\n");
    for (i = 2; i >= 0; i--)
    {
        printf("[%d階]", i + 1);
        for (j = 0; j < MSIZE; j++)
        {
            printf(" ");
            printf("(%d号室)%d歳", j + 1, score[i][j]);
        }
        printf("\n");
    }
    return 0;
}
