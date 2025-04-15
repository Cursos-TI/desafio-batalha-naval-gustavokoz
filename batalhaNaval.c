#include <stdio.h>

int main() {
    //Criação da array do cabeçalho
    char cabeçalho[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10];
    // preenchendo tabuleiro com 0
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            tabuleiro[i][j] = 0;
    // criação do navio horizontal
    int navio[3] = {3, 3, 3};
    // criação do navio vertical
    int navio2[3] = {3, 3, 3};
    //criação dos navios diagonais
    int navio3[3] = {3, 3, 3};
    int navio4[3] = {3, 3, 3};
    //linha horizontal e coluna
    int linha = 0;
    int coluna = 0;
    //linha vertical e coluna
    int linha2 = 4;
    int coluna2 = 4;
    // substituição do 0 por 3 nas cordenadas desejadas
    for (int i = 0; i < 3; i++) {
        if(!tabuleiro[linha + i][coluna]){
            tabuleiro[linha][coluna + i] = navio[i];
        }else {
            printf("Navio horizontal inválido.\n");
            return 0;
        }
    }
    for (int i = 0; i < 3; i++) {
        if(!tabuleiro[linha2 + i][coluna2]){
            tabuleiro[linha2 + i][coluna2] = navio2[i];
        }else {
            printf("Navio vertical inválido.\n");
            return 0;
        }
    }
    //linha diagonal e coluna
    int linha3 = 6;
    int coluna3 = 6;

    //linha diagonal 2 e coluna
    int linha4 = 3;
    int coluna4 = 7;

    for (int i = 0; i < 3; i++) {
        if(!tabuleiro[linha3 + i][coluna3 + i]){
            tabuleiro[linha3 + i][coluna3 + i] = navio3[i];
        }else {
            printf("Navio diagonal inválido.\n");
            return 0;
        }
    }

    for (int i = 0; i < 3; i++) {
        if(!tabuleiro[linha4 + i][coluna4 + i]){
            tabuleiro[linha4 + i][coluna4 + i] = navio4[i];
        }else {
            printf("Navio diagonal2 inválido.\n");
            return 0;
        }
    }

    //Letras do cabeçalho
    printf("   ");
    for (int i = 0; i < 10; i++)
        printf("%c ",cabeçalho[i]);
    printf("\n");
    // resultado do tabuleiro
    for (int i = 0; i < 10; i++) {
        printf("\n%d  ", i);
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
    }
    printf("\n");
    return 0;
}
