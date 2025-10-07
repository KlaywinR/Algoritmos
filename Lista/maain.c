#include <stdio.h>
#include <stdlib.h>

//! assinaturas das funções das questões:
void questao1();
void questao2();
void questao3();
void questao4();
void questao5();
void questao6();
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

//! declaracao de tpdas as funcoes auxiliares que usei:
int ordenacaonumerica(int *a, int *b, int *c);
void frac(float num, int *inteiro, float *frac);
int negativos(float vetor[], int tamanho_do_array);
void encontrarminimoemaximo(int vetor[], int tamanho_geral, int *minimo, int *maximo);
int *interseccaogeral(int *x1, int *x2, int n1, int n2, int *qtd);
void testar_uniao();
int *uniao(int *x1, int *x2, int n1, int n2, int *qtd);
void calccularsoma(int *a, int b);

//! ------------------ PROGRAMA PRINCIPAL -----------------
int main()
{
    int opcao;
    do
    {
        printf("\n- Menu do Aluisio -\n");
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
        printf("0 - Sair\n\n");
        printf("Escolha uma opcao, Aluisio: ");
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
            printf("Saindo do menu...\n");
            break;
        default:
            printf("Opss, opcao invalida Sr. Aluisio, tente de novo!!\n");
            break;
        }

    } while (opcao != 0);

    return 0;
}

void questao1()
{
    printf("== Voce esta na questao 1 ==\n\n");

    int numero_inteiro = 10;
    char caractere = 'X';
    float numero_decimal = 7.7;

    int *ponteiro_inteiro;
    float *ponteiro_decimal;
    char *ponteiro_char;

    ponteiro_char = &caractere;
    ponteiro_inteiro = &numero_inteiro;
    ponteiro_decimal = &numero_decimal;

    printf("Imprimindo todos os valores antes da modificacao:\n");
    printf("O numero inteiro: %d\n", numero_inteiro);
    printf("O numero decimal: %.2f\n", numero_decimal);
    printf("O caractere: %c\n", caractere);

    *ponteiro_char = 'Z';
    *ponteiro_inteiro = 200;
    *ponteiro_decimal = 2.6;

    printf("\nImprimindo todos os valores apos a modificacao:\n");
    printf("O numero inteiro: %d\n", numero_inteiro);
    printf("O numero decimal: %.2f\n", numero_decimal);
    printf("O caractere: %c\n", caractere);
}

void questao2()
{
    printf("== Voce esta na questao 2 ==\n\n");

    int a, b;

    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);

    printf("\nValores antes da funcao:\n");
    printf("A = %d\n", a);
    printf("B = %d\n", b);

    calccularsoma(&a, b);

    printf("\nValores apos a funcao:\n");
    printf("A = %d\n", a);
    printf("B = %d\n", b);
}

void calccularsoma(int *a, int b)
{
    *a = *a + b;
}

void questao3()
{
    printf("== Voce esta na questao 3 ==\n\n");

    float vetor[10];

    for (int i = 0; i < 10; i++)
    {
        vetor[i] = 0;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("Endereco do elemento %d: %p\n", i, &vetor[i]);
    }
}

void questao4()
{
    printf("== Voce esta na questao 4 ==\n\n");

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

    printf("Enderecos da matriz 3x3:\n");
    for (int i = 0; i < nlinhas; i++)
    {
        for (int j = 0; j < ncolunas; j++)
        {
            printf("matriz[%d][%d]: %p\n", i, j, &matriz[i][j]);
        }
    }
}

void questao5()
{
    printf("== Voce esta na questao 5 ==\n\n");

    int vtor[5];
    int *p = vtor;

    printf("Por favor, digite 5 numeros: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", p);
        p++;
    }

    p = vtor;
    printf("\nDobro dos elementos:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", *p * 2);
        p++;
    }
}

void questao6()
{
    printf("== Voce esta na questao 6 ==\n\n");

    int vetor[5];

    printf("Por favor, digite 5 numeros inteiros:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &vetor[i]);
    }

    printf("\nEnderecos dos numeros pares:\n");
    for (int i = 0; i < 5; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            printf("Elemento |%d| valor => |%d| - Endereco do elemento: %p\n", i, vetor[i], &vetor[i]);
        }
    }
}

