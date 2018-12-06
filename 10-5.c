#include <stdio.h>
#include <string.h>
#define N 50
#define M 4
void get_info(char name[][N], char grd[][N]);

void serch(char name[][N], char grd[][N], char inp[][N]);

int main(void)

{

    char name[M][N], grd[M][N], inp[M][N];

    get_info(name, grd);

    serch(name, grd, inp);

    return 0;
}

void get_info(char name[][N], char grd[][N])

{

    int i;

    for (i = 0; i < M; i++)

    {

        printf("[No.%d]\n名前:", i + 1);

        scanf("%s", name[i]);

        printf("出身地:");

        scanf("%s", grd[i]);

        printf("\n");
    }
}

void serch(char name[][N], char grd[][N], char inp[][N])

{

    int i;

    char ans[4], state[N];

    while (1)

    {

        printf("検索しますか？（yes or no）:");

        scanf("%s", ans);

        if (strcmp(ans, "no") == 0)

        {

            printf("終了\n");

            break;
        }

        else

        {

            printf("検索する都道府県名を入力して下さい:");

            scanf("%s", state);

            printf("\n<検索結果>\n");

            for (i = 0; i < M; i++)

            {

                if (strcmp(grd[i], state) == 0)

                {

                    printf("[No.%d]  %s  %s\n", i + 1, grd[i], name[i]);
                }
            }

            if (strcmp(grd[0], state) != 0 && strcmp(grd[1], state) != 0 && strcmp(grd[2], state) != 0 && strcmp(grd[3], state) != 0)

            {

                printf("該当者なし\n");
            }

            printf("\n");
        }
    }
}