#include <stdio.h>

int main(void)
{
    //aqui declarei o vetor de 10 posicoes:
    float vetor[10];

    // preenchendo o vetor com numeros inteiros
    for (int i = 0; i < 10; i++)
    {
        vetor[i] = 0;
    }

    //mostrando as posicoes de cada elemento no vetor:
    for (int i = 0; i < 10; i++)
    {
        printf("Endereco do elemento: %d :| %p\n |", i, &vetor[i]);
    }

    return 0;
}


