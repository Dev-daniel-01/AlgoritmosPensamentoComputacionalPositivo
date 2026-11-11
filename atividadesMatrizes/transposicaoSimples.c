#include <stdio.h>

int main() {

    int matriz[3][2] = {
        {1, 2},
        {3, 4},
        {5, 0}
    };

    int transposta[2][3];

    // Exibindo a matriz original
    printf("Matriz Original (3x2):\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Realizando a transposicao
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }

    // Exibindo a matriz transposta
    printf("\nMatriz Transposta (2x3):\n");

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", transposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}