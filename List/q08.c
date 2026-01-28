#include <stdio.h>

int main()
{

    int numero1, numero2, numero3;
    int resultado;

    printf("Digite tres numeros inteiros:\n");
    scanf("%d %d %d", &numero1, &numero2, &numero3);

    resultado = ordenacaonumerica(&numero1, &numero2, &numero3);

    printf("Todos os valore ordenados\n: %d, %d, %d", numero1, numero2, numero3);

    if (resultado == 1)
        printf("\nTodos estes valores sao iguais..");

    else
        printf("\nExistem valores totalmente diferentes......");

    return 0;
}

int ordenacaonumerica(int *a, int *b, int *c)
{

    int vetor[3] = {*a, *b, *c};
    int var_temp;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2 - i; j++)
        {
            if (vetor[j] > vetor[j + 1])
            {
                var_temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = var_temp;
            }
        }
    }
    *a = vetor[0];
    *b = vetor[1];
    *c = vetor[2];

    // Retorna 1 se forem todos iguais
    if (*a == *b && *b == *c)
        return 1;
    else
        return 0;
}
