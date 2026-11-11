#include <stdio.h>

int main() {

    int matriz[3][3];
    int soma = 0;

    // Leitura dos 9 valores
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o valor [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Soma da diagonal principal (i == j)
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j) {
                soma += matriz[i][j];
            }
        }
    }

    printf("Soma da diagonal principal = %d\n", soma);

    return 0;
}           