#include <stdio.h>
#include <string.h>
#include <ctype.h>

void limparString(char *entrada, char *limpa) {
    int j = 0;
    for (int i = 0; entrada[i] != '\0'; i++) {
        if (isalnum(entrada[i])) {
            limpa[j++] = tolower(entrada[i]);
        }
    }
    limpa[j] = '\0';
}

int ehPalindromo(char *texto) {
    char limpo[1000];
    limparString(texto, limpo);

    int tam = strlen(limpo);
    for (int i = 0; i < tam / 2; i++) {
        if (limpo[i] != limpo[tam - 1 - i]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char frase[1000];

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);
    frase[strcspn(frase, "\n")] = '\0'; // remover \n

    if (ehPalindromo(frase)) {
        printf("É um palíndromo!\n");
    } else {
        printf("Não é um palíndromo.\n");
    }

    return 0;
}
