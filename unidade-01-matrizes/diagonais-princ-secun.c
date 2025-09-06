#include <stdio.h>

int main() {
    int matriz[4][4];
    int principal[4];
    int secundaria[4];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 4; i++) {
        principal[i] = matriz[i][i];             // [0][0], [1][1], [2][2] e [3][3]
        secundaria[i] = matriz[i][4 - 1 - i];    // [0][3] [1][2], [2][1] e [3][0]
    }

    printf("Diagonal principal: ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", principal[i]);
    }
    printf("\n");
    
    printf("Diagonal secundaria: ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", secundaria[i]);
    }
    printf("\n");

    return 0;
}
