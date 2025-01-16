#include <stdio.h>

void impares(int vetor){
    for (int i = 1; i < 10; i+=2){ 
         printf("%d\n", (vetor + i));
    }
}

int main(){

    int v[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int* ponteiro = v;

    impares(*ponteiro);
    
    return 0;
}

