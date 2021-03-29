#include <stdio.h>

int main()
{
	int dato1, dato2, resultado;
	dato1 = 5000000;
	dato2 = 2;

	// Suma
	resultado = dato1 + dato2;
	printf("%d + %d = %d\n", dato1, dato2, resultado);

	// Resta
	resultado = dato1 - dato2;
	printf("%d - %d = %d\n", dato1, dato2, resultado);

	// Producto
	resultado = dato1 * dato2;
	printf("%d * %d = %d\n", dato1, dato2, resultado);

	// Cociente
	resultado = dato1 / dato2;
	printf("%d / %d = %d\n", dato1, dato2, resultado);

	// Resto
	resultado = dato1 % dato2;
	printf("%d % %d = %d\n", dato1, dato2, resultado);
}
