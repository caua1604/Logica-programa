int main() {

    int numero;
    int QTerro = 1;
    
    
    printf("Digite a nota:");
    scanf ("%d",&numero);

   
        if (numero <=10 && numero>=0 ){
            printf("Nota válida");
    
        }
        else {
             while (numero >10 || numero<0) {
                printf("Nota inválida\n");
                QTerro++;
                printf("Tente novamente:");
                scanf("%d",&numero);
                 if (numero <=10 && numero>=0){ 
                     printf("Nota válida\n");
                     printf("%d", QTerro);
                     
                }
             }
       
        }
    
    return 0;
}    
