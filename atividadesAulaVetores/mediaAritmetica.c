#include<stdio.h>

int main(){
    float v[4] = {7.5, 8.0, 6.5, 9.0};
    float soma = 0;
    int contador = 0;
    for (int i = 0; i < 4; i++){
        
        soma += v[i];
        contador++;
    }
    float media = soma / contador;
    printf("Media: %.2f \n", media);
    printf("Soma: %.2f", soma);
    
}