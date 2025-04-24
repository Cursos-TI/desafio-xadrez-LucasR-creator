#include <stdio.h>

int main() {
    // Posição inicial do cavalo
    int cima = 1;
    int direita = 2;

    printf("Iniciando o movimento do cavalo...\n");

    // Loop while para mover o cavalo em "L"
    while (cima < direita) {
        // Movimento para cima
        for (int i = 0; i < 1; i++) {
            printf("Movendo para cima\n");
            cima++;
        }

        // Movimento para a esquerda
        for (int j = 0; j < 1; j++) {
            printf("Movendo para a esquerda\n");
            direita--;
        }
    }

    printf("Movimento completo.\n");

    return 0;
}