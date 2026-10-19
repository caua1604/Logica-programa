int main() {

    int i;
    float valorCopia, preco;
    
    printf("Digite o valor da cópia:");
    scanf("%f",&valorCopia);

    for (i=1; i<= 10; i++){
        preco = i * valorCopia;
        printf("Quantidade de Copia %d: | Valor: R$ %.2f\n",i,preco);
    
    }    
    return 0;
 

}
