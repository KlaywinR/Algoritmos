#define Y 2
#define X 2

int main(int argc, char *argv[]) {
    int **A;
    int i, j;

    // Aloca memória para as linhas (array de ponteiros)
    A = (int**)malloc(Y * sizeof(int*));
    
    // Para cada linha, aloca memória para as colunas
    for(i = 0; i < Y; i++)
        A[i] = (int*)malloc(X * sizeof(int));
    
    // Preenche a matriz com valores
    for(i = 0; i < Y; i++)
        for(j = 0; j < X; j++)
            A[i][j] = i + j;
    
    // Imprime a matriz
    for(i = 0; i < Y; i++)
        for(j = 0; j < X; j++)
            printf("%d \t", A[i][j]);
    
    // Libera a memória
    for(i = 0; i < Y; i++)
        free(A[i]);
    free(A);
    
    return 0;
}