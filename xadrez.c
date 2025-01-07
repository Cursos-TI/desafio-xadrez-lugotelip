#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Número de casas que cada peça pode se mover
#define BISPO_MOV 5     //Movimento do Bispo
#define TORRE_MOV 5     //Movimento da Torre
#define RAINHA_MOV 8    //Movimento da Rainha

// Movimentação das peças
void movimenta_bispo(int casas) {
    if (casas == 0) return;
    printf("Cima \n");
    printf("Direita \n");
    movimenta_bispo(casas - 1);
}

void movimenta_torre(int casas) {
    if (casas == 0) return;
    printf("Direita \n");
    movimenta_torre(casas - 1);
}

void movimenta_rainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda \n");
    movimenta_rainha(casas - 1);
}

// Movimentação do Cavalo
void movimenta_cavalo() {
    printf("\n Movimentação do Cavalo: \n");
    int movimentos[8][2] = {
        {2, 1}, {1, 2}, {-1, 2}, {-2,1},
        {-2, -1}, {-1, -2}, {1, -2}, {2, -1}
    };

    for (int i = 0; i < 8; i++){
        int horizontal = movimentos[i][0];
        int vertical = movimentos[i][1];
        printf("Movimento em L: Horizontal %d, Vertical %d\n", horizontal, vertical);
    }
}

int main() {
    // Movimentação das peças
    printf("Movimentação do Bispo: \n");
    movimenta_bispo(BISPO_MOV);

    printf("\n Movimentação da Torre: \n");
    movimenta_torre(TORRE_MOV);

    printf("\n Movimentação da Rainha: \n");
    movimenta_rainha(RAINHA_MOV);

    //Movimentação do Cavalo
    movimenta_cavalo();

    return 0;
}
