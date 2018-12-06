#include <stdio.h>
#define MAXLEN 50

int main(void){
  int i,j,k;
  char first_name[MAXLEN];
  char family_name[MAXLEN];

  printf("名の字数を入力して下さい:");
  scanf("%d",&j);

  for(i = 0; i < j; i++){
    printf("first_name[%d]=",i);
    scanf(" %c",&first_name[i]);
  }
  first_name[j] = '\0';

  printf("姓の字数を入力して下さい:");
  scanf("%d",&k);

  for(i= 0; i < k; i++){
    printf("family_name[%d]=",i);
    scanf(" %c",&family_name[i]);
  }
  family_name[k] = '\0';

  printf("\n選手の氏名は\n");
  printf("姓:%s\n",family_name);
  printf("名:%s\n",first_name);

  return 0;
}
