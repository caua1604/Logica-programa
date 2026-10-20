#include <stdio.h>
#include <stdbool.h>
int main() {

    bool Clube;
    bool Cupom;
    int resposta;

    printf("Participa do Clube? (1=Sim, 0=Nao): ");
    scanf("%d", &resposta);
    Clube = (resposta);

    printf("Tem Cupom Valido? (1=Sim, 0=Nao): ");
    scanf("%d", &resposta);
    Cupom = (resposta);
    
    if (Clube || Cupom){
        printf("Frete Gratis");
    }

    else if (Clube && Cupom){
        printf("Frete Gratis");
    }
    else {
        printf("Frete = 12 Reais");
    }
   
    return 0;
}
