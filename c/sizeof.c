#include <stdio.h>	

int main(int argc, char *argv[])
{
	
	int a = 0, t = 0;
	// sizeof da como resultado el tamaño en bytes de su operando, 
	// puede ser el identificador o el tipo de una variable previamente declarada
	t = sizeof a;
	printf("El tamaño del entero 'a' es: %d bytes\n", t);
	
	printf("El tamaño de un entero es: %d bytes\n", sizeof(int));
}
