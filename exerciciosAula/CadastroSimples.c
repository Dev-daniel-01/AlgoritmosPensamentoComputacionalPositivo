#include <stdio.h>

int main() {
    int idade;
    char inicial;
    float alturaMetro;

    printf("Qual a sua inicial? ");
    scanf("%c", &inicial);

    printf("Qual a sua idade? ");
    scanf("%d", &idade);

    printf("Qual a sua altura em metros? ");
    scanf("%f", &alturaMetro);

    printf("\n--- FICHA ---\n");
    printf("Inicial: %c\n", inicial);
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f m\n", alturaMetro);
    printf("--------------\n");

    return 0;
}