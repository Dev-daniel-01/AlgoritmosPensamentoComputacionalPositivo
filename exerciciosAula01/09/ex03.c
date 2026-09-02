#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    
    float celsius, fahreheit;

    printf("Digite a temperatura em Graus Celsius: ");
    scanf("%f", &celsius);
    fahreheit = (celsius * 1,8) + 32; 
    printf("Temperatura em fahreheit: %.2f", fahreheit);

    return 0;
}