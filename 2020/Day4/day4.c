#include <stdlib.h>
#include <stdio.h>

int main(){ 
    FILE *p;
    char str[50];

    if((p = fopen("puzzle","r")) == NULL){
            printf("Erro ao abrir ficheiro");

    }

    while(fscanf(p," %s",str) != EOF){
        for(int i=0; str[i]  != '/0'; i++){
            printf("%s\n",str);
        }
    }
   

    fclose(p);
    

    
}