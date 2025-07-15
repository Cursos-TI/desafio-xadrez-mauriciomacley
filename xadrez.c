#include <stdio.h>

// Simulação de movimentos das peças de xadrez:
// Torre (FOR), Bispo (WHILE), Rainha (DO-WHILE) e Cavalo (FOR + WHILE aninhado)

int main() {
    // ----------------- TORRE -----------------
    // Movimento: 5 casas para a direita usando FOR
    printf("Movimento da Torre (FOR):\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    printf("\n"); // Separação

    // ----------------- BISPO -----------------
    // Movimento: 5 casas na diagonal "Cima Direita" usando WHILE
    printf("Movimento do Bispo (WHILE):\n");
    int contador_bispo = 1;
    while (contador_bispo <= 5) {
        printf("Cima Direita\n");
        contador_bispo++;
    }

    printf("\n"); // Separação

    // ----------------- RAINHA -----------------
    // Movimento: 8 casas para a esquerda usando DO-WHILE
    printf("Movimento da Rainha (DO-WHILE):\n");
    int contador_rainha = 1;
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha <= 8);

    printf("\n"); // Separação

    // ----------------- CAVALO -----------------
    // Movimento: "L" = 2 casas para baixo + 1 casa para a esquerda
    // Utilizando FOR externo (para as 2 casas para baixo)
    // e WHILE interno (para 1 casa para a esquerda)
    printf("Movimento do Cavalo (FOR + WHILE):\n");

    const int passos_baixo = 2;
    const int passos_esquerda = 1;

    for (int i = 1; i <= passos_baixo; i++) {
        printf("Baixo\n"); // Cada passo para baixo
        int j = 1;
        while (i == passos_baixo && j <= passos_esquerda) {
            printf("Esquerda\n"); // Após os dois passos para baixo, faz um para a esquerda
            j++;
        }
    }

    return 0;
}
