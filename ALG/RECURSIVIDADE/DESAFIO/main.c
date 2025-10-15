#include <stdio.h>

int main()
{
    int n_itens, capac_mochila;

    printf("-------------------------------------------------------------\n");
    printf("Colabore com o nosso sistema, faca o que se pede abaixo:\t\t\n\n");
    printf("-------------------------------------------------------------\n");
    printf("Passo 1/3 - Quantos itens vossa senhoria deseja cadastrar aqui?:\n");
    scanf("%d", &n_itens);

    int pesoos[n_itens];
    int valores[n_itens];

    printf("-------------------------------------------------------------\n");
    printf("Colabore com o nosso sistema, faca o que se pede abaixo:\t\t\n\n");
    printf("-------------------------------------------------------------\n");
    printf("Passo 2/3 - Por favor, digite o peso e o valor de cada item presente na mochila\n");

    for (int i = 0; i < n_itens; i++)
    {
        //! cada valor digitado eh guadardo dentro do array; inicio i na posicao dos dois:
        printf("* Item: %d --> Peso: ", i + 1);
        scanf("%d", &pesoos[i]);
        printf("* Item: %d --> Valor: ", i + 1);
        scanf("%d", &valores[i]);
        printf("\n\n");
    }
    printf("-------------------------------------------------------------\n");
    printf("Colabore com o nosso sistema, faca o que se pede abaixo:\t\t\n\n");
    printf("-------------------------------------------------------------\n");
    printf("Passo 3/3 - Por favor, digite  capacidade maxima da mochila\n");
    scanf("%d", &capac_mochila);

    printf("--------- Dados Obtidos ---------\t\t\n\n");
    for (int i = 0; i < n_itens; i++)
    {
        printf("* Item %d --> Possui o peso de: %d | Com o valor de: %d\n", i + 1, pesoos[i], valores[i]);
    }

    int valorMaximo = calcularMochila(capac_mochila, pesoos, valores, n_itens);

    printf("\n--------- Resultado Final ---------\n");
    printf("Capacidade da mochila: %d\n", capac_mochila);
    printf("Valor maximo transportavel: %d\n", valorMaximo);
    printf("-----------------------------------\n");
}

int calcularMochila(int limit, int peso[], int valores[], int quantidade_itens)
{
    // n tem espaço/itens, o valor = 0
    if (quantidade_itens == 0 || limit == 0)
        return 0;
//quantidade_itens = itens cons. na recursao:
    int Z = quantidade_itens - 1;

    //item for mais pesado do que o limite atual, pula
    if (peso[Z] > limit)
        return calcularMochila(limit, peso, valores, quantidade_itens - 1);

    // 1: pgd item atual; o valor total da mochila; lev. cont. o v. do item  quant. o m. valor possivel do sobrante;
    int itemPresent = valores[Z] + calcularMochila(limit - peso[Z], peso, valores, quantidade_itens - 1);

    //2:n pg. o item atual = ele n entra n mochila
    int itemNotPresent = calcularMochila(limit, peso, valores, quantidade_itens - 1);

    //ou inclui ou ignora o item atua: 
    return (itemPresent > itemNotPresent) ? itemPresent : itemNotPresent;
}
