#include <stdio.h>
#include <stdlib.h>

int* uniao(int *x1, int *x2, int n1, int n2, int* qtd) {
    // Vetor temporário para armazenar todos os elementos
    int *temp = (int*)malloc((n1 + n2) * sizeof(int));
    if (temp == NULL) {
        return NULL;
    }
    
    // Copia todos os elementos de x1 para  o vetor temporraio
    for (int i = 0; i < n1; i++) {
        temp[i] = x1[i];
    }
    
    // Copia todos os elementos de x2 para temp
    for (int i = 0; i < n2; i++) {
        temp[n1 + i] = x2[i];
    }
    
    // Ordena o vetor temporário (usando bubble sort simples)
    for (int i = 0; i < n1 + n2 - 1; i++) {
        for (int j = 0; j < n1 + n2 - i - 1; j++) {
            if (temp[j] > temp[j + 1]) {
                int aux = temp[j];
                temp[j] = temp[j + 1];
                temp[j + 1] = aux;
            }
        }
    }
    
    // remove duplicacoes e conta elementos únicos
    int count = 0;
    for (int i = 0; i < n1 + n2; i++) {
        // Se for o primeiro elemento ou diferente do anterior, conta
        if (i == 0 || temp[i] != temp[i - 1]) {
            count++;
        }
    }
    
    // alocando ao vetor final
    int *x3 = (int*)malloc(count * sizeof(int));
    if (x3 == NULL) {
        free(temp);
        return NULL;
    }
    
    // Preenche x3 com elementos únicos
    int index = 0;
    for (int i = 0; i < n1 + n2; i++) {
        if (i == 0 || temp[i] != temp[i - 1]) {
            x3[index++] = temp[i];
        }
    }
    
    // liberando o vetor temporário
    free(temp);
    
    // Retorna o tamanho via ponteiro
    *qtd = count;
    
    return x3;
}

// Função para testar
void testar_uniao() {
    int x1[] = {1, 3, 5, 6, 7};
    int x2[] = {1, 3, 4, 6, 8};
    int n1 = 5, n2 = 5;
    int qtd;
    
    int *x3 = uniao(x1, x2, n1, n2, &qtd);
    
    if (x3 != NULL) {
        printf("x3 = {");
        for (int i = 0; i < qtd; i++) {
            printf("%d", x3[i]);
            if (i < qtd - 1) {
                printf(", ");
            }
        }
        printf("}\n");
        printf("Tamanho: %d\n", qtd);
        
        free(x3); // Libera a memória alocada
    } else {
        printf("Erro na alocação de memória!\n");
    }
}

int main() {
    testar_uniao();
    return 0;
}