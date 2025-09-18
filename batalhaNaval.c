#include <stdio.h>

int main() {
    char Tabuleiro[10][10];

    // Preencher a matriz com '0' (representando água)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            Tabuleiro[i][j] = '0';
        }
    }

    // Colocar um barco horizontal de 3 casas na linha 6 (índice 6, sétima linha)
    for (int j = 3; j < 6; j++) {
        Tabuleiro[2][j] = '3';

        
    }

    // Colocar um barco vertical de 3 casas na linha 6 (índice 5, sétima linha)
    for (int i = 5; i <= 7; i++) {
        Tabuleiro[i][7] = '3'; //coluna h 
    }

    // Cabeçalho
    printf("  TABULEIRO BATALHA NAVAL\n\n");
    printf("   A B C D E F G H I J\n");

    // Mostrar tabuleiro numerado
    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1);
        for (int j = 0; j < 10; j++) {
            printf("%c ", Tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
