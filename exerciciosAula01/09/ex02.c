#include <stdio.h>

int main() {
    float n1 = 8.0, n2 = 4.0;
    float media;

    media = (n1 + n2) / 2.0;   // BUG 1 corrigido: parênteses

    if (media == 10.0) {       // BUG 2 corrigido: == em vez de =
        printf("Nota Maxima!\n");
    }

    printf("Media: %.1f\n", media);

    return 0;
}