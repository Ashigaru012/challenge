#include <stdio.h>
#define BOARD_SQUARE 15

void Board_Output(void);                                        //盤面の出力
void Game(void);                                                //入力処理
void Board_Scan(int x, int y);                                  //盤面の調査
int Board_Scan_Sub( int x, int y, int move_x, int move_y );     //置いた場所を中心に並ぶ個数の調査
void Finish(void);                                              //ゲーム終了処理

int board[BOARD_SQUARE][BOARD_SQUARE] = {{0}};    
int player_number = 1;

int main(void){

    int i;

    Board_Output();


    for( i = 0; i < (BOARD_SQUARE * BOARD_SQUARE); i++ ){

        Game();
        Board_Output();

          if( player_number < 2 ) {
          player_number++;
          }
        else{ 
            player_number = 1;
        }

    }

    return 0;
}

//盤面の出力－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－
void Board_Output(void){

    int i, j;


    printf("  ");
    for( i = 0; i < BOARD_SQUARE; i++ ){
        printf("%d",i+1);
    }
    puts("");

    for( i = 0; i < BOARD_SQUARE; i++ ){        
        printf("%d",i+1);        
        for( j = 0; j < BOARD_SQUARE; j++ ){
            switch( board[j][i] ){
                case 0:     printf(" "); break;
                case 1:     printf("○"); break;
                case 2:     printf("x"); break;
            }
        }
        puts("");
    }
    puts("");
}

//入力処理－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－
void Game(void){

    int x, y;

     switch( player_number ){
        case 0:     printf(" "); break;
        case 1:     printf("先手の番です\n"); break;
        case 2:     printf("後手の番です\n"); break;
    }
    while(1){
        while(1){
            printf("縦位置は？"); 
            scanf("%d",&y);
            printf("横位置は？");
            scanf("%d",&x);
            if( x >= 0 && x < BOARD_SQUARE && y >= 0 && y < BOARD_SQUARE ) {
                break;
            }
            else {
                printf("そこには置けません\n");
            }
        }
        
        if( board[x][y] == 0 ){
            board[x][y] = player_number;
            break;
        } else {
            printf("そこには置けません\n");
    }
   
}
 Board_Scan(x, y);
    }



//盤面の調査（5個並んだかの調査）－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－
void Board_Scan( int x, int y ){
    int n[4];                  //8方向（直線4本分）に並んだ数
    int move_x, move_y;
    int i;

    move_x = 1; move_y = 1;     //[＼]方向
    n[0] = Board_Scan_Sub( x, y, move_x, move_y );

    move_x = 0; move_y = 1;     //[│]方向
    n[1] = Board_Scan_Sub( x, y, move_x, move_y );

    move_x = 1; move_y = 0;     //[─]方向
    n[2] = Board_Scan_Sub( x, y, move_x, move_y );

    move_x = -1; move_y = 1;    //[／]方向
    n[3] = Board_Scan_Sub( x, y, move_x, move_y );

    for( i = 0; i < 4; i++ ){
        if(n[i] == 5) {
            Finish();
        }
    }

}



int Board_Scan_Sub( int x, int y, int move_x, int move_y ){
    int n = 1;                                 //置いた場所の1個分で初期化
    int i;

    for( i = 1; i < 5; i++ ){
        if( board[ x + (move_x * i) ][ y + (move_y * i) ] == player_number ){
             n += 1;
        }
        else{ 
            break;
        }
    }
    for( i = 1; i < 5; i++ ){
        if( board[ x + (-1*move_x * i) ][ y + (-1*move_y * i) ] == player_number ) {
            n += 1;
        }
        else {
            break;
        }
    }

    return n;
}

//決着～ゲーム終了－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－
void Finish(void){
    Board_Output();
    switch(player_number){
        case 0:     printf("引き分けです\n"); break;
        case 1:     printf("先手の勝ちです\n"); break;
        case 2:     printf("後手の勝ちです\n"); break;
    }

    exit(0);
}