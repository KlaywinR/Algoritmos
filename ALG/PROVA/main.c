#include <stdio.h>

//! assinatura de todas as questoes da prova:
void questao01();
void questao02();
void questao03();
void questao04();
void questao05();

//! funcoes auxiliares usadas nas questoes resolvidas:
// questao01:
int multiplicar(int A, int b);
// questao4:
float CalcularArea(int *BaseMaior, int *BaseMenor, int *Altura);
// questao5:
void preencherVetor(int *vetor, int tamanhoTotal, int valorTotal);
// questao03:
void RecursivaInverter(char *inicio, char *fim);
void inverter(char *str);

int main(void)
{

    int opcao;

    do
    {
        printf(" --- Menu do Aluisio ---\n");
        printf("1 - Quero visualizar a questao 01\n");
        printf("2 - Quero visualizar a questao 02\n");
        printf("3 - Quero visualizar a questao 03\n");
        printf("4 - Quero visualizar a questao 04\n");
        printf("5 - Quero visualizar a questao 05\n\n");
        printf("Escolha uma opcao, Aluisio:");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            questao01();
            break;
        case 2:
            questao02();
            break;

        case 3:
            questao03();
            break;

        case 4:
            questao04();
            break;
        case 5:
            questao05();
            break;

        case 0:
        printf("Neste momento estamos saindo do nosso sistema de menu, Sr. Aluisio\n");
        default:
        printf("Ops, opcao invalida Sr. Aluisio, tente de novo!!");
            break;
        }
    } while (opcao != 0);
}

//funcao multiplicar faz parte da questao01:
void questao01(){
 int a, b;
 printf("-----------------------------------------\n");
 printf("Por favor, Digite dois numeros naturais:\n");
 scanf("%d %d", &a, &b);

 int resultado = multiplicar(a, b);
   printf("%d * %d = %d\n", a, b, resultado);

}
int multiplicar(int A, int b) {
    if (A == 0)
        return 0;               
    else
        return b + multiplicar(A - 1, b);  
} 

void questao02(){
    int numero, i;
    float num01 = 0, denominador = 0;

    printf("Digite n: ");
    scanf("%d", &numero);

    for (i = 1; i <= numero; i++) {
        num01 += i * i + 1;
        denominador += i + 3;
    }
     //nesta soma final sempre sera num1 dividido pelo denominador
    printf("Soma final :  %.2f\n", num01 / denominador);
    return 0;
}

//funcoes "RecursivaInverter e Inverter" fazem parte da questao03:
void questao03(){
//prototipos 
void RecursivaInverter(char *inicio, char *fim);
void inverter(char *str);


    char palavra[100];

    printf("Por favor, Aluisio digite uma palavra: ");
    scanf("%s", palavra);

    inverter(palavra);

    printf("A palavra que voce digitou invertida: %s\n", palavra);

    return 0;
}
//usada para inverte o caracterr do inicio ao fim:
void RecursivaInverter(char *inicio, char *fim) {
    if (inicio >= fim) {
        return; 
    }

//trocando todos os carater psiveis:
    char temp = *inicio;
    *inicio = *fim;
    *fim = temp;

//usando a chamada recursiva - para o centro
    RecursivaInverter(inicio + 1, fim - 1);
}
//encontra o fiim da string e chama ela - ponteiro de caracteree
void inverter(char *str) {
    char *fim = str;

//vai ate o ultimo cacrtere da palavra
    while (*(fim + 1) != '\0') {
        fim++;
    }

//chamando novamente a funcao recurssiva
    RecursivaInverter(str, fim);
}

//funcoes "CalcularArea" faz parte da questao04:
void questao04(){
      int baseMaior, baseMenor,altura;
    double area;
  
    printf("Digite a base maior: ");
    scanf("%d", &baseMaior);

    printf("Digite a base menor: ");
    scanf("%d", &baseMenor);

    printf("Digite a altura: ");
    scanf("%d", &altura);

 area = CalcularArea(&baseMaior, &baseMenor, &altura);

    printf("A area total do trapezio eh: %.2f\n", area);

}
float CalcularArea(int *BaseMaior, int *BaseMenor, int *Altura) {
    float area;
    area = ((*BaseMaior + *BaseMenor) * (*Altura)) / 2.0;
    return area;
}


//funcão "preencherVetor" faz parte da questao05:
void questao05(){
    int vetor[6];
    int valor = 10;

    preencherVetor(vetor, 6, valor);

//usei o indice do vetor dentro deste for:
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", vetor[i]);
    }

}
void preencherVetor(int *vetor, int tamanhoTotal, int valorTotal)
{

    int *fim = vetor + tamanhoTotal;

    while (vetor < fim)
    {
        *vetor = valorTotal;
        vetor++;
    }
}


