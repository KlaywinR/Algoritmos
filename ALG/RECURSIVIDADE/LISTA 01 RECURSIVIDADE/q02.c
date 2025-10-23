/*
Fazer um programa que leia,some 2 valores inteiros e mostre o resultado da soma.
No final do programa, deverá ter uma recursividade que chame novamente o programa
principal, mostre a mensagem “Digite 1 se desejar executar o programa novamente”,
caso positivo, executar o programa novamente caso negativo, terminar a execução do
programa.
*/

#include <stdio.h>

void prog();

int main(void)
{
    //! chamando o programa dentro do main: 
    prog();
    return 0;
}

void prog()
{
    
    int n01, n02, sma;
    int repeticao;


    //! entrada de dados do usuario:
    printf("----------------------------------\n");
    printf("Por favor, digite o primeiro numero:");
    scanf("%d", &n01);

    printf("Por favor, digite o segundo numero:");
    scanf("%d", &n02);

    printf("----------------------------------\n\n");

    //! algoritmo responsavel pela soma:
    sma = n01 + n02;

    printf("A soma de %d + %d eh igual ah: %d\n", n01, n02, sma);

    printf("-----------------------------------------------\n");
    printf("Digite 1 se deseja continuar com a aplicacao:\n\n");
    scanf("%d", &repeticao);
    printf("-----------------------------------------------\n");

    if (repeticao == 1)
    {
        //? chama a funcao do "prog"; usando a recursividade.
        puts("=== ===|Carregando Dados |=== ===\n\n");
        prog();
    }
    else
        puts("Programa encerrado com sucesso! Obrigado pelo uso!");
}