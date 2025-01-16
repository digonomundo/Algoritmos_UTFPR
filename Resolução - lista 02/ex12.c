#include <stdio.h>

int main (){
    char operador; float numero1, numero2;
    
    printf("[ CALCULADORA SIMPLEX ]\n\n");

    printf("Operador> "); scanf("%c", &operador);

    printf("Numero01> "); scanf("%f", &numero1);

    printf("Numero02> "); scanf("%f", &numero2);

    printf("Expressão: \n");

    if (operador == '+') printf("%.f + %.f = %.2f\n", numero1, numero2, numero1 + numero2);
    else if (operador == '-') printf("%.f - %.f = %.2f\n", numero1, numero2*1, numero1 - numero2);
    else if (operador == '*') printf("%.f * %.f = %.2f\n", numero1, numero2*1, numero1 * numero2);
    else if (operador == '/') printf("%.f / %.f = %.2f\n", numero1, numero2*1, numero1 / numero2);
    else printf("Digite um operador válido\n");

    return 0;
}