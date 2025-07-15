#include <stdio.h>

// ==================== TORRE ====================
// Movimento: 5 casas para a Direita
void moverTorre(int passos) {
    if (passos == 0) return; // Caso base da recursão
    printf("Direita\n");
    moverTorre(passos - 1);  // Chamada recursiva
}

// ==================== BISPO ====================
// Movimento: 5 casas em diagonal Cime direita (com recursividade + loops aninhados)
void moverBispo(int passos_restantes) {
    if (passos_restantes == 0) return;

    for (int vertical = 0; vertical < 1; vertical++) {
        for (int horizontal = 0; horizontal < 1; horizontal++) {
            printf("Cima Direita\n");
        }
    }

    moverBispo(passos_restantes - 1); // Chamada recursiva
}

// ==================== RAINHA ====================
// Movimento: 8 casas para a Esquerda
void moverRainha(int passos) {
    if (passos == 0) return;
    printf("Esquerda\n");
    moverRainha(passos - 1); // Chamada recursiva
}

// ==================== CAVALO ====================
// Movimento: 2 casas para Cima e 1 para Direita (em L)
void moverCavalo() {
    printf("Movimento do Cavalo (loops complexos):\n");

    int movimentos_vertical = 2;
    int movimentos_horizontal = 1;

    for (int i = 1; i <= movimentos_vertical + 1; i++) {
        if (i <= movimentos_vertical) {
            printf("Cima\n");
            continue; // Continua subindo
        }

        // Após os dois movimentos para cima, faz um para a direita
        int j = 1;
        while (j <= movimentos_horizontal) {
            printf("Direita\n");
            if (j == 1) break; // Sai após o primeiro movimento lateral
            j++;
        }
    }
}

// ==================== FUNÇÃO PRINCIPAL ====================
int main() {
    // ---------- TORRE ----------
    printf("Movimento da Torre (recursividade):\n");
    moverTorre(5);

    printf("\n");

    // ---------- BISPO ----------
    printf("Movimento do Bispo (recursividade + loops aninhados):\n");
    moverBispo(5);

    printf("\n");

    // ---------- RAINHA ----------
    printf("Movimento da Rainha (recursividade):\n");
    moverRainha(8);

    printf("\n");

    // ---------- CAVALO ----------
    moverCavalo();

    return 0;
}
