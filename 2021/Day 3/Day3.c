#include <stdio.h>
#define TAM 12

int main(){
    FILE *f;
    int puzzle[TAM],i=0;



    f = fopen("puzzle_test","r");
    if(f == NULL){
        perror("[ERRO] ao tentar abir o ficheiro\n");
    }
    while( (fscanf(f," %d", puzzle[i])) != EOF){
        ++i;
    }
    for(i=0; i<TAM; i++){
          
    }



}