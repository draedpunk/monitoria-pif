// Fazer um programa que leia uma lista de N nomes de até 10
// caracteres, calcule e imprima a quantidade de nomes masculinos,
// femininos e indefinidos, da seguinte forma:
// ○ Nome terminado com a letra ‘o’ - masculino;
// ○ Nome terminado com a letra ‘a’ - feminino;
// ○ Nomes terminados com outras letras - indefinido
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    int n;
    printf("Quantos nomes deseja informar?\n");
    scanf("%d", &n);

    char vetor_nomes[n][11];
    char nomes[11];

    for(int i=0; i<n; i++){
        printf("Informe o nome %d:\n", i+1);
        scanf("%s", nomes);
        strcpy(vetor_nomes[i], nomes);
    }

    int mas =0; 
    int fem =0; 
    int indefin=0;


    for(int i=0; i<n; i++){
        int tamanho_nome= strlen(vetor_nomes[i]);
        char ultima_letra = tolower(vetor_nomes[i][tamanho_nome -1]);
        if (ultima_letra == 'o') mas++;
        else if (ultima_letra == 'a') fem++;
        else indefin++;
    }

    printf("---- RELACAO DE NOMES ----\n");
    printf("Nomes masculinos: %d nome(s).\n", mas);
    printf("Nomes femininos: %d nome(s).\n", fem);
    printf("Nomes indefinidos: %d nome(s).\n", indefin);

    return 0;
}