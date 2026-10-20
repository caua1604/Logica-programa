#include <stdio.h>
#include <stdbool.h>

int main() {
    int resposta;
    bool assinatura;

    printf("Assinatura Ativa? (1=Sim, 0=Nao): ");
    scanf("%d", &resposta);

    if (resposta != 0 && resposta != 1) {
        printf("Valor invalido!");
    }
    else {
        assinatura = (resposta == 1);

        if (assinatura) {
            printf("Exibir sem anuncios");
        }
        else if (!assinatura) {
            printf("Reproducao com anuncios");
        }
    }

    return 0;
}
