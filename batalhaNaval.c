#include <stdio.h>

int main(){
    //Declaração de variáveis
    int linhas[10];// Array de caracteres com 10 tamanhos de vetores designado para armazenar o indice de linhas de 1 a 10.
    char colunas[10];// Array de caracteres com 10 tamanhos de vetores designado para armazenar o indice de colunas de A a J.
    int tabuleiro[10][10];// Matriz com tamanhos 10x10 designado para armazenar todas posições do tabuleiro.
    int navioHorizontal[3]; // Array de caracteres com 3 tamanhos de vetores designado para armazenar o valor do Navio Horizontal.
    int navioVertical[3];// Array de caracteres com 3 tamanhos de vetores designado para armazenar o valor do Navio Vertical.

    //Estrutura de repetição aninhada para inicialização de forma automática o tabuleiro inteiro com valor 0.
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            tabuleiro[i][j] = 0;
        }   
    }
    
    // Estrutura de repetição para inicialização automática dos valores dos navios com numero 3.
    for (int i = 0; i < 3; i++)
    {
        navioHorizontal[i] = 3;
        navioVertical[i] = 3;
    }
    
    // Estrutura de repetição para inicialização automática dos valores das linhas de 1 a 10 no tabuleiro.
    for (int i = 0; i < 10; i++)
    {
        linhas[i] = i + 1;
    }

    // Estrutura de repetição para inicialização automática dos valores das colunas de A a J no tabuleiro.
    for (int i = 0; i < 10; i++)
    {
        colunas[i] = 'A' + i;
    }
    printf("\n");

    // Posicionando o navio horizontal na na posição: B2, C2, D2.
    tabuleiro[1][1] = navioHorizontal[0];
    tabuleiro[1][2] = navioHorizontal[1];
    tabuleiro[1][3] = navioHorizontal[2];

    // Posicionando o navio Vertical na posição: I7, I8, I9.
    tabuleiro[6][8] = navioVertical[0];
    tabuleiro[7][8] = navioVertical[1];
    tabuleiro[8][8] = navioVertical[2];

    //Exibindo o título do jogo.
    printf("#### TABULEIRO DE BATALHA NAVAL ####\n\n");
    printf("   | ");

    // Estrutura de repetição para imprimir o índice das colunas do tabuleiro.
    for (int i = 0; i < 10; i++)
    {
        printf(" %c ", colunas[i]);
    }

    printf("\n");
    printf(" —————————————————————————————————\n");

    // Estrutura de repetição aninhada para imprimir o índice de linhas e a Matriz final do tabuleiro.
    for (int i = 0; i < 10; i++){// Estrutura de repetição externa para imprimir as 10 linhas do tabuleiro.
        printf("%2d |", linhas[i]);// Imprime no começo da linha o indice de 1 a 10 de forma sequencial conforme a condição do loop.
        for (int j = 0; j < 10; j++){// Estrutura de repetição interna para imprimir os valores da Matriz no tabuleiro.
            printf(" %2d", tabuleiro[i][j]);// Imprime os valores na linha, posição por posição de forma sequencial confome a condição do loop.
        }
        printf("\n");
    }

    return 0;
}