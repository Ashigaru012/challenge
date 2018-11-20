#include <stdio.h>
#define NSIZE 3
#define MSIZE 5

int main(void)
{
    int i, j;
    int score[NSIZE][MSIZE];

    printf("3人の得点を科目順に入力\n");
    printf("英語 数学 理科 国語 社会\n");
    for (i = 0; i < NSIZE; i++)
    {
        printf("No.%d\n", i + 1);
        for (j = 0; j < MSIZE; j++)
        {
            scanf("%d", &score[i][j]);
        }
    }
    printf("3人の得点を科目順に表示\n");
    printf("      英語 数学 理科 国語 社会\n");
    for (i = 0; i < NSIZE; i++)
    {
        printf("No.%d:", i + 1);
        for (j = 0; j < MSIZE; j++)
        {
            printf("  %d", score[i][j]);
            if (j >= 4)
            {
                printf("\n");
            }
            else
            {
                printf(",");
            }
        }
    }
    return 0;
}
