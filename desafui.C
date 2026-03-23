#include <stdio.h>
#include <string.h>

// 1. Definição da struct Territorio conforme solicitado
struct Territorio {
    char nome[30];
    char cor[10];
    int tropas;
};

int main() {
    // 2. Declaração de vetor de structs para 5 territórios
    struct Territorio mapa[5];
    int i;

    printf("--- Cadastro de Territórios - Jogo War ---\n\n");

    // 3. Entrada de dados utilizando laço for
    for (i = 0; i < 5; i++) {
        printf("Cadastro do %dº Território:\n", i + 1);
        
        printf("Nome do território: ");
        scanf("%s", mapa[i].nome);
        
        printf("Cor do exército: ");
        scanf("%s", mapa[i].cor);
        
        printf("Número de tropas: ");
        scanf("%d", &mapa[i].tropas);
        
        printf("---------------------------\n");
    }

    // 4. Exibição dos dados cadastrados
    printf("\n\n--- Territórios Cadastrados ---\n");
    printf("%-20s | %-10s | %s\n", "Nome", "Cor", "Tropas");
    printf("-------------------------------------------\n");
    
    for (i = 0; i < 5; i++) {
        printf("%-20s | %-10s | %d\n", mapa[i].nome, mapa[i].cor, mapa[i].tropas);
    }

    return 0;
}
