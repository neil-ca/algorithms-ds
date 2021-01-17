/*
Leer un texto y retorne el numero de palabras con al menos cuatro vocales diferentes
*/
#include <stdio.h>

main()
{
    int np = 0; // numero de palabras con mas de 4 vocales distintas
    int a = 0, e = 0, i = 0, o = 0, u = 0;
    char car;

    printf("Introducir texto: ");
    printf("Para finalizar introducir la marca EOF\n\n");
    while ((car = getchar()) != EOF)
    {
        switch (car)
        {
        case 'A': case 'a': case 'á':
            a = 1;
            break;
        case 'E': case 'e': case 'é':
            e = 1;
            break;
        case 'I': case 'i': case 'í':
            i = 1;
            break;
        case 'O': case 'o': case 'ó':
            o = 1;
            break;
        case 'U': case 'u': case 'ú':
            u = 1;
            break;
        default:
            if (car == ' ' || car == '\t' || car == '\n')
            {
                if ((a + e + i + o + u) >= 4) np++;
                a = e = i = o = u = 0;
            }
        }
    }

    if ((a + e + i + o + u) >= 4) np++;
    printf("\n\t--Numero de palabras con 4 o mas vocales distintas: %d\n", np);
}


