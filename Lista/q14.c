/*
Faça um programa que leia a quantidade de elementos n e crie dinamicamente um vetor de n elementos e
passe esse vetor para uma função que irá ler os elementos desse vetor. Depois, no programa principal, o vetor
preenchido deve ser impresso.
*/

//! prototipo da funcao:
void lerVetorgeral(int *vetor, int quantidade);

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantidade_de_elementos;

    printf("Digite a quantidade de elementos:\n");
    scanf("%d", &quantidade_de_elementos);

    //! alocando o vetor:

    int *vetor = malloc(quantidade_de_elementos * sizeof(int));
    if (vetor == NULL)
    {
        printf("Vish, erro na alocacao de memoria....\n");
    }

    //? chamando a funcao para a leitura de vetores:
    lerVetorgeral(vetor, quantidade_de_elementos);

    printf("=======================================\n");
    printf("Vetor completamente preenchido:\n");
    for (int i = 0; i < quantidade_de_elementos; i++)
    {
        printf("%d\n", vetor[i]);
    }

    printf("=======================================\n");

    printf("\n\n");

    //!! liberando toda a memoria possivel:

    free(vetor);

    return 0;
}

void lerVetorgeral(int *vetor, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
}
