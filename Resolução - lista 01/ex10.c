#include <stdio.h>

float numero;

int main(){
    printf("Digite o valor o numero em float: ");
    scanf("%f", &numero);

    printf("Numero com 2 casas de precisão: %.2f\n", numero);
    printf("A parte inteira e a parte decimal: %d e %f\n", (int)numero, numero - ((int)numero));
    printf("Representação Científica: %.e\n", numero);

    return 0;
}