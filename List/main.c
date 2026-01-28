#include <stdio.h>

//! assinaturas das funções das questões:
void questao3();
void questao5();
void questao6();
void questao4();
void questao1();
void questao2();
void questao7();
void questao8();
void questao9();
void questao10();
void questao11();
void questao12();
void questao13();
void questao14();
void questao15();
void questao16();

//! declaracao das funcoes auxiliares que usei:
int ordenacaonumerica(int *a, int *b, int *c);
void frac(float num, int *inteiro, float *frac);
int negativos(float vetor[], int tamanho_do_array);
int encontrarminimoemaximo(int vetor[], int tamanho_geral, int *minimo, int *maximo);
int* interseccaogeral(int *x1, int *x2, int n1, int n2, int *qtd);
void testar_uniao();
int* uniao(int *x1, int *x2, int n1, int n2, int *qtd);
int calccularsoma(int *a, int b);



//! ------------------ PROGRAMA PRINCIPAL -----------------
int main()
{
    int opcao;
    do
    {
        printf("- Menu do Aluisio -\n");
        printf("1 - Ver questao 01\n");
        printf("2 - Ver questao 02\n");
        printf("3 - Ver questao 03\n");
        printf("4 - Ver questao 04\n");
        printf("5 - Ver questao 05\n");
        printf("6 - Ver questao 06\n");
        printf("7 - Ver questao 07\n");
        printf("8 - Ver questao 08\n");
        printf("9 - Ver questao 09\n");
        printf("10 - Ver questao 10\n");
        printf("11 - Ver questao 11\n");
        printf("12 - Ver questao 12\n");
        printf("13 - Ver questao 13\n");
        printf("14 - Ver questao 14\n");
        printf("15 - Ver questao 15\n");
        printf("16 - Ver questao 16\n");
        printf("Escolha uma opcao, Aluisio:");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            questao1();
            break;

        case 2:
            questao2();
            break;

        case 3:
            questao3();
            break;

        case 4:
            questao4();
            break;

        case 5:
            questao5();
            break;

        case 6:
            questao6();
            break;

        case 7:
            questao7();
            break;

        case 8:
            questao8();
            break;

        case 9:
            questao9();
            break;

        case 10:
            questao10();
            break;

        case 11:
            questao11();
            break;

        case 12:
            questao12();
            break;

        case 13:
            questao13();
            break;

        case 14:
            questao14();
            break;

        case 15:
            questao15();
            break;

        case 16:
            questao16();
            break;

        case 0:
            printf("Saindo do menu");

        default:
            printf("Opss, opcao invalida Sr. Aluisio, tente de novo!!");
            break;
        }

    } while (opcao != 0);

    return 0;
}
//? PROGRAMA PRINCIPAL

void questao3()
{
    printf("== Voce esta na questao 3 ==\n\n");
    // aqui declarei o vetor de 10 posicoes:
    float vetor[10];

    // preenchendo o vetor com numeros inteiros
    for (int i = 0; i < 10; i++)
    {
        vetor[i] = 0;
    }

    // mostrando as posicoes de cada elemento no vetor:
    for (int i = 0; i < 10; i++)
    {

        printf("Endereco do elemento: %d :| %p\n |", i, &vetor[i]);
    }
}

void questao5()
{
    /*
    Crie um programa que contenha um array de inteiros contendo 5 elementos. Utilizando apenas aritmética de
    ponteiros, leia esse array do teclado e imprima o dobro de cada valor lido.
    */
    //! vetor de 5 posições:

    int vtor[5];
    int *p = vtor;
    printf("== Voce esta na questao 5 ==\n");
    printf("Por favor, digite 5 numeros:");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", p);
        p++;
    }

    //! o vetor é zerado:
    p = vtor;

    for (int i = 0; i < 5; i++)
    {
        //! nesta parte o elemento do vetor é multiplicado por 2:
        printf("Dobro dos elementos: %d\n", *p * 2);
        p++;
    }

    return 0;
}