void questao7()
{
    printf("== Voce esta na questao 7 ==\n\n");

    int A, *B, **C, ***D;

    printf("Digite um numero inteiro: ");
    scanf("%d", &A);

    B = &A;
    C = &B;
    D = &C;

    int dobro = 2 * (*B);
    int triplo = 3 * (**C);
    int quadruplo = 4 * (***D);

    printf("\nResultados:\n");
    printf("Valor original: %d\n", A);
    printf("Dobro --> Via B: %d\n", dobro);
    printf("Triplo --> Via C: %d\n", triplo);
    printf("Quadruplo --> Via D: %d\n", quadruplo);
}

void questao8()
{
    printf("== Voce esta na questao 8 ==\n\n");

    int numero1, numero2, numero3;
    int resultado;

    printf("Digite tres numeros inteiros: ");
    scanf("%d %d %d", &numero1, &numero2, &numero3);

    resultado = ordenacaonumerica(&numero1, &numero2, &numero3);

    printf("Todos os valores ordenados: %d, %d, %d\n", numero1, numero2, numero3);

    if (resultado == 1)
        printf("Todos os valores sao iguais.\n");
    else
        printf("Os valores digitados sao diferentes.\n");
}

int ordenacaonumerica(int *a, int *b, int *c)
{
    int vetor[3] = {*a, *b, *c};
    int temp;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2 - i; j++)
        {
            if (vetor[j] > vetor[j + 1])
            {
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }

    *a = vetor[0];
    *b = vetor[1];
    *c = vetor[2];

    if (*a == *b && *b == *c)
        return 1;
    else
        return 0;
}

void questao9()
{
    printf("== Voce esta na questao 9 ==\n\n");

    float num;
    int inteiro_part;
    float fracionaria_part;

    printf("Digite um numero real: ");
    scanf("%f", &num);

    frac(num, &inteiro_part, &fracionaria_part);

    printf("\nResultados Obtidos:\n");
    printf("Parte inteira: %d\n", inteiro_part);
    printf("Parte fracionaria: %.5f\n", fracionaria_part);
}

void frac(float num, int *inteiro, float *frac)
{
    *inteiro = (int)num;
    *frac = num - *inteiro;
    if (*frac < 0)
        *frac = -*frac;
}

void questao10()
{
    printf("== Voce esta na questao 10 ==\n\n");

    int tamanho_do_array;

    printf("Digite o tamanho do array: ");
    scanf("%d", &tamanho_do_array);

    float vetor[tamanho_do_array];

    for (int i = 0; i < tamanho_do_array; i++)
    {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%f", &vetor[i]);
    }

    int quant_negativos = negativos(vetor, tamanho_do_array);

    printf("\nQuantidade de numeros negativos: %d\n", quant_negativos);
}

int negativos(float vetor[], int tamanho_do_array)
{
    int count = 0;
    for (int i = 0; i < tamanho_do_array; i++)
    {
        if (vetor[i] < 0)
            count++;
    }
    return count;
}

void questao11()
{
    printf("== Voce esta na questao 11 ==\n\n");

    int vetor[5];
    int menor_vlr, maior_vlr;

    printf("Digite 5 numeros inteiros: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &vetor[i]);
    }

    encontrarminimoemaximo(vetor, 5, &menor_vlr, &maior_vlr);

    printf("---------------------------------\n");
    printf("\nMaior Valor: %d\n", maior_vlr);
    printf("Menor Valor: %d\n", menor_vlr);
    printf("---------------------------------");
}

void encontrarminimoemaximo(int vetor[], int tamanho_geral, int *minimo, int *maximo)
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

void questao12()
{
    printf("== Voce esta na questao 12 ==\n\n");
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
        printf("Uniao de todos os vetores:\n");
        printf("x3 = {");
        for (int i = 0; i < qtd; i++)
        {
            printf("%d", x3[i]);
            if (i < qtd - 1)
                printf(", ");
        }
        printf("}\n");
        printf("Tamanho: %d\n", qtd);
        free(x3);
    }
    else
    {
        printf("Ops, erro na alocacao de memoria!\n");
    }
}

