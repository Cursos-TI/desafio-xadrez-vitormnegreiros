#include <stdio.h>

// Funções recursivas para os movimentos
void moverBispo(int passos) {
    if (passos == 0) return;
    printf("Cima\n");
    printf("Direita\n");
    moverBispo(passos - 1);
}

void moverTorre(int passos) {
    if (passos == 0) return;
    printf("Direita\n");
    moverTorre(passos - 1);
}

void moverRainha(int passos) {
    if (passos == 0) return;
    printf("Esquerda\n");
    moverRainha(passos - 1);
}

int main() {
    printf("\n=== Nivel Mestre ===\n\n");

    // Bispo (5 casas na diagonal direita para cima)
    printf("Movimento do Bispo:\n");
    moverBispo(5);

    // Torre (5 casas para a direita)
    printf("\nMovimento da Torre:\n");
    moverTorre(5);

    // Rainha (8 casas para a esquerda)
    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    // Cavalo (1 vez em L: 2 cima + 1 direita)
    printf("\nMovimento do Cavalo (em L):\n");
    for (int i = 0, j = 0; i < 3; i++) {
        if (i < 2) {
            printf("Cima\n");
            continue; // pula para a próxima iteração
        }
        // quando i == 2, faz movimento para a direita
        for (; j < 1; j++) {
            printf("Direita\n");
            break; // sai do loop interno
        }
    }

    return 0;
}
