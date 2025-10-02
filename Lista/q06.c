/*
Crie um programa que contenha um array contendo 5 elementos inteiros. Leia esse array do teclado e imprima
o endereço das posições contendo valores pares.
*/

#include <stdio.h>

int main()
{

    int vetor[5]; // declarado o vetor de 5 posições:

    printf("Digite 5 numeros inteiros:\n"); // entrada de dados pelo usuário:

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &vetor[i]);
    }
    printf("-------------------------------------\n");
    printf("Todos os endereços dos numeros pares:\n");
    printf("-------------------------------------\n");

    for (int i = 0; i < 5; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            printf("Elemento: %d ( valor =  %d) esta o endereco de: %p\n", i, &vetor[i]);
        }
    }

    return 0;
}