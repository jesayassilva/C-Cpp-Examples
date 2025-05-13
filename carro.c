#include <stdio.h>
#include <string.h>

#define MAX_CARROS 100

typedef struct {
    char modelo[50];
    int ano;
    float preco;
} Carro;

void cadastrarCarro(Carro carros[], int *qtd) {
    if (*qtd >= MAX_CARROS) {
        printf("Limite de carros atingido!\n");
        return;
    }

    printf("Modelo: ");
    scanf(" %[^\n]", carros[*qtd].modelo); // lê até o \n (com espaço antes do %)
    
    printf("Ano: ");
    scanf("%d", &carros[*qtd].ano);

    printf("Preço: ");
    scanf("%f", &carros[*qtd].preco);

    (*qtd)++;
    printf("Carro cadastrado com sucesso!\n\n");
}

void listarCarros(Carro carros[], int qtd) {
    if (qtd == 0) {
        printf("Nenhum carro cadastrado.\n");
        return;
    }

    printf("\nLista de Carros:\n");
    for (int i = 0; i < qtd; i++) {
        printf("%d. %s | Ano: %d | Preço: R$ %.2f\n",
               i + 1, carros[i].modelo, carros[i].ano, carros[i].preco);
    }
    printf("\n");
}

int main() {
    Carro carros[MAX_CARROS];
    int qtd = 0;
    int opcao;

    do {
        printf("=== Menu ===\n");
        printf("1. Cadastrar carro\n");
        printf("2. Listar carros\n");
        printf("0. Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarCarro(carros, &qtd);
                break;
            case 2:
                listarCarros(carros, qtd);
                break;
            case 0:
                printf("Encerrando programa.\n");
                break;
            default:
                printf("Opção inválida!\n");
        }

    } while (opcao != 0);

    return 0;
}
