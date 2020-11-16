#include <stdio.h>

/*
 * cannot be read or written directly to an enum type
 * */

enum colores {
	azul, amarillo, rojo, verde, blanco, negro
};
// Con typedef podemos definir sinonimos de otro tipo ya sean primitivos o derivados
// -> typedef declaracion_tipo sinonimo
typedef enum colores t_colores;

int main() {
	t_colores color;

	printf("Color: ");
	scanf("%d", &color);

	// visualizar
	printf("%d\n", color);
	if (color == verde) printf("limon\n"); 
		
}