void questao6()
{

    int vetor[5]; // declarado o vetor de 5 posições:

    printf("== Voce esta na questao 6 ==\n");
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

void questao4()
{
    /*
   Crie um programa que contenha uma matriz de float contendo 3 linhas e 3 colunas. Imprima o endereço de
   cada posição dessa matriz.
   */
#define nlinhas 3
#define ncolunas 3

    float matriz[nlinhas][ncolunas];

    for (int i = 0; i < nlinhas; i++)
    {
        for (int j = 0; j < ncolunas; j++)
        {
            matriz[i][j] = 0;
        }
    }
    printf("== Voce esta na questao 4 ==\n");
    // dados obtidos:
    printf("Enderecos obtidos conforme dada a matriz 3x3:\n");

    // percorrendo as linhas da matriz = 3:
    for (int i = 0; i < nlinhas; i++)
    {
        // percorrendo as colunas da matriz = 3:
        for (int j = 0; j < ncolunas; j++)
        {
            printf("endereco da matriz[%d][%d]: %p\n", i, j, &matriz[i][j]);
        }
    }
}

void questao1()
{
    /*
   Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char. Associe
   as variáveis aos ponteiros (use &). Modifique os valores de cada variável usando os ponteiros. Imprima os
   valores das variáveis antes e após a modificação.
   */

    //! variaveis declaradas:

    int numero_inteiro = 10;
    char caractere = 'X';
    float numero_decimal = 7.7;

    //! ponteiros:
    int *ponteiro_inteiro;
    float *ponteiro_decimal;
    char *ponteiro_char;

    //! associei todos os ponteiros as devidas variaveis:
    ponteiro_char = &caractere;
    ponteiro_inteiro = &numero_inteiro;
    ponteiro_decimal = &numero_decimal;

    printf("Imprimindo todos os valores antes da modificacao:\n");
    printf("O numero inteiro: %d\n", numero_inteiro);
    printf("O numero decimal: %.2f\n", numero_decimal);
    printf("O caractere: %c\n ", caractere);

    //! modificando todos os valores atraves dos ponteiros:

    *ponteiro_char = 'Z';
    *ponteiro_inteiro = 200;
    *ponteiro_decimal = 2.6;

    printf("Imprimindo todos os valores apos a modificacao:\n");
    printf("O numero inteiro: %d\n", numero_inteiro);
    printf("O numero decimal: %.2f\n", numero_decimal);
    printf("O caractere: %c\n ", caractere);

    return 0;
}

void questao5()
{

    //! vetor de 5 posições:

    int vtor[5];
    int *p = vtor;

    printf("Por favor, digite 5 numeros:");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", p);
        p++;
    }

    //! o vetor é zerado:
    p = vtor;

    for (int i = 0; i < 5; i++)
    {
        //! nesta parte o elemento do vetor é multiplicado por 2:
        printf("%d\n", *p * 2);
        p++;
    }

    return 0;
}

void questao7()
{
    int A, *B, **C, ***D;

    printf("Digite um numero inteiro qualquer:\n");
    scanf("%d", &A);

    B = &A;
    C = &B;
    D = &C;

    //! calculando os numeros:

    int dobro = 2 * (*B);
    int triplo = 3 * (**C);
    int quadrupulo = 4 * (***D);

    printf("======================================\n");
    printf("Mostrando todos os valores:\n\n");

    printf("Valor original digitado: %d\n", A);
    printf("O dobro - Atraves de B (x2): %d\n", dobro);
    printf("O triplo - Vindo de C (x3): %d\n", triplo);
    printf("O quadrupulo - Vindo de D (x4): %d\n", quadrupulo);

    printf("======================================");

    return 0;
}

// OBS: a funcao "ordenacaonumerica" faz parte da funcao da questão 08.
void questao8()
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

