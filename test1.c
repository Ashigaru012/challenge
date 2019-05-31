#include <stdio.h>

struct student {
  char name[24];
  int id;
  int eng;
  int math;
  int phy;
  int sum;
};

int main(void){
  int sum_eng = 0;
  int sum_math = 0;
  int sum_phy = 0;
  int sum = 0;
  int max = -9999;
  int min = 9999;
  float ave,ave_eng,ave_math,ave_phy;
  int i;
 struct  student inf[] = {
    {"Abe",306001,80,73,44},
    {"Igarashi",306021,62,92,50},
    {"Sato",306041,82,77,61},
    {"Suzuki",306051,74,85,94},
    {"Takahashi",306061,76,54,87}
 };

  for (i = 0; i < 5; i++){
    inf[i].sum = 0;
    sum_eng += inf[i].eng;
    sum_math += inf[i].math;
    sum_phy += inf[i].phy;
    inf[i].sum += inf[i].eng + inf[i].math + inf[i].phy;
    sum += inf[i].sum;
    if (max < inf[i].sum){
      max = inf[i].sum;
    }
    if (min > inf[i].sum){
      min = inf[i].sum;
    }
  }
  ave = (float)sum / 5;
  ave_eng = (float)sum_eng / 5;
  ave_math = (float)sum_math / 5;
  ave_phy = (float)sum_phy / 5;

  for (i = 0; i < 5; i++){
    printf("%s (%d)の合計点は：%d点\n",inf[i].name,inf[i].id,inf[i].sum);
  }
  printf("-------------------------------------\n");

  printf("合計点の最高は：%d点\n",max);
  printf("合計点の最低は：%d点\n",min);
  printf("合計点の平均は：%.1f点\n",ave);
  printf("英語の平均点は：%.1f点\n",ave_eng);
  printf("数学の平均点は：%.1f点\n",ave_math);
  printf("物理の平均点は：%.1f点\n",ave_phy);

  return 0;
}
 
