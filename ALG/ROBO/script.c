#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/*
lemabrando: define == macro 
*/
#define Altura 20
#define Largura 20

//! métodos
void MovEsquerda(int *x);
void MovDireita(int *x);
void Cima(int *y);
void MovBaixo(int *y);
void imprimeMapa(int px, int py);
void limitedoTabuleiro(int *px, int *py);

int main(void)
{
    int px, py; //pos atual perso
    char ordem; //teclaa
    int continua = 1;

    srand(time(0));

    //inicio do personagem
    px = 10;
    py = 10;

    imprimeMapa(px, py);

    while (continua)
    { 
        //leitura do caracetere:
        ordem = getchar();

        switch (ordem)
        {

        case 'a':
        case 'A':
        //ambos estao sendo atualizados 
        /*
        ---> repeticao do mapa 
        ---> alteração: mudar em todos os cases.
        */
            MovEsquerda(&px);
            imprimeMapa(px, py);
            break;

        case 'd':
        case 'D':
            MovDireita(&px);
            
            break;

        case 'w':
        case 'W':

            Cima(&py);
            
            break;

        case 's':
        case 'S':
            MovBaixo(&px);
            
            break;
        case 'q':
        case 'Q':
            continua = 0;
            continue;
        }
        //personagem n sai do tabuleiro
        limitedoTabuleiro(&px, &py);
        imprimeMapa(px, py);
        printf("Sua posicao: %d, %d\n", px, py);
    }
    return 0;
}

void imprimeMapa(int px, int py)
{
    system("cls");
    for (int x = 0; x < Altura; x++)
    {
        for (int y = 0; y < Largura; y++)
        {
            if ((px == x && py == y))
            {
                printf("@"); // personage
            }
            else
                printf("+"); // chao do jogo
        }
        printf("\n");
    }
}

void limitedoTabuleiro(int *px, int *py)
{
    /*
    *px = pos. horiz
    
    */
    // n sai esquerda
    if (*px < 0)
        *px = 0;

    // n sai - direita
    if (*px >= Largura)
        *px = Largura - 1;

    // n sai - topo
    if (*py < 0)
        *py = 0;

    // n sai - fundo
    if (*py >= Altura)
        *py = Altura - 1;
}

void MovEsquerda(int *x)
{
    //! so e decrementado caso o ponteiro de x seja menor que 0.
    if (*x > 0)
    {
        (*x)--;
    }
} //x-1

void MovDireita(int *x)
{
    //! nao ultrapassa a borda da direita e aumenta uma casa à direita.
    if (*x < Largura - 1)
    {
        (*x)++;
    }
    //x+1
}

void MovBaixo(int *y)
{
    //! Não ultrapassa a ultima borda; assim desce a posição vertical
    if (*y < Altura - 1)
    {
        (*y)++;
    }
}//y+1

void Cima(int *y)
{
    //! ve se o robo esta na borda vertical e sobe ele
    if (*y > 0)
    {
        (*y)--;
    }
}//y -1
