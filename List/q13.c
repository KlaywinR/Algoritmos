#include <stdio.h>
#include <stdlib.h>

int* interseccaogeral(int *x1, int *x2, int n1, int n2, int *qtd);



int main(){
/*
13. Crie uma função que receba como parâmetros dois vetores de inteiros: x1 e x2 e as suas respectivas
quantidades de elementos: n1 e n2. A função deverá retornar um ponteiro para um terceiro vetor, x3, alocado
dinamicamente, contendo a intersecção de x1 e x2 e usar o ponteiro qtd para retornar o tamanho de x3. Sendo
x1 = {1, 3, 5, 6, 7} e x2 = {1, 3, 4, 6, 8}, x3 irá conter {1, 3, 6}. Assinatura da função: int* interseccao(int *x1, int
x2, int n1, int n2, int *qtd); 
*/

    int x1[] = {1, 3, 5, 6, 7};
    int x2[] = {1, 3, 4, 6, 8};
    int n1 = 5, n2 = 5;
    int qtd;  //! tamanho finnal do vetor.

    int *x3 = interseccaogeral(x1, x2, n1, n2, &qtd);

    printf("Vetor intersecao --> tamanho |%d|:\n", qtd);
    for (int i = 0; i < qtd; i++) {
        printf("%d ", x3[i]);
    }
    printf("\n");

    free(x3); //! liberando toda a memoria alocada.
    return 0;
}

//! implementando a funcao:
int* interseccaogeral(int *x1, int *x2, int n1, int n2, int *qtd) {

    int *x3 = malloc((n1 < n2 ? n1 : n2) * sizeof(int)); // máximo real possível
    int k = 0;

    //! vai percorrer o  x1 e buscar os elementos que também estão em x2:
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (x1[i] == x2[j]) {

                //! Verifica se já foi adicionado:
                int repetido = 0;
                for (int t = 0; t < k; t++) {
                    if (x3[t] == x1[i]) {
                        repetido = 1;
                        break;
                    }
                }
                if (!repetido) {
                    x3[k++] = x1[i];
                }
                break; //! ja acha o elemento repetido
            }
        }
    }

    //*  o tamanho real do vetor ajustado
    x3 = realloc(x3, k * sizeof(int));

    *qtd = k; //!tamango geral da interseccao
    return x3;
}


