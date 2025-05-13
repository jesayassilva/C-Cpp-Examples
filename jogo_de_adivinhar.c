#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//////////////////////////
//////////////////////////

void jogar() {
    int numeroSecreto, palpite, tentativas = 0;

    srand(time(NULL)); // inicializa o gerador de números aleatórios
    numeroSecreto = rand() % 10 + 1; // número entre 1 e 10

    printf("=== Jogo de Adivinhação ===\n");
    printf("Tente adivinhar o número entre 1 e 10.\n");

    do {
        printf("Digite seu palpite: ");
        scanf("%d", &palpite);
        tentativas++;

        if (palpite < numeroSecreto) {
            printf("Muito baixo!\n");
        } else if (palpite > numeroSecreto) {
            printf("Muito alto!\n");
        } else {
            printf("Parabéns! Você acertou em %d tentativas!\n", tentativas);
        }

    } while (palpite != numeroSecreto);
}

///// Main
int main() {
    int jogarNovamente;

    do {
        jogar();
        printf("Deseja jogar novamente? (1 = sim, 0 = não): ");
        scanf("%d", &jogarNovamente);
    } while (jogarNovamente == 1);

    printf("Obrigado por jogar!\n");
    return 0;
}
