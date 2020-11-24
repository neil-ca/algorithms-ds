#include <stdio.h>

void intercambio(int *, int *);

int main() {
    int a = 20, b = 30;
    intercambio(&a, &b); // pasados por referencia
    printf("a es %d y b es %d\n", a, b);
}

void intercambio(int *x, int *y) {
    int z = *x; // contiene lo que hay en la direccion x
    *x = *y; // contenido de x = conte de y
    *y = z;
}