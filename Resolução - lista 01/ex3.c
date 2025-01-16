#include <stdio.h>

int largura, comprimento;

int main (){
    printf("Informe a largura do retangulo: ");
    scanf("%d", &largura);
    printf("Informe o comprimento do retangulo: ");
    scanf("%d", &comprimento);

    int perimetro = (largura *2) + (comprimento*2);
    int área = largura * comprimento;

    printf("o perímetro do retângulo é: %d e a área é: %d\n", perimetro, área); 


    return 0;
}