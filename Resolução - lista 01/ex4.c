#include <stdio.h>

int a, b;

int main(){
    printf("Digite um valor a: ");
    scanf("%d", &a);
    printf("Digite um valor b: ");
    scanf("%d", &b);

    int multiplicação = a * b;
    int divInteira = a / b;
    float divFloat = (float)a / b;

    printf("O resultado da multiplicação é: %d, da divisão inteira é: %d, e da divisão float é: %f\n", multiplicação, divInteira, divFloat);

    return 0;
}