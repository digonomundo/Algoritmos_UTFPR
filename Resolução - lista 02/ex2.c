#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número de 0 a 9: ");
    scanf("%d", &numero);

    switch (numero) {
        case 9: printf("Nove\n"); break;
        case 8: printf("Oito\n"); break;
        case 7: printf("Sete\n"); break;
        case 6: printf("Seis\n"); break;
        case 5: printf("Cinco\n"); break;
        case 4: printf("Quatro\n"); break;
        case 3: printf("Três\n"); break;
        case 2: printf("Dois\n"); break;
        case 1: printf("Um\n"); break;
        case 0: printf("Zero\n"); break;
        default: 
        printf("Erro: O número digitado não está entre 0 e 9.\n");
        return 1;
    }
    return 0;
}