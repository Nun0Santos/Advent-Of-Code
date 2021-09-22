#include <stdlib.h>
#include <stdio.h>

int main() {
    FILE *f, *p,*b;
    int num1,num2,num3,i;
    int count=0;

    f=fopen("despesas","r");
    p=fopen("despesas","r");
    b=fopen("despesas","r");

    if (f==NULL)
        printf("Erro ao abrir o ficheiro");

  
   while (fscanf(f,"%d ",&num1) != EOF){
        printf("num1 = %d\n",num1);

            while (fscanf(p,"%d ",&num2) != EOF){
                printf("num2 = %d\n",num2);
        
                     while (fscanf(b,"%d ",&num3) != EOF){
                         printf("num3 = %d\n",num3);

                            if (num1+num2+num3==2020){
                                printf("\nnum1 = %d\nnum2 = %d\nnum3 = %d\n",num1,num2,num3);
                                printf("Num1 * Num2 * num3 = %d\n",num1*num2*num3);
                                return 0;    
                            }    
                    }
                    fseek(b,0,SEEK_SET);
            }
            fseek(p,0,SEEK_SET);
   }
    fclose(f);
    fclose(p);
    fclose(b);
}