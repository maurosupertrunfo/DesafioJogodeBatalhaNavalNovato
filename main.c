#include <stdio.h>

//Desafio: nível novato
//Posicionando Navios no Tabuleiro
//Desafio Jogo de Batalha Naval

int main() {
    int tabuleiro[10][10]; // declaracao do tabuleiro
    int navioa[3] = {3,3,3} ; // navio
    int naviob[3] = {3,3,3} ; // navio
    
 //posicao do navio (0;6) e (0;9)
 //posicao do navio (0;6) e (0;9)

    //iniciando a matrix-tabuleiro
     for(int i=0; i<10; i++){
        for (int j=0; j<10; j++){
            tabuleiro[i][j]=0;
            //printf(" %d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

 
  //mostrando o nvaioa no tabuleiro
     for(int i=0; i<10; i++){
        for (int j=0; j<10; j++){
            if(i==0 && j>5 && j <9){
                //m=3 posicoes
                for(int m=0; m<3; m++){
                    tabuleiro[i][j]=navioa[m];
                }
            }
            //printf(" %d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

  //mostrando o nvaioa no tabuleiro
     for(int i=0; i<10; i++){
        for (int j=0; j<10; j++){
            if(j==0 && i>5 && i<9){

                //m=3 posicoes
                for(int m=0; m<3; m++){
                    tabuleiro[i][j]=naviob[m];
                }
                
            }
            //printf(" %d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    
printf("\n");
printf("\n");
printf("\n"); 
          
     //mostrando o matrix-tabuleiro
     for(int i=0; i<10; i++){
        for (int j=0; j<10; j++){
            printf(" %d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    
  
    
    
    return 0;
}
