#include <stdio.h>

typedef struct student
{
    int id;
    char name[100];
} STUDENT;

int main(void)
{
    STUDENT inf = {296000, "Taro"};
    printf("学生番号:%d\n", inf.id);
    printf("氏名:%s\n", inf.name);

    return 0;
}