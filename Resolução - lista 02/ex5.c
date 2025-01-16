#include <stdio.h>

int main(){
    float n1, n2, n3;

    printf("Digite a Nota 1: ");
    scanf("%f", &n1);
    printf("Digite a Nota 2: ");
    scanf("%f", &n2);
    printf("Digite a Nota 3: ");
    scanf("%f", &n3);

    float media = (n1 + n2 + n3) / 3;

    if (media >= 8.5 && media <= 10) printf("Conceito A\n");
    else if (media >= 8.5 && media <= 10) printf("Conceito B\n");
    else if (media >= 8.5 && media <= 10) printf("Conceito C\n");
    else printf("Conceito F\n");
    
    return 0;
}