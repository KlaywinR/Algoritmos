#include <stdio.h>

int main()
{
    /*
    Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char. Associe
    as variáveis aos ponteiros (use &). Modifique os valores de cada variável usando os ponteiros. Imprima os
    valores das variáveis antes e após a modificação.
    */

    //! variaveis declaradas:

    int numero_inteiro = 10;
    char caractere = "X";
    float numero_decimal = 7.7;

    //! ponteiros:
    int *ponteiro_inteiro;
    float *ponteiro_decimal;
    char *ponteiro_char;

    //! associei todos os ponteiros as devidas variaveis:
    ponteiro_char = &caractere;
    ponteiro_inteiro = &numero_inteiro;
    ponteiro_decimal = &numero_decimal;

    printf("Imprimindo todos os valores antes da modificacao:\n");
    printf("O numero inteiro: %d\n", numero_inteiro);
    printf("O numero decimal: %.2f\n", numero_decimal);
    printf("O caractere: %c\n ", caractere);

    //! modificando todos os valores atraves dos ponteiros:

    *ponteiro_char = "Z";
    *ponteiro_inteiro = 200;
    *ponteiro_decimal = 2.6;

    printf("Imprimindo todos os valores apos a modificacao:\n");
    printf("O numero inteiro: %d\n", numero_inteiro);
    printf("O numero decimal: %.2f\n", numero_decimal);
    printf("O caractere: %c\n ", caractere);

    return 0;
}