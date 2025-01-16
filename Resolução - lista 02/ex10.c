#include <stdio.h>

int main(){
    char caractere;
    printf("Digite um caractere: ");
    scanf("%c", &caractere);

    if (caractere >= 'a' && caractere <= 'z') printf("Letra: %c\n", caractere - 32);
    else if (caractere >= 'A' && caractere <= 'Z') printf("Letra: %c\n", caractere);
    else printf("Não é uma letra\n");

    return 0;
}