#include <stdio.h>


int main(){
    int baseMaior, baseMenor,altura;
    double area;
  
    printf("Digite a base maior: ");
    scanf("%d", &baseMaior);

    printf("Digite a base menor: ");
    scanf("%d", &baseMenor);

    printf("Digite a altura: ");
    scanf("%d", &altura);

 area = CalcularArea(&baseMaior, &baseMenor, &altura);

    printf("A area do trapezio eh: %.2f\n", area);

}

float CalcularArea(int *BaseMaior, int *BaseMenor, int *Altura) {
    float area;
    area = ((*BaseMaior + *BaseMenor) * (*Altura)) / 2.0;
    return area;
}

//os valores sao acessados atraves de desreferenciação - onde são passados os endereços das variáveis 
//acessados por *
