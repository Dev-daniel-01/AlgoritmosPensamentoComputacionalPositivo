#include <stdio.h>

int main() {
    int valor, notas50, notas20, notas10, notas5, notas2, troco;

    printf("Valor do saque (R$): ");
    scanf("%d", &valor);

    printf("--- DISPENSER ---\n");

    notas50 = valor / 50;
    troco = valor % 50;

    if (notas50 > 0) {
        printf("Notas de 50: %d\n", notas50);
    }

    notas20 = troco / 20;
    troco = troco % 20;

    if (notas20 > 0) {
        printf("Notas de 20: %d\n", notas20);
    }

    notas10 = troco / 10;
    troco = troco % 10;

    if (notas10 > 0) {
        printf("Notas de 10: %d\n", notas10);
    }

    notas5 = troco / 5;
    troco = troco % 5;

    if (notas5 > 0) {
        printf("Notas de 5: %d\n", notas5);
    }

    notas2 = troco / 2;
    troco = troco % 2;

    if (notas2 > 0) {
        printf("Notas de 2: %d\n", notas2);
    }

    if (troco > 0) {
        printf("Resto: %d\n", troco);
    }

    return 0;
}