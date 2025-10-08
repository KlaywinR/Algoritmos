/*
Crie um programa que contenha uma matriz de float contendo 3 linhas e 3 colunas. Imprima o endereço de
cada posição dessa matriz.
*/
#include <stdio.h>

#define N_linhas 3
#define N_colunas 3

void mostrarMatriz(float matriz[N_linhas][N_colunas]);

int main()
{

    // declarando a matriz 3x3:
    float matriz[N_linhas][N_colunas];

    // preenchendo a matriz de numeros inteiros:
    for (int i = 0; i < N_linhas; i++)
    {
        for (int j = 0; j < N_colunas; j++)
        {
            matriz[i][j] = 0;
        }
    }

    // exibindo os dados obtidos:
    printf("\t\t\tEnderecos obtidos conforme dada a matriz 3x3:\t\t\t");

    // percorrendo as linhas da matriz = 3:
    for (int i = 0; i < N_linhas; i++)
    {
        //! percorrendo as colunas da matriz = 3:
        for (int j = 0; j < N_colunas; j++)
        {
            printf("endereco da matriz[%d][%d]: %p\n", i, j, &matriz[i][j]);
        }
    }

    return 0;
}
