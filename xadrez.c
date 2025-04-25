#include <stdio.h>

// Função recursiva para mover o bispo (diagonal: cima + direita)
void moverBispo(int passos) {
    if (passos == 0) return;
    printf("Cima\n");
    printf("Direita\n");
    moverBispo(passos - 1);
}

// Função recursiva para mover a torre (direita)
void moverTorre(int passos) {
    if (passos == 0) return;
    printf("Direita\n");
    moverTorre(passos - 1);
}

// Função recursiva para mover a rainha (esquerda)
void moverRainha(int passos) {
    if (passos == 0) return;
    printf("Esquerda\n");
    moverRainha(passos - 1);
}

int main() {
    printf("Movimentação da Torre:\n");
    moverTorre(5); // 5 casas para a direita

    printf("\nMovimentação do Bispo:\n");
    moverBispo(5); // 5 casas na diagonal superior direita

    printf("\nMovimentação da Rainha:\n");
    moverRainha(8); // 8 casas para a esquerda

    printf("\nMovimentação do Cavalo:\n");

    // Simula movimento em L: 2 para cima e 1 para a direita
    for (int cima = 0, direita = 0; cima < 2 || direita < 1; cima++, direita++) {
        if (cima < 2) {
            printf("Cima\n");
        } else {
            continue; // pula pra próxima iteração se já fez 2 passos pra cima
        }

        if (direita == 1) {
            break; // termina quando já foi uma vez pra direita
        }
        if (direita < 1) {
            printf("Direita\n");
        }
    }

    printf("\nMovimentos completos!\n");
    return 0;
}
