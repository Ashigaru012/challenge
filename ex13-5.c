#include <stdio.h>
#define N 10
#define M 10

typedef struct
{
    int data[2];
    char id_num[M];
} DATA;

void average_calc(DATA id_data[N], double mean[], int no);
int max_calc(double mean[], int no);

int main(void)
{

    double con[M];
    int n, i, k, j;
    int func_call;
    double max = -9999.0;
    DATA id_data[N];

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
        printf("データNo. %dのID番号:", i + 1);
        scanf("%s", id_data[i].id_num);
    }
    printf("各IDのデータを入力して下さい\n");
    for (i = 0; i < n; i++)
    {
        printf("%s\n", id_data[i].id_num);
        do
        {
            printf("データNo. %d-a:", i + 1);
            scanf("%d", &id_data[i].data[0]);
            if (id_data[i].data[0] > 100 || id_data[i].data[0] < 0)
            {
                printf("入力データが100を超えているか負です\n");
            }
        } while (id_data[i].data[0] > 100 || id_data[i].data[0] < 0);

        do
        {
            printf("データNo. %d-b:", i + 1);
            scanf("%d", &id_data[i].data[1]);
            if (id_data[i].data[1] > 100 || id_data[i].data[1] < 0)
            {
                printf("入力データが100を超えているか負です\n");
            }

        } while ((id_data[i].data[1] > 100 || id_data[i].data[1] < 0));
    }

    printf("\n入力された値を表示します\n");
    for (i = 0; i < n; i++)
    {
        printf("[%s]", id_data[i].id_num);
        printf(" (a)   %d (b)   %d\n", id_data[i].data[0], id_data[i].data[1]);
    }

    printf("\n各データ組の平均値は以下の通りです\n");
    for (i = 0; i < n; i++)
    {
        average_calc(id_data, con, n);
        printf("[%s] %.1lf\n", id_data[i].id_num, con[i]);
    }
    for (i = 0; i < n; i++)
    {

        if (max < con[i])
        {
            max = con[i];
        }
    }
    func_call = max_calc(con, n);
    printf("\n平均値の最大値は%sの%.1lfです\n", id_data[func_call].id_num, max);

    return 0;
}

void average_calc(DATA id_data[N], double mean[], int no)
{
    int i;
    int sum = 0;
    double ave = 0.0;
    for (i = 0; i < no; i++)
    {
        sum = id_data[i].data[0] + id_data[i].data[1];
        ave = (double)sum / 2;
        mean[i] = ave;
    }
}

int max_calc(double mean[], int no)
{
    int max = -9999;
    int i;
    for (i = 0; i < no; i++)
    {
        if (max < mean[i])
        {
            max = i;
        }
    }
    return max;
}