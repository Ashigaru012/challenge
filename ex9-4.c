//306218
#include <stdio.h>
#define NSIZE 10

void read_score(int score[][3], int n);
void show_score(int score[][3], int subject, int n);

int main(void)
{
  int array[NSIZE][3];
  int sub, n;
  printf("学生数を入力して下さい（1～10）\n");
  printf("学生数:");
  scanf("%d", &n);
  read_score(array, n);

  while (1)
  {
    printf("\n得点表を表示する科目を選択して下さい\n");
    printf("英語=>1,数学=>2,国語=>3,終了=>0:");
    scanf("%d", &sub);
    printf("\n");

    if (sub != 0)
    {
      show_score(array, sub, n);
    }
    else
    {
      printf("終了します\n");
      break;
    }
  }

  return 0;
}

void read_score(int score[][3], int n)
{
  int i, j;
  for (i = 0; i < n; i++)
  {
    printf("%d番目の学生\n", i + 1);
    for (j = 0; j < 1; j++)
    {
      do
      {
        printf("(1)英語:");
        scanf("%d", &score[i][0]);
      } while (score[i][0] < 0 || score[i][0] > 100);

      do
      {
        printf("(2)数学:");
        scanf("%d", &score[i][1]);
      } while (score[i][1] < 0 || score[i][1] > 100);

      do
      {
        printf("(3)国語:");
        scanf("%d", &score[i][2]);
      } while (score[i][2] < 0 || score[i][2] > 100);
    }
  }
}

void show_score(int score[][3], int subject, int n)
{
  int i;
  if (subject == 1)
  {
    printf("[英語]\n");
    printf("番号  得点\n");
    for (i = 0; i < n; i++)
    {
      printf("%d     %d\n", i + 1, score[i][0]);
    }
  }
  if (subject == 2)
  {
    printf("[数学]\n");
    printf("番号  得点\n");
    for (i = 0; i < n; i++)
    {
      printf("%d     %d\n", i + 1, score[i][1]);
    }
  }
  if (subject == 3)
  {
    printf("[国語]\n");
    printf("番号  得点\n");
    for (i = 0; i < n; i++)
    {
      printf("%d     %d\n", i + 1, score[i][2]);
    }
  }
}
