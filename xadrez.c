#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    // ###########################################################
    // TORRE - movimenta-se em linha reta (horizontal ou vertical)
    // ###########################################################
    int it; 
    int movtorre = 5; // número de casas que a torre vai andar
    
    printf(">>>>> Movimento da TORRE: %d casas <<<<<\n", movtorre);
    // A torre se move em linha reta, 5 casas para a direita
    for (it = 1; it <= movtorre; it++) {
        printf("Direita (%d)\n", it);
    }

    // ###########################################################
    // BISPO - movimenta-se em diagonais
    // ###########################################################
    int ib = 1;
    int movbispo = 5; // número de casas que o bispo vai andar

    printf("\n>>>>> Movimento do BISPO: %d casas <<<<<\n", movbispo);
    // O bispo se move na diagonal, para cima e para a direita
    while (ib <= movbispo) {
        printf("Cima, Direita (%d)\n", ib);
        ib++;
    }

    // ###########################################################
    // RAINHA - movimenta-se em qualquer direção
    // ###########################################################
    int ir = 1;
    int movrainha = 8; // número de casas que a rainha vai andar

    printf("\n>>>>> Movimento da RAINHA: %d casas <<<<<\n", movrainha);
    // A rainha se move em todas as direções, neste caso será para a esquerda
    do {
        printf("Esquerda (%d)\n", ir);
        ir++;
    } while (ir <= movrainha);

    // ###########################################################
    // Indicação de final do programa
    // ###########################################################
    printf("\n>>>>> MOVIMENTAÇÃO FINALIZADA! <<<<<\n");


    return 0;
}
