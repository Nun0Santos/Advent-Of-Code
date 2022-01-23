#include <stdio.h>
#include <string.h>

int main(){
    FILE *f;
    int forward = 0, down = 0, up = 0,profundidade = 0; 
    char instrucao[20];
    int num;

    f=fopen("puzzle","r");
    if(f==NULL){
        perror("[ERRO] ao tentar abrir o ficheiro\n");
    }

    while(fscanf(f,"%s %d",instrucao,&num) != EOF){
        if(strcmp(instrucao,"forward") == 0){
            //printf("entrei for\n");
            forward +=num;
        }
        if(strcmp(instrucao,"down") == 0){
            profundidade += num;
        }
        if(strcmp(instrucao,"up") == 0){
            profundidade -= num;
        }
    }
    int result = profundidade*forward;
    printf("horizontal = %d\n",forward);
    printf("Profundidade = %d\n",profundidade);
    printf("Result = %d\n",result);

}