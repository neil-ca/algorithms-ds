#include <stdio.h>	
#define LINF -30
#define LSUP 100

/* 
* Funcion -> (F= 9/5 * C+ 32)
*/
float convertir(int c);

int main()
{
    int nGradosCentigrados = 0;
    int incremento = 6;
    float GradosFahrenheit = 0;

    nGradosCentigrados = LINF;
    while (nGradosCentigrados <= LSUP)
    {
        GradosFahrenheit = convertir(nGradosCentigrados);
        printf("%10d C %10.2f F\n", nGradosCentigrados, GradosFahrenheit);
        nGradosCentigrados += incremento;
    }
}

float convertir(int gcent) {
    float gfahr;
    gfahr = (float)9 / (float)5 * gcent + 32;
    return(gfahr);
}



