#include <stdio.h>
#include <string.h>
#include <ctype.h>

int eh_Palindromo_Frases(char str[]) {
    int i = 0;
    int j = strlen(str) - 1;

    while (i < j) {
        // ignora espaços
        if (str[i] == ' ') {
            i++;
            continue;
        }
        if (str[j] == ' ') {
            j--;
            continue;
        }

        // compara letras em minúsculo
        if (tolower((unsigned char)str[i]) != tolower((unsigned char)str[j])) {
            return 0; // não é palíndromo
        }
        i++;
        j--;
    }
    return 1; // passou em todas as comparações
}

int main() {
    char frase[200];

    printf("Digite uma frase: ");
    scanf("%199[^\n]", frase); // lê até a quebra de linha

    if (eh_Palindromo_Frases(frase)) {
        printf("eh palindromo!\n");
    } else {
        printf("nao eh palindromo!\n");
    }

    return 0;
}