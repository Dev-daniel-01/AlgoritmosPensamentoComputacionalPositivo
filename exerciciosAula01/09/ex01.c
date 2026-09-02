#include <stdio.h>

int main() {
    int x = 10, y = 5, z = 0;

    int r1 = (x > y) && !(z == 1);
    int r2 = (x / y < 2) || (z != 0);

    printf("r1 = %d\n", r1);  // 1
    printf("r2 = %d\n", r2);  // 0

    return 0;
}