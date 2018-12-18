#include <stdio.h>
#define N 5
typedef struct student
{
    int id;
    int math;
    int eng;
    int phy;
    int Sum;

} STUDENT;

int main(void)
{
    int i, j;
    int max = -9999;
    int min = 9999;
    int sum = 0;
    double ave;
    double sum_ave = 0.0;
    STUDENT point[N];

    for (i = 0; i < N; i++)
    {
        point[i].Sum = 0;
        printf("%d人目の学生番号は?:", i + 1);
        scanf("%d", &point[i].id);
        printf("数学の点数は?:");
        scanf("%d", &point[i].math);

        printf("英語の点数は?:");
        scanf("%d", &point[i].eng);

        printf("物理の点数は?:");
        scanf("%d", &point[i].phy);

        point[i].Sum = (point[i].math + point[i].eng + point[i].phy);
        sum = sum + point[i].Sum;
        if (max < point[i].Sum)
        {
            max = point[i].Sum;
        }
        if (min > point[i].Sum)
        {
            min = point[i].Sum;
        }
    }
    ave = (double)sum / 5;

    printf("\n学生番号 数学 英語 物理 合計\n");
    for (i = 0; i < N; i++)
    {
        printf(" %d ", point[i].id);
        printf(" %d ", point[i].math);
        printf(" %d ", point[i].eng);
        printf(" %d ", point[i].phy);
        printf(" %d ", point[i].Sum);
        if (i <= N)
        {
            printf("\n");
        }
    }
    printf("最高点は%d点\n", max);
    printf("最低点は%d点\n", min);
    printf("平均点は%.2lf点\n", ave);

    return 0;
}