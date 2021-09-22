#include <stdlib.h>
#include <stdio.h>

int main() {
    FILE *f, *p;
    int num1,num2,i;
    int count=0;

    f=fopen("despesas","r");
    p=fopen("despesas","r");

    if (f==NULL)
        printf("Erro ao abrir o ficheiro");

  
   while (fscanf(f,"%d ",&num1) != EOF){
        printf("num1 = %d\n",num1);


        while (fscanf(p,"%d ",&num2) != EOF){
            printf("num2 = %d, num1 = %d, num1+num2 = %d\n",num2,num1,num1+num2);

            if (num1+num2==2020){
                printf("num1 = %d\nnum2 = %d\n",num1,num2);
                printf("Num1 * Num2 = %d\n",num1*num2);
                return 0;    
            }    
        }
        fseek(p,0,SEEK_SET); //Mete o ponteiro para ficheiro a apontar para o inicio
      
        }
    
    fclose(f);
    fclose(p);
}