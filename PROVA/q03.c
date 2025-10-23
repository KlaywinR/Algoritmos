#include <stdio.h>

// prototipo
void RecursivaInverter(char *inicio, char *fim);
void inverter(char *str);

int main() {
    char palavra[100];

    printf("Digite uma palavra: ");
    scanf("%s", palavra); // lê sem espaços

    inverter(palavra); // chama a função para inverter

    printf("String invertida: %s\n", palavra);

    return 0;
}

//usada para inverter os caracteres do inicio ao fim:
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
