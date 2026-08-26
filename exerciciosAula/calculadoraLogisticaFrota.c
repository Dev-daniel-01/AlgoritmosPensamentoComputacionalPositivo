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
    printf("%-8s %8.2f L\n",   "Litros:", litros);
    printf("%-8s R$ %6.2f\n",  "Custo:",  custo);

    return 0;
}