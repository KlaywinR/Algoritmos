#include <stdio.h>

int main()
{

    int A, *B, **C, ***D;

    printf("Digite um numero inteiro qualquer:\n");
    scanf("%d", &A);

    B = &A;
    C = &B;
    D = &C;

    //! calculando os numeros:

    int dobro = 2 * (*B);
    int triplo = 3 * (**C);
    int quadrupulo = 4 * (***D);

    printf("======================================\n");
    printf("Mostrando todos os valores:\n\n");

    printf("Valor original digitado: %d\n", A);
    printf("O dobro - Atraves de B (x2): %d\n", dobro);
    printf("O triplo - Vindo de C (x3): %d\n", triplo);
    printf("O quadrupulo - Vindo de D (x4): %d\n", quadrupulo);

    printf("======================================");

    return 0;
}