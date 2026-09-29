#include <stdio.h>

int main() {

    float nota1;
    float nota2;
    float nota3;
    float media;
    

    printf("Digite a nota 1:");
    scanf("%f",&nota1);
    printf("Digite a nota 2:");
    scanf("%f",&nota2);
    printf("Digite a nota 3:");
    scanf("%f",&nota3);

    media = (nota1 + nota2 + nota3)/3.0f;

    printf("%.2f\n", media);

    if (media>=6.0f){
        printf("Aprovado");
    }
    else if (media>=4.0f){
        printf("Exame");
    }
    else {
        printf("Reprovado :(");
    }

return 0;
    
}
