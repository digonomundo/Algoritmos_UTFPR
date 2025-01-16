#include <stdio.h>

int a, b;

int main(){
    printf("Digite um valor a: ");
    scanf("%d", &a);
    printf("Digite um valor b: ");
    scanf("%d", &b);
    int adição = a + b;
    int subtração = a - b;

    printf("a adição entre os números é: %d\n", adição);
    printf("a subtração entre os números é: %d\n", subtração);
    return 0;
}