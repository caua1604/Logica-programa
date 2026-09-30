#include <stdio.h>

int main() {
float nota1, nota2, media;
    int Aprovados = 0;
    int exame = 0;
    int reprovados = 0;

    for (int i = 1; i <= 10; i++){
        printf("\nAluno %d\n", i);

        
        printf("Digite a Nota: ");
        scanf("%f", &nota1);

        printf("Digite a Nota: ");
        scanf("%f", &nota2);
                                  
        media = (nota1 + nota2) / 2;
            printf("Media; %.2f/n", media);

            if(media >= 7.0) {
            Aprovados++;
            }
else if (media >= 5.0) {
    exame++;
}
        else {reprovados++;
             }

    }

        printf("\n--- Resultado final ---\n");
    printf("aprovados: %d\n", Aprovados);
    printf("Exame: %d\n", exame);
    printf("Reprovados: %d\n", reprovados);

    return 0;
}
    
