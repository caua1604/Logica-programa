#include <stdio.h>
int main() {

    int ladoA;
    int ladoB;
    int ladoC;

    printf("Digite o valor do lado A:");
    scanf("%d",&ladoA);
    printf("Digite o valor do lado B:");
    scanf("%d",&ladoB);
    printf("Digite o valor do lado C:");
    scanf("%d",&ladoC);

    if (ladoA==ladoB && ladoA==ladoC){
    printf("Triangulo equilatero");
    }
    else if (ladoA!=ladoB && ladoA!=ladoC){
        printf("Triangulo Escaleno");
    }
    else {
        printf("Triangulo Isosceles");
    }
    
   
    return 0;
}
