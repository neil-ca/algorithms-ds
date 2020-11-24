#include <stdio.h>
// Paso de parametros por valor 
void intercambio(int, int);

int main() {
    int a = 20, b = 30;
    intercambio(a, b); // son pasados por valor
    printf("a vale %d y b vale %d\n", a, b);
}

void intercambio(int x, int y)
{
    int z = x;
    x = y;
    y = z;
}