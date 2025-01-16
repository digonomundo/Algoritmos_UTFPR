#include <stdio.h>

int main(){
    int numero;

    printf("Informe um número inteiro: ");
    scanf("%d", &numero);

    if((numero % 2) != 0){
        printf("Esse número é ímpar\n");
    }else{
        printf("Esse numer é par\n");
    }

    return 0;
}