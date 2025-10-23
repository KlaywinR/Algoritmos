#include <stdio.h>
int main()
{

    int numero = 55;
    int *ptr;

    ptr = &numero;

    printf("Valor do numero: %d\n", numero);
    printf("Endereco de numero: %d\n", &numero);
    printf("Pntr de numero: %d\n", ptr);
    printf("Valor apontado pelo ponteiro: %d\n", *ptr);

    // alterando o valor de u determinado ponteiro:

    *ptr = 100;

    printf("O novo valor do numero eh: %d\n", numero);

    return 0;
}