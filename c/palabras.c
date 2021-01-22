/* Contar caracteres, palabras y lineas en un texto */
#include <stdio.h>

main() {
    const int SI = 1;
    const int NO = 0;

    char car;
    int palabra = NO;
    int ncaracteres = 0, npalabras = 0, nlineas = 0;

    printf("Introducir texto: ");
    printf("Pulse Enter despues de cada linea.\n");
    printf("Para finalizar introducir la marca EOF\n\n");
    while ((car = getchar()) != EOF) {
        ++ncaracteres; // Contador de caracteres

        // eliminar blancos, tabuladores y finales de linea entre palabras
        if (car == ' ' || car == '\n' || car == '\t')
            palabra = NO;
        else if(palabra == NO) // csomienza una palabra
        {
            ++npalabras; // contador de palabras
            palabra = SI;
        }
        if (car == '\n')
            ++nlineas; // contador de lineas
    }
    printf("\n\nLetras: %d Palabras: %d Lineas %d\n", ncaracteres, npalabras, nlineas);
}
