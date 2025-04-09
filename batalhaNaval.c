#include <stdio.h>

int main(){
    //Declaração de variáveis.
    int linhas[10]; // Indice de 1 a 10.
    char colunas[10]; // Colunas de A a J.
    int tabuleiro[10][10]; // Matriz do tabuleiro completo
    int navioHorizontal = 3; // Navios recebem valor 3
    int navioVertical = 3; // Navios recebem valor 3
    int navioDiagonal = 3; // Navios recebem valor 3
    int agua = 0; // Água recebe valor 0
    
    //Estrutura aninhada para definir o tabuleiro com o (agua).
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            tabuleiro[i][j] = agua;
        }
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

    // Posicionando o navio horizontal na na posição: F1, G1, H1.
    tabuleiro[0][5] = navioHorizontal;
    tabuleiro[0][6] = navioHorizontal;
    tabuleiro[0][7] = navioHorizontal;

    // Posicionando o navio Vertical na posição: A6, A7, A8.
    tabuleiro[5][0] = navioVertical;
    tabuleiro[6][0] = navioVertical;
    tabuleiro[7][0] = navioVertical;

    //######################### Posicionando 2 navios em diagonais #########################

    for (int i = 0; i < 10; i++) //Estr. repet. externa para percorrer as linhas do tabuleiro.
    {    
        for (size_t j = 0; j < 10; j++) //Estr. repet. interna para percorrer as colunas do tabuleiro.
        {
            if (i==j)// Estr. decisão p/ executar somente as diagonais do tabuleiro.
            {
                if (i < 4)// Estr. decisão p/ limitar execução até a linha 4 (indice linha 3)
                {
                    if(i == 0)continue;// Pulando a interação com a linha 1 (indice linha 0), limitando o tamanho do barco
                    tabuleiro[i][j] = navioDiagonal;// Tabuleiro recebendo valor 3 em B2[1][1], C3[2][2] e D4[3][3]
                }               
            }
                if (i+j == 14)// Estr. decisão p/ executar diagonal de minha escolha.
                {
                    if (j > 5)// Estr. decisão p/ limitar execução apartir da coluna G (indice coluna 6)
                    {
                        if(j == 9)break;//Saindo da interação com a coluna J (indice coluna 9), limitando o tamanho do barco.
                        tabuleiro[i][j] = navioDiagonal;// Tabuleiro recebendo valor 3 em G9[8][6], H8[7][7] e I7[6][8].
                    }
                }        
        }
        
    }    

    //Exibindo o título do jogo.
    printf("#### TABULEIRO DE BATALHA NAVAL ####\n\n");
    printf("   |");

    // Estrutura de repetição para imprimir o índice das colunas do tabuleiro
    for (int i = 0; i < 10; i++)
    {
        printf(" %2c", colunas[i]);
    }

    printf("\n");
    printf(" —————————————————————————————————\n");

    // Estrutura de repetição aninhada para imprimir o índice de linhas e a Matriz final do tabuleiro.
    for (int i = 0; i < 10; i++)// Estrutura de repetição externa para imprimir as 10 linhas do tabuleiro.
    {
        printf("%2d |", linhas[i]);// Imprime o indice de 1 a 10 de forma sequencial conforme a condição do loop.
        for (int j = 0; j < 10; j++)// Estrutura de repetição interna para imprimir os valores da Matriz no tabuleiro.
        {   //// Imprime os valores na linha, posição por posição de forma sequencial confome a condição do loop.
            printf(" %2d", tabuleiro[i][j]);
        }
    printf("\n");
}
return 0;
}