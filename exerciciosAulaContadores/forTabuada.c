#include <stdio.h>

int main(){
    int n;
    printf("Tabuada de: ");
    scanf("%d", &n);

    for (int i = 0; i<=10; i++){
        printf("%d x %2d = %3d\n", n, i, n * i);
    }
    
    printf("Ate logo!\n");
    return 0;
}
