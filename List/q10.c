#include <stdio.h>

int negativos(float vetor[], int tamanho_do_array);

int main()
{

    int tamanho_do_array;

    printf("Por favor, digite o tamanho do array: \n");
    scanf("%d", &tamanho_do_array);

    float vetor[tamanho_do_array];

    //! lendo todos os valores posssiveis:
    for (int i = 0; i < tamanho_do_array; i++)
    {
        printf("Digite o elemento %d", i + 1);
        scanf("%f", &vetor[i]);
    }

    int quant_n_negativos = negativos(vetor, tamanho_do_array);

    printf("=======================================\n");
    printf("Exibindo resultados: \n");
    printf("Quantidade de numeros negtivos: %d\n", quant_n_negativos);
    printf("=======================================\n");

        return 0;
}

//? implementando a funcao:

int negativos(float vetor[], int tamanho_do_array)
{

    int count = 0;

    for (int i = 0; i < tamanho_do_array; i++)
    {
        if (vetor[i] < 0)
        {
            count++;
        }
    }

    return count;
}