#include <stdio.h>
int main(){

int a, b;

printf("Digite o valor de A:\n");
scanf("%d", &a);

printf("Digite o valor de B:\n");
scanf("%d", &b);

printf("Valores antes da funcao da mudanca de valores:\n");
printf("O valor de A: %d\n", a);
printf("O valor de B: %d\n",b);

calccularsoma(&a,b);

printf("Valores apos a funcao da mudanca de valores:\n");
printf("O valor de A: %d\n", a);
printf("O valor de B: %d\n",b);

    return 0;
}


calccularsoma(int *a, int b){

    *a = *a + b;
}