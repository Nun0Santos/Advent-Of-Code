#include <stdio.h>

#define TAM 2000

int main(){
    FILE *f;
    int num1[TAM], contador=0, i=0;

    f = fopen("puzzle","r");
    if(f == NULL){
        perror("[Erro] ao tentar abrir o ficheiro : ");    
    } 

    while(fscanf(f," %d",&num1[i]) != EOF) {
        ++i;
    }

    for(i=0; i<TAM; i++){
        if(num1[i]> num1[i-1]){ ++contador;}
    }

    printf("Contador = %d\n",contador);
}
