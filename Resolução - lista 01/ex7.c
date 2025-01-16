#include <stdio.h>

float a, b, c, pesoA, pesoB, pesoC;

int main(){
    printf("Informe a nota A: ");
    scanf("%f", &a);
    printf("Informe a nota B: ");
    scanf("%f", &b);
    printf("Informe a nota C: ");
    scanf("%f", &c);

    printf("Informe o peso da nota A: ");
    scanf("%f", &pesoA);
    printf("Informe o peso da nota B: ");
    scanf("%f", &pesoB);
    printf("Informe o peso da nota C: ");
    scanf("%f", &pesoC);

    printf("A média aritmética simples é: %f\n", (float)(a + b + c) / 3);
    printf("A média ponderada é: %f\n", (a * (pesoA / 100)) + (b* (pesoB / 100)) + (c * (pesoC / 100)));
    return 0;
}