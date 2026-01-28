#include <stdio.h>

//prototipo
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

//i = f que ambos apontam para o mesmo caractere --> centro
//i > f: ponteiro cruzado.
//i >= f: nao ha nada a fazer.
void RecursivaInverter(char *inicio, char *fim) {
    if (inicio >= fim) {
        return; 
    }
//troca de caractere:
/*
*fim = direita

*/

    char temp = *inicio;
    *inicio = *fim;
    *fim = temp;

//é chamada p separar a parte logica da do usuario
    RecursivaInverter(inicio + 1, fim - 1);
}

//encontra o fiim da string e chama ela - ponteiro de caracteree
//fim vai ser usado para achar o último caractere da string.
void inverter(char *str) {
    char *fim = str;

//vai ate o ultimo cacrtere da palavra
//ve o valor do caractere - verifica se é o terminador da string.
    while (*(fim + 1) != '\0') {
        fim++;
    }

//chamando novamente a funcao recurssiva
    RecursivaInverter(str, fim);
}
