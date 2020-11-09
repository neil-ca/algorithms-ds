#include <stdio.h>

/*
 * cannot be read or written directly to an enum type
 * */

enum colores {
	azul, amarillo, rojo, verde, blanco, negro
};

int main() {
	enum colores color;

	printf("Color: ");
	scanf("%d", &color);

	// visualizar
	printf("%d\n", color);
	if (color == verde) printf("limon\n"); 
		
}
