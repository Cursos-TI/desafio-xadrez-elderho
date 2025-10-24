// nivel mestre do desafio.

#include <stdio.h>

// ###########################################################
// Funções recursivas para TORRE, BISPO e RAINHA
// ###########################################################

// *** TORRE ***
// movimentos em linha reta (horizontal ou vertical)
void moverTorre(int passo, int total) {
    if (passo > total) return; // caso base da recursão
    printf("Direita (%d)\n", passo);
    moverTorre(passo + 1, total); // chamada recursiva
}

// *** BISPO ***
// movimentos em diagonais || recursão com loops aninhados
void moverBispo(int passo, int total) {
    if (passo > total) return; // caso base da recursão

    // Loop externo: movimento vertical (Cima)
    for (int v = 1; v <= 1; v++) { // 1 passo por vez
        // Loop interno: movimento horizontal (Direita)
        for (int h = 1; h <= 1; h++) {
            printf("Cima, Direita (%d)\n", passo);
        }
    }

    moverBispo(passo + 1, total); // chamada recursiva
}

// *** RAINHA ***
// movimentos em todas as direções
void moverRainha(int passo, int total) {
    if (passo > total) return; // caso base da recursão
    printf("Esquerda (%d)\n", passo);
    moverRainha(passo + 1, total); // chamada recursiva
}


// ###########################################################
// Cavalo - Loops complexos e controle de fluxo
// ###########################################################
void moverCavalo() {
    int movCima = 2;
    int movDireita = 1;

    printf("\n>>>>> Movimento do CAVALO: 2 casas para cima e 1 casa para a direita. <<<<<\n"); // Usando loops aninhados com múltiplas condições, break e continue.

    // Loop externo: sobe 2 casas
    for (int i = 1; i <= movCima; i++) {
        if (i == 2) {
            printf("Cima (%d)\n", i);

            // Loop interno: move 1 casa para a direita
            for (int j = 1; j <= movDireita; j++) {
                if (j > movDireita) break; // proteção extra (não necessária aqui)
                printf("Direita (%d)\n", j);
            }
        } else {
            // primeira casa para cima
            printf("Cima (%d)\n", i);
            continue; // volta ao início do loop externo
        }
    }
}

// ###########################################################
// Função principal (main)
// ###########################################################
int main() {
   
    // TORRE - Recursividade 
    int movtorre = 5;
    printf(">>>>> Movimento da TORRE: %d casas para a direita. <<<<<\n", movtorre);
    moverTorre(1, movtorre);

    
    // BISPO - Recursividade + Loops aninhados
    int movbispo = 5;
    printf("\n>>>>> Movimento do BISPO: %d casas em diagonal direita para cima. <<<<<\n", movbispo);
    moverBispo(1, movbispo);

    // RAINHA - Recursividade
    int movrainha = 8;
    printf("\n>>>>> Movimento da RAINHA: %d casas para a esquerda. <<<<<\n", movrainha);
    moverRainha(1, movrainha);

    // CAVALO - Loops complexos
    moverCavalo();


    // ###########################################################
    // Indicação de final do programa
    // ###########################################################
    printf("\n>>>>> MOVIMENTAÇÃO FINALIZADA! <<<<<\n");

    return 0;
}
