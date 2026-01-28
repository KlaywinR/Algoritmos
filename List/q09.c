#include <stdio.h>

void frac(float num, int *inteiro, float *frac);

int main()
{

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