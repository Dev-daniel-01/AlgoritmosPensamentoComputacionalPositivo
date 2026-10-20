#include<stdio.h>

int main(){
    int idade;
    printf("Idade (0 a 120): ");
    scanf("%d", &idade);
    
    while (idade < 0 || idade > 120) {
        printf("Valor invalido! Digite de novo: ");
        scanf("%d", &idade);
    }
    
    printf("Idade registrada: %d\n", idade);
    return 0;
}
