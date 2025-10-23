#include <stdio.h>
int fatorial(int num);

int main(void)
{

    fatorial();

    return 0;
}

int fatorial(int num)
{
    int num;
    int resutado = 1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

   for (int i = num; i > 1; i--) {
        resultado *= i;
    }
printf("O fatorial de %d eh %d\n", num, fatorial);

}