#include <stdio.h>

int main() {
    int n, soma = 0;

    // Validação da entrada usando 'while' para garantir N > 0
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    while (n <= 0) {
        printf("Valor invalido! Digite um numero maior que 0: ");
        scanf("%d", &n);
    }

    // Laço 'for' para somar apenas os números pares de 1 ate N
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            soma += i;
        }
    }

    // Exibição do resultado final
    printf("Soma par = %d\n", soma);

    return 0;
}
