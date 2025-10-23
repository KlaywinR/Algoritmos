/*
Crie uma função que receba dois parâmetros: um vetor e um valor do mesmo tipo do vetor. A
função deverá preencher os elementos de vetor com esse valor. Não utilize índices para percorrer
o vetor, apenas aritmética de ponteiros. Informe a complexidade do programa.
*/

void preencherVetor(int *vetor, int tamanhoTotal, int valorTotal)
{

    int *fim = vetor + tamanhoTotal;

    while (vetor < fim)
    {
        *vetor = valorTotal;
        vetor++;
    }
}

int main()
{

    int vetor[6];
    int valor = 10;

    preencherVetor(vetor, 6, valor);

    // Impressão usando índice (pode usar aqui, pois o enunciado proíbe só na função)
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", vetor[i]);
    }
    return 0;
}