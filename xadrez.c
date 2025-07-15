#include <stdio.h>

// Programa que simula o movimento de três peças de xadrez:
// Torre (com FOR), Bispo (com WHILE), Rainha (com DO-WHILE)

int main() {
    // Simulação do movimento da TORRE (5 casas para a direita) com FOR
    printf("Movimento da Torre (FOR):\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    printf("\n"); // Espaço entre as peças

    // Simulação do moviento do BISPO (5 casas na diagonal para cima e à direita) com WHILE
    printf("Movimento do Bispo (WHILE):\n");
    int contador_bispo = 1;
    while (contador_bispo <= 5) {
        printf("Cima Direita\n");
        contador_bispo++;
    }

    printf("\n"); // Espaço entre as peças

    // Simulação do movimento da RAINHA (8 casas para a esquerda) co DO-WHILE
    printf("Movimento da Rainha (DO-WHILE):\n");
    int contador_rainha = 1;
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha <= 8);

    return 0;
}
