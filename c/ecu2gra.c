#include <stdio.h>
#include <math.h>
// FGeneral-> -b/2a +- sqrt(b * b - 4 *ac) / (2 * a);
void main() {
    double a, b, c; // coeficientes de la ecuacion
    double d; // discriminante
    double re, im; // parte real e imaginaria de la raiz -> 2a

    printf("Coeficientes a, b y c de la ecuacion: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("\n\n");

    if (a == 0 && b == 0)
        printf("La ecuacion es degenerada\n");
    else if (a == 0)
        printf("La unica raiz es: %.2lf\n", -c / b);
    else
    {
        re = -b / (2 * a);
        d = b * b - 4 * a * c;
        im = sqrt(fabs(d)) / (2 * a);
        if (d >= 0){
            printf("Raices reales:\n");
            printf("%.2lf  %.1lf", re + im, re - im);
        }
        else {
            printf("Raices complejas:\n");
            printf("%.2lf + %.2lf j\n", re, fabs(im));
            printf("%.2lf - %.2lf j\n", re, fabs(im));
        }
    }
}
