#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

#define MOVIMENTO_BISPO 5  // O bispo move 5 casas na diagonal superior direita
#define MOVIMENTO_TORRE 5  // A torre move 5 casas para a direita
#define MOVIMENTO_RAINHA 8 // A rainha move 8 casas para a esquerda

void movimentar_bispo() {
    // O bispo se move 5 casas na diagonal superior direita
    for (int i = 0; i < MOVIMENTO_BISPO; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }
}

void movimentar_torre() {
    // A torre se move 5 casas para a direita
    for (int i = 0; i < MOVIMENTO_TORRE; i++) {
        printf("Direita\n");
    }
}

void movimentar_rainha() {
    // A rainha se move 8 casas para a esquerda
    for (int i = 0; i < MOVIMENTO_RAINHA; i++) {
        printf("Esquerda\n");
    }
}

int main() {
    int opcao;

    // Solicitar ao usuário qual peça ele deseja mover
    printf("Escolha uma peça para mover:\n");
    printf("1. Bispo\n");
    printf("2. Torre\n");
    printf("3. Rainha\n");
    printf("Digite a opção (1, 2 ou 3): ");
    scanf("%d", &opcao);

    // Executar a movimentação baseada na escolha do usuário
    switch(opcao) {
        case 1:
            printf("Movimentando o Bispo:\n");
            movimentar_bispo();
            break;
        case 2:
            printf("Movimentando a Torre:\n");
            movimentar_torre();
            break;
        case 3:
            printf("Movimentando a Rainha:\n");
            movimentar_rainha();
            break;
        default:
            printf("Opção inválida. Por favor, escolha entre 1, 2 ou 3.\n");
            break;
    }

    return 0;
}