int *uniao(int *x1, int *x2, int n1, int n2, int *qtd)
{
    int *temp = (int *)malloc((n1 + n2) * sizeof(int));
    if (temp == NULL)
        return NULL;

    for (int i = 0; i < n1; i++)
        temp[i] = x1[i];
    for (int i = 0; i < n2; i++)
        temp[n1 + i] = x2[i];

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

    int count = 0;
    for (int i = 0; i < n1 + n2; i++)
    {
        if (i == 0 || temp[i] != temp[i - 1])
            count++;
    }

    int *x3 = (int *)malloc(count * sizeof(int));
    if (x3 == NULL)
    {
        free(temp);
        return NULL;
    }

    int index = 0;
    for (int i = 0; i < n1 + n2; i++)
    {
        if (i == 0 || temp[i] != temp[i - 1])
        {
            x3[index++] = temp[i];
        }
    }

    free(temp);
    *qtd = count;
    return x3;
}

void questao13()
{
    printf("== Voce esta na questao 13 ==\n\n");

    int x1[] = {1, 3, 5, 6, 7};
    int x2[] = {1, 3, 4, 6, 8};
    int n1 = 5, n2 = 5;
    int qtd;

    int *x3 = interseccaogeral(x1, x2, n1, n2, &qtd);

    printf("Intersecao dos vetores (tamanho -->  %d):\n", qtd);
    for (int i = 0; i < qtd; i++)
    {
        printf("%d ", x3[i]);
    }
    printf("\n");

    free(x3);
}

int *interseccaogeral(int *x1, int *x2, int n1, int n2, int *qtd)
{
    int *x3 = malloc((n1 < n2 ? n1 : n2) * sizeof(int));
    int k = 0;

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (x1[i] == x2[j])
            {
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
                break;
            }
        }
    }

    x3 = realloc(x3, k * sizeof(int));
    *qtd = k;
    return x3;
}

void questao14()
{
    printf("== Voce esta na questao 14 ==\n\n");

    int A, B;

    void calcularsoma(int *A, int B) {
        *A = *A + B;
    }

    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    printf("\nValores digitados antes da funcao:\n");
    printf("A = %d\n", A);
    printf("B = %d\n", B);

    calcularsoma(&A, B);

    printf("\nValores apos o uso da funcao:\n");
    printf("A = %d\n", A);
    printf("B = %d\n", B);
}

void questao15()
{
    printf("== Voce esta na questao 15 ==\n\n");

    printf("Minha analise do codigo com ponteiros:\n");
    printf("A variavel i nao teve seu valor modificado.\n");
    printf("O valor de j eh indefinido (lixo de memoria + 33).\n");
    printf("O ponteiro p aponta para endereco invalido.\n");
    printf("A expressao *p++ incrementa o ponteiro p, nao o valor de i.\n");
}

void questao16()
{

    printf("===============================================================================\n");
    printf("QUESTÃO 16 - MATRIZ DINÂMICA 2x2\n");
    printf("===============================================================================\n");
    printf("Este código demonstra a criação e manipulação de uma matriz bidimensional 2x2\n");
    printf("alocada dinamicamente na memória usando ponteiros para ponteiros.\n\n");
    printf("Funcionamento:\n");
    printf("1. Alocada em duas etapas:\n");
    printf("   - Primeiramente ela aloca um array de ponteiros para as linhas Y\n");
    printf("   - Depois para cada linha, aloca um array de inteiros para as colunas X\n\n");
    printf("2. Preenchimento da Matriz => Cada elemento A[i][j] recebe a soma dos índices (i + j)\n\n");
    printf("3. Mostra a matriz formatada na tela\n\n");
    printf("4. Liberacao de memoria\n");
    printf("   - Primeiro libera cada linha colunas\n");
    printf("   - e por ultimo libera o array de ponteiros linhas\n\n");
    printf("===============================================================================\n\n");
}