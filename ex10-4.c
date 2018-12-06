#include <stdio.h>
#define MAXLEN 50

int get_length(char str[]);

int main(void){
  int i,func_call;
  char Str[MAXLEN];
  
  printf("文字列:");
  scanf("%s",Str);
  
  func_call = get_length(Str);
  char Str2[func_call+1];
  
  for(i = 0; i < (func_call-1); i++){
    Str2[(func_call-1)-i] = Str[i];
  }
  Str2[func_call] = Str[func_call];

  printf("文字列の長さ:%d\n",func_call);
  printf("文字列（逆順）:%s.%s\n",Str,Str2);
  
  return 0;
}

int get_length(char str[]){
  int i,count;
  for(i = 0; str[i] != '\0'; i++){
    count = i+1;
  }

  return count;
}
