#include <stdio.h>

double exponencial(double x);

main() {
    double exp, x;
    printf("Valor de X: " ); scanf("%lf", &x);
    exp = exponencial(x);
    printf("exp(%g) = %g\n", x, exp);
}

double exponencial(double x)
{
    int n = 1;
    double exp = 0.0, termino = 1.0;
    exp = termino; // primer termino
    while (termino > 1e-7) {
        termino *= x/n; // siguiente termino
        exp += termino; // sumar otro termino
        n++;
    }
    return exp;
}
