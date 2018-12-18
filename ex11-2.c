#include <stdio.h>

#define NUM 5

struct student
{
    int id;
    char name[100];
    double height;
    double weight;

} STUDENT;

int main(void)
{
    struct student gakusei[NUM];
    int i;

    for (i = 0; i < NUM; i++)
    {
        printf("学生番号:");
        scanf("%d", &gakusei[i].id);
        printf("氏名:");
        scanf("%s", gakusei[i].name);
        printf("身長:");
        scanf("%lf", &gakusei[i].height);
        printf("体重:");
        scanf("%lf", &gakusei[i].weight);
    }
    for (i = 0; i < NUM; i++)
    {
        printf("学生番号: %d 氏名: %s 身長: %f cm 体重: %f kg \n", gakusei[i].id, gakusei[i].name, gakusei[i].height, gakusei[i].weight);
    }
    return 0;
}
