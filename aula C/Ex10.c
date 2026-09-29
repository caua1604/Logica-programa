#include <stdio.h>

int main() {

    int numero;
    int QTerro = 1;
    
    
    printf("Digite um numero :");
    scanf ("%d",&numero);

   
        if (numero <=100 && numero>=1 ){
            printf("Acertou");
    
        }
        else {
             while (numero >100 || numero<1) {
                printf("errou\n");
                QTerro++;
                printf("Tente novamente:");
                scanf("%d",&numero);
                 if (numero <100 && numero>=1){ 
                     printf("ACERTOU\n");
                     printf("%d", QTerro);
                     
                }
             }
       
        }
    
    return 0;
    
}
