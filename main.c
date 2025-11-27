#include <stdio.h>
#include <string.h>

// Definição da struct Territorio
// Ela agrupa os dados relacionados a cada território
struct Territorio {
    char nome[30];
    char cor[10];
    int tropas;
};

int main() {

    // Vetor que guarda 5 territórios
    struct Territorio territorios[5];

    // Entrada dos dados dos 5 territórios
    for (int i = 0; i < 5; i++) {
        printf("\n--- Cadastro do Territorio %d ---\n", i + 1);

        printf("Digite o nome do territorio: ");
        scanf("%s", territorios[i].nome);

        printf("Digite a cor do exercito: ");
        scanf("%s", territorios[i].cor);

        printf("Digite a quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);
    }

    // Exibe todos os dados cadastrados
    printf("\n============== LISTA DE TERRITORIOS ==============\n");

    for (int i = 0; i < 5; i++) {
        printf("\nTerritorio %d:\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do exercito: %s\n", territorios[i].cor);
        printf("Tropas: %d\n", territorios[i].tropas);
    }

    return 0;
}

