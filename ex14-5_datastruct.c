#include <stdio.h>
#include <string.h>
#define MAX_STACK_NUM 10
#define NO_DATA -1
int top = -1;
void push(int data);
int pop();
int stack[MAX_STACK_NUM];
int main(){
    char name[10];
    char c;
   int num = 0,a,b;
    printf("逆ポーランド記法で記述された数式を入力してください\n");
    scanf("%s",name);
    for (int i = 0; i < strlen(name); i++){
        c = name[i];
        if (c == '+'){
            
            a = pop();
            b = pop();
            num = a + b;
            push(num);
        
           
        }
        else if(c == '-'){
            a = pop();
            b = pop();
            printf("%d %d\n",a,b);
            num = b - a;
            push(num);
            
            
        }
        else if(c == '*'){
            a = pop();
            b = pop();
            num = a * b;
            push(num);
           
        }
        else{
            num = c - '0';
            push(num);
            
        }
    }
    printf("計算結果 = %d\n",stack[0]);
    return 0;
}

int pop(){
    if(top<0) return -1;

    else{
        int data = stack[top];
        top--;
        return data;
    }
}

void push(int data){
    top++;
    if(top == MAX_STACK_NUM) top--;
    else{
        stack[top] = data;
    }
}
