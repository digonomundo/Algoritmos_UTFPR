#include <stdio.h>

int main()
{
    char caractere;
    printf("Digite o caractere desejado: ");
    scanf("%c", &caractere);

    if ((caractere >= 'a' && caractere <= 'z') || (caractere >= 'A' && caractere <= 'Z'))
    {
        printf("O Caractere: %c, é uma letra ", caractere);
        switch (caractere)
        {
        case 'a' || 'e' || 'i' || 'o' || 'u' || 'A' || 'E' || 'I' || 'O' || 'U':
            printf("Vogal\n");
            break;

        default:
            printf("consoante\n");
            break;
        }
    }
    else if ((caractere >= 33 && caractere <= 47) || (caractere >= 58 && caractere <= 126))
        printf("O caractere: %c é um símbolo da tabela ASCII\n", caractere);
    else
        printf("O caractere: %c é um número\n", caractere);

    return 0;
}