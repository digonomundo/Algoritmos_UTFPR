#include <stdio.h>

float raio;

int main(){
    printf("Digite o valor do raio do círculo: ");
    scanf("%f", &raio);

    float diametro = raio * 2;
    float circunferencia = (3.141592 * 2 ) * raio;
    float area = (raio * raio) * 3.141592;

    printf("O diametro do Círculo é: %.2f\n", diametro);
    printf("A circunferência do Círculo é: %.3f\n", circunferencia);
    printf("A área do Círculo é: %.3f\n", area);


    return 0;
}