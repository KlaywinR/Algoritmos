/*
Faça um algoritmo que calcule a área de um trapézio usando ponteiros. A função deve receber
como parâmetro calcArea(int *BMaior, int *BMenor, int *Altura). Fórmula é: Área = ((Base Maior
+ Base Menor) x Altura) / 2.
*/

#include <stdio.h>
int main(){

 int a, b;
 printf("Por favor, Digite dois numeros naturais:\n");
 scanf("%d %d", &a, &b);

 int resultado = multiplicar(a, b);
   printf("%d * %d = %d\n", a, b, resultado);

    

  return 0;

}

/*
a função chama a si mesma; cada ve que é a chamada soma b aoresultado da proxima chamada.
a - 1: até chegar no caso base.

*/
int multiplicar(int A, int b) {
    if (A == 0)
        return 0;               
    else
        return b + multiplicar(A - 1, b);  
} 
