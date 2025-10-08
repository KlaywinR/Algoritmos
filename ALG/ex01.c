#include <stdio.h>
int main()
{

    int a = 5;  // inteiro NATURAL
    int b = 12; // inteiro natural
    int *p; // ponteiro de p
    int *q;   // ponteiro de q 
    p = &a; // nesta parte, p está apontando para o endereço de memória de A, e q e está apontando para o emndereço de memória de B
    p = &b;

    int c = *p + *q;
      
    printf("O valor de c eh: %.2f ", c);

    return 0;
}