// OBS: a funcao "frac" faz parte da funcao da questão 09.
void questao9()
{

    //! prototipo da funcao:
    void frac(float num, int *inteiro, float *frac);

    float num;
    int inteiro_part;
    float fracionaria_part;

    printf("Digite um numero real:\n");
    scanf("%f", &num);

    frac(num, &inteiro_part, &fracionaria_part);

    printf("=======================================\n");
    printf("Exibindo resultados: \n");
    printf("=======================================\n");

    printf("Parte inteira: %d\n", inteiro_part);
    printf("Parte Fracionaria: %.5f\n", fracionaria_part);

    return 0;
}
void frac(float num, int *inteiro, float *frac)
{
    *inteiro = (int)num;
    *frac = num - *inteiro;

    if (*frac < 0)
    {
        *frac = -*frac;
    }
}

// OBS: a funcao "negativos" faz parte da funcao da questão 10.
void questao10()
{

    //! prototipo da funcao usada nesta questao:
    int negativos(float vetor[], int tamanho_do_array);

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

// OBS: a funcao "encontrarMinimoeMaximo" faz parte da funcao da questão 11.
void questao11()
{
    //! prototipo da funcao desenvolvida nesta questao:
    int encontrarminimoemaximo(int vetor[], int tamanho_geral, int *minimo, int *maximo);

    int vetor[5];
    int menor_vlr, maior_vlr;
    printf("Por favor, digite 5 numeros inteiros: \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &vetor[i]);
    }

    encontrarminimoemaximo(vetor, 5, &menor_vlr, &maior_vlr);

    printf("=======================================\n");
    printf("Exibindo resultados: \n");
    printf("Maior Valor: %d\n", maior_vlr);
    printf("Menor Valor: %d\n", menor_vlr);
    printf("=======================================\n");

    return 0;
}
int encontrarminimoemaximo(int vetor[], int tamanho_geral, int *minimo, int *maximo)
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

// OBS: a funcao "interseccaogeral" faz parte da funcao da questão 13.
void questao13()
{

    int x1[] = {1, 3, 5, 6, 7};
    int x2[] = {1, 3, 4, 6, 8};
    int n1 = 5, n2 = 5;
    int qtd; //! tamanho finnal do vetor.

    int *x3 = interseccaogeral(x1, x2, n1, n2, &qtd);

    printf("Vetor intersecao --> tamanho |%d|:\n", qtd);
    for (int i = 0; i < qtd; i++)
    {
        printf("%d ", x3[i]);
    }
    printf("\n");

    free(x3); //! liberando toda a memoria alocada.
    return 0;
}
int *interseccaogeral(int *x1, int *x2, int n1, int n2, int *qtd)
{

    int *x3 = malloc((n1 < n2 ? n1 : n2) * sizeof(int)); // máximo real possível
    int k = 0;

    //! vai percorrer o  x1 e buscar os elementos que também estão em x2:
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (x1[i] == x2[j])
            {

                //! Verifica se já foi adicionado:
                int repetido = 0;
                for (int t = 0; t < k; t++)
                {
                    if (x3[t] == x1[i])
                    {
                        repetido = 1;
                        break;
                    }
                }
                if (!repetido)
                {
                    x3[k++] = x1[i];
                }
                break; //! ja acha o elemento repetido
            }
        }
    }

    //*  o tamanho real do vetor ajustado
    x3 = realloc(x3, k * sizeof(int));

    *qtd = k; //! tamango geral da interseccao
    return x3;
}

