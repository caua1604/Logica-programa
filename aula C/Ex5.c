#include <stdio.h>
int main() {
    
    int numero, i;
    int saida = 1;

    while (saida!=0){
        printf("Digite um numero: ");
        scanf ("%d", &numero);
    
        for (i=1; i<= 10; i++){
            printf("%d x %d = %d\n", numero, i, numero * i);
        }
        printf("Deseja ver outra tabuada? (1-Sim | 0-Não):");
        scanf("%d",&saida);
    }
    printf("Encerrado");
    return 0;
}
