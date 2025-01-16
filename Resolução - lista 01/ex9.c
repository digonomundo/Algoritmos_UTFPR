#include <stdio.h>

int numero;

int main(){
    printf("Informe o numero desejado: ");
    scanf("%d", &numero);

    for (int tabuada = 0;  tabuada <= 10; tabuada++)
    {
        printf("%d x %d = %d\n", numero, tabuada, numero * tabuada);
    }
    return 0;
}