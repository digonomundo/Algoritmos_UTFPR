#include <stdio.h>

int dias;

int main (){
    printf("Informe a quantidade de dias: ");
    scanf("%d", &dias);
    int anos = dias / 365;
    int semanas = (dias % 365) / 7;
    int dias2 = ((dias % 365) % 7);

    printf("%d dias é igual a: %d ano(s), %d semana(s) e %d dia(s)", dias, anos, semanas, dias2);
    return 0;
}