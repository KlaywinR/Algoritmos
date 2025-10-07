#include <stdio.h>

//! prototipo da funcao 
void encontrarMinimoeMaximo(int vetor[], int tamanho_geral, int *minimo, int *maximo);

int main()
{

    int vetor[5];
    int menor_vlr, maior_vlr;
    printf("Por favor, digite 5 numeros inteiros: \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &vetor[i]);
    }

    encontrarMinimoeMaximo(vetor, 5, &menor_vlr, &maior_vlr);

    printf("=======================================\n");
    printf("Exibindo resultados: \n");
    printf("Maior Valor: %d\n", maior_vlr);
    printf("Menor Valor: %d\n", menor_vlr);
    printf("=======================================\n");

    return 0;
}

encontrarMinimoeMaximo(int vetor[], int tamanho_geral, int *minimo, int *maximo)
{
    *minimo = vetor[0];
    *maximo = vetor[0];

    for (int i = 1; i < tamanho_geral; i++)
    {
        if (vetor[i] < *minimo)
            *minimo = vetor[i];
        if (vetor[i] > *maximo)
            *maximo = vetor[i];
    }
}
