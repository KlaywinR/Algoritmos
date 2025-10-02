/*
Crie um programa que contenha um array de inteiros contendo 5 elementos. Utilizando apenas aritmética de
ponteiros, leia esse array do teclado e imprima o dobro de cada valor lido.
*/

#include <stdio.h>

int main()
{

    //! vetor de 5 posições:

    int vtor[5];
    int *p = vtor;

    printf("Por favor, digite 5 numeros:");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", p);
        p++;
    }

    //! o vetor é zerado:
    p = vtor;

    for (int i = 0; i < 5; i++)
    {
        //! nesta parte o elemento do vetor é multiplicado por 2:
        printf("%d\n", *p * 2);
        p++;
    }

    return 0;
}
