#include <stdio.h>

int main() {
    int n1, n2, n3, temp;

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    scanf("%d", &n2);
    printf("Digite o terceiro número: ");
    scanf("%d", &n3);

    if (n1 > n2) {
        temp = n1;
        n1 = n2;
        n2 = temp;
    }
    if (n2 > n3) {
        temp = n2;
        n2 = n3;
        n3 = temp;
    }
    if (n1 > n2) {
        temp = n1;
        n1 = n2;
        n2 = temp;
    }

    printf("Os números em ordem crescente são: %d, %d, %d\n", n1, n2, n3);

    return 0;
}
