#include <stdio.h>
int main()
{
    int i = 7;
    int j = 3;
    int *p;
    int **r;
    p = &i;
    r = &p;

    int c = **r + j;

    printf("Valor de j eh: %i", j);

    return 0;
}