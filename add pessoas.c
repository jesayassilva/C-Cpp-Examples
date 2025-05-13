#include <stdio.h>
#include <string.h>

#define MAX_PESSOAS 100

typedef struct {
    char nome[100];
    int idade;
    char cpf[15];
} Pessoa;

void cadastrarPessoa(Pessoa pessoas[], int *qtd) {
    if (*qtd >= MAX_PESSOAS) {
        printf("Limite de pessoas atingido.\n");
        return;
    }

    printf("Nome: ");
    getchar(); // limpar buffer
    fgets(pessoas[*qtd].nome, sizeof(pessoas[*qtd].nome), stdin);
    pessoas[*qtd].nome[strcspn(pessoas[*qtd].nome, "\n")] = '\0'; // remover \n

    printf("Idade: ");
    scanf("%d", &pessoas[*qtd].idade);

    printf("CPF: ");
    scanf(" %14s", pessoas[*qtd].cpf);

    (*qtd)++;
    printf("Pessoa cadastrada com sucesso!\n\n");
}

void listarPessoas(Pessoa pessoas[], int qtd) {
    if (qtd == 0) {
        printf("Nenhuma pessoa cadastrada.\n");
        return;
    }

    printf("\nLista de Pessoas:\n");
    for (int i = 0; i < qtd; i++) {
        printf("%d. %s | Idade: %d | CPF: %s\n",
               i + 1, pessoas[i].nome, pessoas[i].idade, pessoas[i].cpf);
    }
    printf("\n");
}

int main() {
    Pessoa pessoas[MAX_PESSOAS];
    int qtd = 0, opcao;

    do {
        printf("=== Menu ===\n");
        printf("1. Cadastrar pessoa\n");
        printf("2. Listar pessoas\n");
        printf("0. Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarPessoa(pessoas, &qtd);
                break;
            case 2:
                listarPessoas(pessoas, qtd);
                break;
            case 0:
                printf("Encerrando programa.\n");
                break;
            default:
                printf("Opção inválida.\n");
        }

    } while (opcao != 0);

    return 0;
}
