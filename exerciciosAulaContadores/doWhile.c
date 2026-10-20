#include<stdio.h>

int main(){
    int op;
    do {
        printf("\n1-Somar  2-Subtrair  0-Sair\n");
        printf("Opcao: ");
        scanf("%d", &op);
        
        if (op == 1) printf("Somando...\n");
        else if (op == 2) printf("Subtraindo...\n");
    } while (op != 0);
    
    printf("Ate logo!\n");
    return 0;
}
