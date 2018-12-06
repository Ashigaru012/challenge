#include <stdio.h>
#define MAXLEN 20

int main(void){
  int i;
  char name[MAXLEN];

  printf("名前を入力して下さい:");
  scanf("%s",name);

  printf("< 出力例 No.1 >\n");
  for(i = 0; name[i] != '\0'; i++){
    printf("name[%d]=%c\n",i,name[i]);

  }
  printf("< 出力例 No.2 >\n");
  printf("name=%s\n",name);

  return 0;
}
