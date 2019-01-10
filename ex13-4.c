#include <stdio.h>
#define N 10
#define M 10
void average_calc(int data[][2], double mean[], int no);
int max_calc(double mean[], int no);

int main(void)
{
    int Data[N][2];
    double con[M];
    int n, i, k, j;
    int func_call;
    double max = -9999.0;
    char id_num[N][M];
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
        scanf("%s", id_num[i]);
    }
    printf("各IDのデータを入力して下さい\n");
    for (i = 0; i < n; i++)
    {
        printf("%s\n", id_num[i]);
        do
        {
            printf("データNo. %d-a:", i + 1);
            scanf("%d", &Data[i][0]);
            if (Data[i][0] > 100 || Data[i][0] < 0)
            {
                printf("入力データが100を超えているか負です\n");
            }
        } while (Data[i][0] > 100 || Data[i][0] < 0);

        do
        {
            printf("データNo. %d-b:", i + 1);
            scanf("%d", &Data[i][1]);
            if (Data[i][1] > 100 || Data[i][1] < 0)
            {
                printf("入力データが100を超えているか負です\n");
            }

        } while ((Data[i][1] > 100 || Data[i][1] < 0));
    }

    printf("\n入力された値を表示します\n");
    for (i = 0; i < n; i++)
    {
        printf("[%s]", id_num[i]);
        printf(" (a)   %d (b)   %d\n", Data[i][0], Data[i][1]);
    }

    printf("\n各データ組の平均値は以下の通りです\n");
    for (i = 0; i < n; i++)
    {
        average_calc(Data, con, n);
        printf("[%s] %.1lf\n", id_num[i], con[i]);
    }
    for (i = 0; i < n; i++)
    {

        if (max < con[i])
        {
            max = con[i];
        }
    }
    func_call = max_calc(con, n);
    printf("\n平均値の最大値は%sの%.1lfです\n", id_num[func_call], max);

    return 0;
}

void average_calc(int data[][2], double mean[], int no)
{
    int i;
    int sum = 0;
    double ave = 0.0;
    for (i = 0; i < no; i++)
    {
        sum = data[i][0] + data[i][1];
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