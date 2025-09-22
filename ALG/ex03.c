//O QUE AS LINHAS ABAIXO FAZEM?
#include <stdio.h>
int main(){
 
    int i = 99;
    int j;
    int *p;
    p = &i;
    j = *p + 100;

    printf("O valor de J eh: %d", j);
    
    return 0;
}