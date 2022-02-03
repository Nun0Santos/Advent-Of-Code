#include <stdio.h>
#include <string.h>
#include <math.h>

#define TAM 12000
#define COMP 12
/* Consumo energia = Tx Gama * Tx Epsilon

Tx Gama -> Bit mais comum em cada coluna
Tx Epsilon -> Bit menos comum em cada coluna */

int main(){
    FILE *f;
    int it=0;
    int positiveBitsCount=0, negativeBitsCount=0, txGama[COMP], 
        txEpsilon[COMP],consumoEnergia=0,txGamaDecimal,txEpsilonDecimal;
    
    int linhasMax=1000,colunasMax=12;
    char puzzle[TAM];
    int ite=0;

    f = fopen("puzzle","r");
    if(f == NULL){
        perror("[ERRO] ao tentar abir o ficheiro\n");
    }

    for(int k=0; k<colunasMax; k++){
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
         
        fseek(f,0,SEEK_SET);
        printf("1 = %d / 0 = %d k[%d]\n",positiveBitsCount,negativeBitsCount,k);
       
       
        if(positiveBitsCount > negativeBitsCount){
                txGama[k] = 1;
                txEpsilon[k] = 0;
         }
         else if(negativeBitsCount > positiveBitsCount){
            txGama[k] = 0;
            txEpsilon[k] = 1;
        }
        it=0;
    

        
       
    }

   for(ite=0; ite<COMP; ++ite){  
        if (txGama[ite]=='1'){
           txGamaDecimal=txGamaDecimal+pow(2,txGama[ite] -(ite+1));
        }
     }
     printf("%d\n",txGamaDecimal);

   
   
   
     fclose(f);
 
    
}