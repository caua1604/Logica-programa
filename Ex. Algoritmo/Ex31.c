int main() {

    int i;
    float venda;
    float total = 0;
 
    for (i = 1; i <= 5; i++) {

        printf("Informe o valor da venda %d: R$",i);
        scanf("%f",&venda);
        
        total = total+venda;
    }
    printf("Valor Total das vendas: R$ %.2f",total);
    
}