// OBS: as funcoes "testar_uniao e uniao" faz parte da funcao da questão 12.
void questao12()
{

    testar_uniao();
}
void testar_uniao()
{
    int x1[] = {1, 3, 5, 6, 7};
    int x2[] = {1, 3, 4, 6, 8};
    int n1 = 5, n2 = 5;
    int qtd;

    int *x3 = uniao(x1, x2, n1, n2, &qtd);

    if (x3 != NULL)
    {
        printf("x3 = {");
        for (int i = 0; i < qtd; i++)
        {
            printf("%d", x3[i]);
            if (i < qtd - 1)
            {
                printf(", ");
            }
        }
        printf("}\n");
        printf("Tamanho: %d\n", qtd);

        free(x3); // Libera a memória alocada
    }
    else
    {
        printf("Erro na alocação de memória!\n");
    }
}
int *uniao(int *x1, int *x2, int n1, int n2, int *qtd)
{
    // Vetor temporário para armazenar todos os elementos
    int *temp = (int *)malloc((n1 + n2) * sizeof(int));
    if (temp == NULL)
    {
        return NULL;
    }

    // Copia todos os elementos de x1 para  o vetor temporraio
    for (int i = 0; i < n1; i++)
    {
        temp[i] = x1[i];
    }

    // Copia todos os elementos de x2 para temp
    for (int i = 0; i < n2; i++)
    {
        temp[n1 + i] = x2[i];
    }

    // Ordena o vetor temporário (usando bubble sort simples)
    for (int i = 0; i < n1 + n2 - 1; i++)
    {
        for (int j = 0; j < n1 + n2 - i - 1; j++)
        {
            if (temp[j] > temp[j + 1])
            {
                int aux = temp[j];
                temp[j] = temp[j + 1];
                temp[j + 1] = aux;
            }
        }
    }

    // remove duplicacoes e conta elementos únicos
    int count = 0;
    for (int i = 0; i < n1 + n2; i++)
    {
        // Se for o primeiro elemento ou diferente do anterior, conta
        if (i == 0 || temp[i] != temp[i - 1])
        {
            count++;
        }
    }

    // alocando ao vetor final
    int *x3 = (int *)malloc(count * sizeof(int));
    if (x3 == NULL)
    {
        free(temp);
        return NULL;
    }

    // Preenche x3 com elementos únicos
    int index = 0;
    for (int i = 0; i < n1 + n2; i++)
    {
        if (i == 0 || temp[i] != temp[i - 1])
        {
            x3[index++] = temp[i];
        }
    }

    // liberando o vetor temporário
    free(temp);

    // Retorna o tamanho via ponteiro
    *qtd = count;

    return x3;
}

// OBS: a funcao "calccularsoma" faz parte da funcao da questão 02.
void questao2()
{
    int a, b;

    printf("Digite o valor de A:\n");
    scanf("%d", &a);

    printf("Digite o valor de B:\n");
    scanf("%d", &b);

    printf("Valores antes da funcao da mudanca de valores:\n");
    printf("O valor de A: %d\n", a);
    printf("O valor de B: %d\n", b);

    calccularsoma(&a, b);

    printf("Valores apos a funcao da mudanca de valores:\n");
    printf("O valor de A: %d\n", a);
    printf("O valor de B: %d\n", b);

    return 0;
}
int calccularsoma(int *a, int b)
{

    *a = *a + b;
}

void questao15()
{
    printf("Ao revisar e por o codigo em pratica, tive a conclusao que a varivel i nao teve o seu valor modificado em momento algum,\n alem disso, o valor de j eh indefinido => possui 33 de lixo de memoria\n, Logo, P =>  possui endereço inválido.\n. Em conclusao, A expressão *p++ incrementa o ponteiro p , não o valor de i, fazendo p apontar para uma posição de memória desconhecida.");
}

void questao16()
{

    printf("Nesta questao 16, o codigo e responsavel por criar uma matriz dinamica 2x2 usando malloc,\n onde cada indice da matriz i e j e preenchido, logo apos é impressa para o usuario e toda a memoria e limpa.");
}

void questao14(){
    printf("Questao 14 - Funcao para criar vetor com uniao de outros dois vetores\n");
    printf("Esta funcao ja foi implementada na questao 12.\n");
}