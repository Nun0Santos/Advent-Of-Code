#include <stdio.h>
#include <string.h>
#define TAM 60
#define COMP 5
/* Consumo energia = Tx Gama * Tx Epsilon

Tx Gama -> Bit mais comum em cada coluna
Tx Epsilon -> Bit menos comum em cada coluna */

int main(){
    FILE *f;
    int it=0;
    int positiveBitsCount=0, negativeBitsCount=0, txGama[COMP], 
        txEpsilon[COMP],consumoEnergia=0;
    
    int linhasMax=12,colunasMax=5,linhas[12],colunas=0;
    char puzzle[TAM];
    int ite=0;

    f = fopen("puzzle_test","r");
    if(f == NULL){
        perror("[ERRO] ao tentar abir o ficheiro\n");
    }

    for(int k=0; k<colunasMax; ++k){
        positiveBitsCount=0; negativeBitsCount=0;
        for(int i =0; i<linhasMax; ++i){
            for(int j=0; j<colunasMax; ++j){
        
                    fscanf(f," %c", &puzzle[it]);
                    
                    if(j==k){
                        if(puzzle[it] == '1'){
                            ++positiveBitsCount;
                        }
                        else if(puzzle[it] == '0'){
                            ++negativeBitsCount;
                        }
                    }
                    ++it;
            }
        }
        //return;
        fseek(f,0,SEEK_SET);
        printf("1 = %d / 0 = %d k[%d]\n",positiveBitsCount,negativeBitsCount,k);
       
        for(ite=0; ite<COMP; ++ite){
            if(positiveBitsCount > negativeBitsCount){
                txGama[ite] = 1;
                txEpsilon[ite] = 0;
            }
             else if(negativeBitsCount > positiveBitsCount){
                txGama[ite] = 0;
                txEpsilon[ite] = 1;
            }
        }
       
    }
     for(ite=0; ite<COMP; ++ite){
         printf("txGama:%d",txGama[ite]);
         printf("txEpsilon:%d",txEpsilon[ite]);
     }
    
       
       

    
}