#include <stdio.h>


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

    printf("Movimento do Bispo:\n");
    moverBispo(5);

    
    printf("\nMovimento da Torre:\n");
    moverTorre(5);

    
    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    
    printf("\nMovimento do Cavalo (em L):\n");
    for (int i = 0, j = 0; i < 3; i++) {
        if (i < 2) {
            printf("Cima\n");
            continue;
        }
        
        for (; j < 1; j++) {
            printf("Direita\n");
            break; 
        }
    }

    return 0;
}
