#include <stdio.h>

int main(){
    int n1, n2, n3, n4, maior;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &n3);
    printf("Digite o quarto numero: ");
    scanf("%d", &n4);

    maior = n1;
    if (n2 > maior) maior = n2;
    if (n3 > maior) maior = n3;
    if (n4 > maior) maior = n4;

    printf("O maior número é o %d\n", maior);
    
    return 0;
}