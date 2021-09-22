#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    FILE *p;
    char str[100],car;
    int num1,num2,min=0,max=0,cont=0,i=0,valido=0;

    p = fopen("puzzle","r");

    if(p==NULL){
        printf("Erro ao tentar abrir o ficheiro");
    }

        while (fscanf(p," %d-%d %c: %s",&min,&max,&car,str) != EOF)
        {
          cont=0;

            for(i=0; str[i] != '\0'; i++){ // \0 todas as strings acabam em \0
                   if(str[i] == car){
                       cont++;
                    }
                }
                 if(cont >= min && cont <= max){
                   valido++;
                   }   
        }
        printf("\nValidos = %d\n",valido);

       /*printf("%c\n",car);
        printf("%d\n",cont);
        printf("%d\n",min);
        printf("%d\n",max);*/
      
         fclose(p);

}