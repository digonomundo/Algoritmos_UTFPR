#include <stdio.h>

int a, b;

int main(){
    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    printf("Digite o segundo valor: ");
    scanf("%d", &b);

    printf("o resto da divisão é: %d\n", a % b);
    printf("o resto da divisão é: %d\n", a - (b * (a / b)));

    return 0;
}