#include <stdio.h>

#define CONSUMO 8.5  

int main() {
    float distancia, preco, litros, custo;

    printf("Distancia da Viagem (Km): ");
    scanf("%f", &distancia);

    printf("Preco do Litro (R$): ");
    scanf("%f", &preco);

    litros = distancia / CONSUMO;
    custo  = litros * preco;

    printf("\n--- RELATORIO ---\n");
    printf("Litros: %.2f\n", litros);
    printf("Custo: R$ %6.2f",  custo);

    return 0;
}
