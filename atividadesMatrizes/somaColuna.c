#include <stdio.h>

int main() {

    int mat[2][2] = {1, 2, 3, 4};
    int soma_coluna = 0;
    int fixa = 1;

    for (int i = 0; i < 2; i++) {
        soma_coluna += mat[i][fixa]; // Acumula tudo
    }
    printf("Soma = %d", soma_coluna);

    return 0;
}