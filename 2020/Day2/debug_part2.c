#include <stdlib.h>
#include <stdio.h>



int main(){
    FILE *p;
    char str[100],car;
    int pos1,pos2,cont=0,i=0,valido=0;


    p = fopen("puzzle","r");

    if(p == NULL){
        printf("Erro ao tentar abrir o ficheiro");
    }

    fscanf(p,"%d-%d %c: %s",&pos1,&pos2,&car,str);
        
        printf("%c\n",str[pos1]);
        printf("%c\n",str[pos2]);

        for(int i = 0 ; str[i] != '\0'; i++){
                //printf("%s\n",str);
                printf("%c\n",str[pos1]);

            
        }
           

       // printf("%s\n",str);
    
    printf("\nValidos = %d\n",valido);

}