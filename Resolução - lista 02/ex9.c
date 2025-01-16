#include <stdio.h>

int main(){
    int numero, digito;
    printf ("Digite o número de 5 dígitos: ");
    scanf("%d", &numero);

    for(int i = 0; i < 5; i++){
        digito = numero % 10;
        printf("%d \n", digito);
        numero = numero / 10;
    }

    return 0;
}
