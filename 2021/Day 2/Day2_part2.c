#include <stdio.h>
#include <string.h>
/*
    down X aumenta sua mira em X unidades.
    up X diminui sua mira em X unidades.
    forward X faz duas coisas:
        Aumenta a sua posição horizontal por Xunidades.
        Aumenta sua profundidade por sua mira multiplicada por X.
*/
int main(){
    FILE *f;
    int forward = 0, down = 0, up = 0,profundidade = 0,horizontal = 0; 
    char instrucao[20];
    int num;
    int aim = 0;

    f=fopen("puzzle","r");
    if(f==NULL){
        perror("[ERRO] ao tentar abrir o ficheiro\n");
    }

    while(fscanf(f,"%s %d",instrucao,&num) != EOF){
        if(strcmp(instrucao,"forward") == 0){
           horizontal +=num;
           profundidade += aim*num;
        }
        if(strcmp(instrucao,"down") == 0){
            aim += num;
        }
        if(strcmp(instrucao,"up") == 0){
            aim -= num;
        }
    }
    int result = profundidade*horizontal;

    printf("horizontal = %d\n",horizontal);
    printf("Profundidade = %d\n",profundidade);
    printf("Result = %d\n",result);

}