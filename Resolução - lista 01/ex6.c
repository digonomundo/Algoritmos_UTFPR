#include <stdio.h>

int a, b, c;

int main(){
    printf("Informe a nota A: ");
    scanf("%d", &a);
    printf("Informe a nota B: ");
    scanf("%d", &b);
    printf("Informe a nota C: ");
    scanf("%d", &c);

    printf("A média aritmética simples é: %f\n", (float)(a + b + c) / 3);
    printf("A média ponderada é: %f\n", (float)((a * 0.1) + (b* 0.5) + (c * 0.4)));
    return 0;
}