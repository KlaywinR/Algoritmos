
#include <stdio.h>

int main() {
    int numero, i;
    float num = 0, denominador = 0;

    printf("Digite n: ");
    scanf("%d", &numero);

    for (i = 1; i <= numero; i++) {
        num += i * i + 1;
        denominador += i + 3;
    }

    printf("Soma final :  %.2f\n", num / denominador);
    return 0;
}





