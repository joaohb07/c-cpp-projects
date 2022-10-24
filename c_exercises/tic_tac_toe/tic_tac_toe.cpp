#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char tabuleiro[3][3];


    for(int i=0; i<3;i++){
        tabuleiro[i][0]=' ';
        tabuleiro[i][1]=' ';
        tabuleiro[i][2]=' ';
    }

    int win=0;
    int player=1;
    int rounds=0;

    while(win==0){
        char jogador = 'y';
        int linha=0;
        int coluna=0;

        if(player % 2 != 0){
            jogador='x';
        }else{
            jogador='o';
        }
        printf("\nType line (0, 1, 2): player = %c\n", jogador);
        scanf("%d", &linha);
        printf("\nType column (0, 1, 2): player = %c\n", jogador);
        scanf("%d", &coluna);

        if(tabuleiro[linha][coluna]!=' '||linha>2||coluna>2||linha<0||coluna<0){
            printf("Error\n");
            player--;
        }
        else{
            tabuleiro[linha][coluna]=jogador;
            rounds++;
        }
        if(rounds==9){
            printf("Draw!\n");
            win=1;
            break;
        }

        for(int i=0;i<3;i++){
            int linhasIguais=0;
            for (int ii=0; ii<3;ii++){
                if(tabuleiro[i][ii]==jogador){
                    linhasIguais++;
                }
            }
            if(linhasIguais==3){
                if(jogador=='x'){
                    printf("\nPlayer 1 win!\n");
                }else{
                    printf("\nPlayer 2 win!\n");
                }
                printf("Line %d\n",i);
                win=1;
            }
        }
        for(int i=0;i<3;i++){
            int colunasIguais=0;
            for (int ii=0; ii<3;ii++){
                if(tabuleiro[ii][i]==jogador){
                    colunasIguais++;
                }
            }
            if(colunasIguais==3){
                if(jogador=='x'){
                    printf("\nPlayer 1 win!\n");
                }else{
                    printf("\nPlayer 2 win!\n");
                }
                printf("Column %d\n",i);
                win=1;
            }
        }
        if(tabuleiro[0][0] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][2] == jogador){
            if(jogador=='x'){
                    printf("\nPlayer 1 win!\n");
                }else{
                    printf("\nPlayer 2 win!\n");
                }
                printf("Primary diagonal\n");
                win=1;
        }else if(tabuleiro[2][0]== jogador && tabuleiro[1][1] == jogador && tabuleiro[0][2] == jogador){
            if(jogador=='x'){
                    printf("\nPlayer 1 win!\n");
                }else{
                    printf("\nPlayer 2 win!\n");
                }
                printf("Secondary diagonal\n");
                win=1;
        }

        player++;

    }
    for(int i=0; i<3;i++){
        printf("%c%c%c\n", tabuleiro[i][0], tabuleiro[i][1], tabuleiro[i][2]);
    }
}
