#include <stdio.h>

int main() {
    int matriz[4][4];
    int soma = 0;

    for (int i = 0; i < 4; i++) { // aqui eu preencho a matri
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    
    for(int i=0; i <4; i++){ // aqui eu percorro cada linha e coluna
        for(int j =0; j<4; j++){
            if(i == 0 || i == 4 - 1 || j == 0 || j == 4 - 1){ // condição pra pegar so as bordas
                soma += matriz[i][j]; // aqui eu deveria botar os elemntos das bordas na variavel soma
            }
        }
    }

    // aqui ocorre a impressao da borda da matriz
    printf("Elementos da borda da matriz: ");
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            printf("%d ", matriz[i][j]);
        }
    }

    printf("Somatorio dos elementos da borda da matriz: ");
    printf("%d", soma);
    return 0;
}
