#include <stdio.h>

int main() {

    int mat[2][2] = {1, 2, 3, 4};
    int soma_diag = 0;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
 
            if ( i == j){
                soma_diag+= mat[i][j]; // Acumula tudo               
            }
        }
    }
    printf("Soma = %d", soma_diag);

    return 0;
}