#include <stdio.h>
#include <stdbool.h>
int main() {

    bool Documento;
    bool Carteirinha;
    bool Reserva;
    int resposta;

    printf("Tem Documento? (1=Sim, 0=Nao): ");
    scanf("%d", &resposta);
    Documento = (resposta);

    printf("Tem Carteirinha? (1=Sim, 0=Nao): ");
    scanf("%d", &resposta);
    Carteirinha = (resposta);

    printf("Tem Reserva? (1=Sim, 0=Nao): ");
    scanf("%d", &resposta);
    Reserva = (resposta);
    
    if ((Documento || Carteirinha) && Reserva){
            printf("Entrada Permitida");
    }
    
    else {
        printf("Entrada Proibida");
    }
   
    return 0;
}
