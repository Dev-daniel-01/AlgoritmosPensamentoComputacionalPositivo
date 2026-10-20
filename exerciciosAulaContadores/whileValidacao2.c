#include<stdio.h>

int main(){
    int num, soma = 0, qtd = 0;
    printf("Numero (0 encerra): ");
    scanf("%d", &num);
    
    while (num != 0) {
        soma += num;
        qtd++;
        printf("Numero (0 encerra): ");
        scanf("%d", &num);
    }
    
    printf("Soma = %d | Qtd = %d\n", soma, qtd);
    return 0;
}
