#include <stdio.h>
#define N 10

int main(void)
{
    int data[N][2];
    int n, i, k, j;
    do
    {
        printf("入力データ数を入力して下さい:");
        scanf("%d", &n);
        if (n > 10 || n < 0)
        {
            printf("データ数が10を超えているか負です\n");
        }
    } while (n > 10 || n < 0);
    for (i = 0; i < n; i++)
    {

        do
        {

            printf("データNo. %d-a:", i + 1);
            scanf("%d", &data[i][0]);
            if (data[i][0] > 100 || data[i][0] < 0)
            {
                printf("入力データが100を超えているか負です\n");
            }
        } while (data[i][0] > 100 || data[i][0] < 0);
        do
        {
            printf("データNo. %d-b:", i + 1);
            scanf("%d", &data[i][1]);
            if (data[i][1] > 100 || data[i][1] < 0)
            {
                printf("入力データが100を超えているか負です\n");
            }

        } while ((data[i][1] > 100 || data[i][1] < 0));
    }

    printf("\n入力された値を表示します\n");
    for (i = 0; i < n; i++)
    {
        printf("[No. %d]", i + 1);
        printf(" (a) %d (b) %d\n", data[i][0], data[i][1]);
    }

    return 0;
}
