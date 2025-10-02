// Fazer um programa que leia uma lista de N nomes de pessoas de até
// 10 caracteres e imprima esta mesma lista de nomes todos em letras
// maiúsculas usando a biblioteca ctype.h.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    int n;
    printf("Quantos nomes deseja informar?\n");
    scanf("%d",&n);

    char vetor_nomes[n][11];
    char nomes[11];
    
    for(int i=0; i<n; i++){ // inserindo nomes no vetor de nomes
        printf("Informe o nome %d:\n", i+1);
        scanf(" %s", nomes);
        strcpy(vetor_nomes[i], nomes);
    }

    //tratando os nomes
    for(int i=0; i < n; i++){
        for(int j=0; vetor_nomes[i][j] != '\0'; j++){
            vetor_nomes[i][j] = toupper(vetor_nomes[i][j]);
        } 
    }

    printf("---- Exibindo os nomes ----\n");
    for(int i =0; i < n; i++){
        printf("%s\n", vetor_nomes[i]);
    }


    return 0;
}

