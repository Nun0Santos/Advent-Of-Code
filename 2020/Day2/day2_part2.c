#include <stdlib.h>
#include <stdio.h>

int main(){
    FILE *p;
    char str[100],car;
    int pos1,pos2,cont=0,i=0,valido=0,dif=0,valido1=0;


    p = fopen("puzzle","r");

    if(p == NULL){
        printf("Erro ao tentar abrir o ficheiro");
    }

    while(fscanf(p,"%d-%d %c: %s",&pos1,&pos2,&car,str) != EOF){

            
                if(str[pos1-1] == car && str[pos2-1] == car){ //Da-me o numero de passwords que tem o caracter igual nas duas posicoes
                    valido++;
                    printf("pos1= %c pos2 = %c pos1 = %d pos2 = %d valido = %d\n",str[pos1-1],str[pos2-1],pos1,pos2,valido);
                    
                            

                   
                }
                 if(str[pos1-1] == car || str[pos2-1] == car){ // Dame o numero de passwords que tem  o caracter igual numa das duas posicoes e dame tambem o numero de passwords que  tem caracter igual nas duas posicoes
                    valido1++;
                }       
                
                    

    }
     printf("%d\n",valido);
     printf("%d\n",valido1);
     printf("\nValidos = %d\n",valido1-valido);



}