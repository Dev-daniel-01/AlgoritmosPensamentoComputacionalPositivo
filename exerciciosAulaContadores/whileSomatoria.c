#include <stdio.h>

int main(){

    int i = 1, n, soma = 0;
    printf("Somar de 1 ate: ");
    scanf("%d", &n);

    while (i <= n){
        int anterior = soma;
        soma += i;
        printf("%d + %d = %d\n", anterior, i, soma);
        i++;
    }
    printf("Soma = %d\n", soma);
    return 0;
}