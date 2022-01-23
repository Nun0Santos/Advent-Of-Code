#include <stdio.h>

#define TAM 2000

int main(){
    FILE *f;
    int num1[TAM], contador=0, i=0;
    int contLines = 3,startCount=0,flag=2;
    int soma =0, somaAnterior=0;

    f = fopen("puzzle","r");
    if(f == NULL){
        perror("[Erro] ao tentar abrir o ficheiro : ");    
    } 

    while(fscanf(f," %d",&num1[i]) != EOF) {
        ++i;
    }

    for(i=0; i<TAM; i++){
        ++startCount;
       if(startCount = contLines){
            soma = num1[i-2]+num1[i-1]+num1[i];
             if(soma > somaAnterior && i > 2){
                 ++contador;
             }    
            somaAnterior=soma;
            startCount = startCount-2;
       }
    }
    printf("Contador = %d\n",contador);
}
