#include <stdio.h>

int main() {
    int n;
    for (n = 0; n <= 100; n++) {
        // Si n no es multiplo de 5, siguiente iteracion
        if (n % 5 != 0) continue;
        // Imprime los # multiplos de 5
        printf("%d\n", n);
    }
}
