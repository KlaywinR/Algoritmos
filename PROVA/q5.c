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

    //impressao com indice
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", vetor[i]);
    }
    return 0;
}
//complexidade linear - cada elemento recebe uma atribuição por vez; se sobra o tamanho do vetor o
// numero de operação dobra junto. 2*6 = 12q 