#include <stdio.h>

int main() {
    char nome[50];
    float alturaMetro;
    float Peso;
    float calculo;

    printf("Qual o seu nome? ");
    scanf("%s", &nome);

    printf("Qual a sua altura em metros? ");
    scanf("%f", &alturaMetro);

    printf("Qual o seu peso? ");
    scanf("%f", &Peso);

    calculo = Peso / (alturaMetro * alturaMetro);

    printf("\n--- FICHA ---\n");
    printf("nome: %s\n", nome);
    printf("Altura: %.2f\n", alturaMetro);
    printf("Peso: %.2f m\n", Peso);
    printf("IMC CALCULO: %.2f m\n", calculo);
    printf("--------------\n");

    return 0;
}